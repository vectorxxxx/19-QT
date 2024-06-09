#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QListWidgetItem>

// 不在头文件包含，这里直接声明下
class QMediaPlaylist;
class QMediaPlayer;

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_openDirButton_clicked();

    void on_playButton_clicked();

    void on_lastsongButton_clicked();

    void on_nextsongButton_clicked();

    void on_playListWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_volumeButton_clicked();

    void on_playModeButton_clicked();

private:
    Ui::Widget *ui;
    QMediaPlaylist *playlist;
    QMediaPlayer *player;
    int curPlayIndex = 0;
    int curVolume = 50;
    int lastVolume = 0;
    int playMode = 0;

    void play();
};
#endif // WIDGET_H
