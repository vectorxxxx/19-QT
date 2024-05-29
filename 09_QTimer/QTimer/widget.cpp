#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 初始化 picID
    picID = 1;
    // 显示图片
    showPic(picID);

    // 初始化定时器
    timer = new QTimer;

    // 关联 timer 的 timeout 信号
    connect(timer, &QTimer::timeout, this, &Widget::timeoutSlot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    timer->start(TIMEOUT);
}

void Widget::timeoutSlot()
{
    picID++;
    if (picID == 5)
    {
        picID = 1;
    }
    showPic(picID);
}

void Widget::showPic(int picID)
{
    QString path("D:\\workspace-mine\\19-QT\\09_QTimer\\QTimer\\pic\\");
    path += QString::number(picID);
    path += ".jpg";

    QImage img;
    img.load(path);
    ui->imgLabel->setPixmap(QPixmap::fromImage(img));
}

void Widget::on_singleButton_clicked()
{
    timer->singleShot(TIMEOUT, this, SLOT(timeoutSlot()));
}

void Widget::on_pauseButton_clicked()
{
    timer->stop();
}
