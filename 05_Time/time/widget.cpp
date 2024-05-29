#include "widget.h"
#include "ui_widget.h"

static int i;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 当前日期时间
    ui->showCurrentDateTime->setText(QDateTime::currentDateTime().toString("yyyy年MM月dd日 HH:mm:ss"));
    currentTimer.start(1000);
    connect(&currentTimer, SIGNAL(timeout()), this, SLOT(currentTimer_timeout_slot()));

    // 秒表计时器
    time.setHMS(0, 0, 0, 0);
    ui->showTime->setText(time.toString("hh:mm:ss.zzz"));
    connect(&timer, SIGNAL(timeout()), this, SLOT(timer_timeout_slot()));
}

void Widget::currentTimer_timeout_slot()
{
    ui->showCurrentDateTime->setText(QDateTime::currentDateTime().toString("yyyy年MM月dd日 HH:mm:ss"));
}

void Widget::timer_timeout_slot()
{
    //qDebug("hah");

    time = time.addMSecs(40);
    ui->showTime->setText(time.toString("hh:mm:ss.zzz"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startBt_clicked()
{
    timer.start(30);
}

void Widget::on_stopBt_clicked()
{
    timer.stop();
}

void Widget::on_resetBt_clicked()
{
    timer.stop();
    time.setHMS(0, 0, 0, 0);
    ui->showTime->setText(time.toString("hh:mm:ss.zzz"));
    ui->dotTime->clear();
    i = 0;
}

void Widget::on_dotBt_clicked()
{
    i++;

    QString tmp;
    tmp.sprintf("第%d名: ", i);

    ui->dotTime->append(tmp + time.toString("hh:mm:ss.zzz"));
}
