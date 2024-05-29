#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 初始化 picID
    picID = 1;

    // 初始化显示第一张图片
    this->showPic(picID);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    myTimerID = this->startTimer(TIMEOUT);
}

void Widget::timerEvent(QTimerEvent *event)
{
    if (event->timerId() != myTimerID)
    {
        return;
    }

    picID++;
    if (picID == 5)
    {
        picID = 1;
    }
    showPic(picID);
}

void Widget::showPic(int picID)
{
    QString path("D:/workspace-mine/19-QT/09_objectTimer/objectTimer/pic/");
    path += QString::number(picID);
    path += ".jpg";

    QPixmap pix(path);
    ui->picLabel->setPixmap(pix);
}

void Widget::on_pauseButton_clicked()
{
    this->killTimer(myTimerID);
}
