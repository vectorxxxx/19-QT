#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>
#include <QDir>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include <QUrl>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    playlist = new QMediaPlaylist(this);
    player = new QMediaPlayer(this);

    // 播放时长
    connect(player, &QMediaPlayer::positionChanged, this, [=](qint64 position){
        // 以十进制形式显示，不足两位以0补齐
        ui->positionLabel->setText(QString("%1:%2").arg(position/1000/60, 2, 10, QChar('0')).arg(position/1000%60, 2, 10, QChar('0')));
        // 同步进度条
        ui->playProcessSlider->setValue(position);
    });
    // 总时长
    connect(player, &QMediaPlayer::durationChanged, this, [=](qint64 duration){
        // 以十进制形式显示，不足两位以0补齐
        ui->durationLabel->setText(QString("%1:%2").arg(duration/1000/60, 2, 10, QChar('0')).arg(duration/1000%60, 2, 10, QChar('0')));
        // 同步进度条
        ui->playProcessSlider->setRange(0, duration);
    });

    // 播放进度条
    connect(ui->playProcessSlider, &QSlider::sliderMoved, player, &QMediaPlayer::setPosition);

    // 音量进度条
    player->setVolume(curVolume);
    ui->volumeSlider->setRange(0, 100);
    ui->volumeSlider->setValue(curVolume);
    connect(ui->volumeSlider, &QSlider::sliderMoved, this, [=](int position){
        lastVolume = curVolume;
        curVolume = position;
        if (curVolume != 0)
        {
            ui->volumeButton->setStyleSheet("icon: url(:/assets/volume.png);");
        }
        else
        {
            ui->volumeButton->setStyleSheet("icon: url(:/assets/volume-close.png);");
        }
        player->setVolume(curVolume);
    });

    // 播放模式
    playlist->setPlaybackMode(QMediaPlaylist::Sequential);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_openDirButton_clicked()
{
    // 打开默认文件夹
    QString path = QFileDialog::getExistingDirectory(this, "请选择要播放的音乐", "D:/workspace-mine/19-QT/14_MusicPlayer/MusicPlayer/assets/playlist");
    // 读取文件下常用格式的音乐文件
    QDir dir(path);
    auto musicList = dir.entryList(QStringList() << "*.mp3" << "*.flac" << "*.wav");

    // 显示到展示列表
    ui->playListWidget->addItems(musicList);
    // 默认选中第一个
    ui->playListWidget->setCurrentRow(curPlayIndex);

    // 添加到播放列表
    for(auto music: musicList)
    {
        playlist->addMedia(QUrl::fromLocalFile(path + "/" + music));
    }
    player->setPlaylist(playlist);
}

// 通用播放逻辑
void Widget::play()
{
    if (playlist->isEmpty())
    {
        //QMessageBox::warning(this, "提示", "请先选择要播放的音乐");
        return;
    }
    ui->playButton->setStyleSheet("border-image: url(:/assets/pause.png);");
    ui->playListWidget->setCurrentRow(curPlayIndex);
    playlist->setCurrentIndex(curPlayIndex);
    player->play();
}

// 播放\暂停
void Widget::on_playButton_clicked()
{
    switch(player->state()) {
    case QMediaPlayer::StoppedState:
    {
        this->play();
        break;
    }
    case QMediaPlayer::PlayingState:
        ui->playButton->setStyleSheet("border-image: url(:/assets/play.png);");
        player->pause();
        break;
    case QMediaPlayer::PausedState:
        player->play();
        break;
    }
}

// 上一曲
void Widget::on_lastsongButton_clicked()
{
    curPlayIndex = playlist->previousIndex();
    if (curPlayIndex == -1)
    {
        curPlayIndex = 0;
    }
    // 单曲循环index不变，单独处理
    if (playMode == 2)
    {
        curPlayIndex = (curPlayIndex - 1) % 4;
    }
    this->play();
}

// 下一曲
void Widget::on_nextsongButton_clicked()
{
    curPlayIndex = playlist->nextIndex();
    qDebug() << curPlayIndex;
    if (curPlayIndex == -1)
    {
        curPlayIndex = 0;
    }
    // 单曲循环index不变，单独处理
    if (playMode == 2)
    {
        curPlayIndex = (curPlayIndex + 1) % playlist->mediaCount();
    }
    this->play();
}

// 双击播放
void Widget::on_playListWidget_itemDoubleClicked(QListWidgetItem *item)
{
    curPlayIndex = ui->playListWidget->currentRow();
    this->play();
}

// 音量开关
void Widget::on_volumeButton_clicked()
{
    curVolume = player->volume();
    if (curVolume != 0)
    {
        lastVolume = curVolume;
        curVolume = 0;
        ui->volumeButton->setStyleSheet("icon: url(:/assets/volume-close.png);");
    }
    else
    {
        curVolume = lastVolume;
        ui->volumeButton->setStyleSheet("icon: url(:/assets/volume.png);");
    }
    ui->volumeSlider->setValue(curVolume);
    player->setVolume(curVolume);
}

// 顺序播放、循环播放、随机播放
void Widget::on_playModeButton_clicked()
{
    playMode = (playMode + 1) % 4;
    switch(playMode) {
    case 0:
        ui->playModeButton->setStyleSheet("icon: url(:/assets/playmode-sequential.png);");
        playlist->setPlaybackMode(QMediaPlaylist::Sequential);
        break;
    case 1:
        ui->playModeButton->setStyleSheet("icon: url(:/assets/playmode-loop.png);");
        playlist->setPlaybackMode(QMediaPlaylist::Loop);
        break;
    case 2:
        ui->playModeButton->setStyleSheet("icon: url(:/assets/playmode-currentiteminloop.png);");
        playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
        break;
    case 3:
        ui->playModeButton->setStyleSheet("icon: url(:/assets/playmode-random.png);");
        playlist->setPlaybackMode(QMediaPlaylist::Random);
        break;
    }
}

