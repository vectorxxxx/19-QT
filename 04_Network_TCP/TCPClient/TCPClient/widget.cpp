#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 初始化 tcpSocket
    tcpSocket = new QTcpSocket(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_openBt_clicked()
{
    // 连接服务器
    tcpSocket->connectToHost(ui->ipEdit->text(), ui->portEdit->text().toUInt());

    // 关联信号与槽
    connect(tcpSocket, SIGNAL(connected()), this, SLOT(connected_Slot()));
}

void Widget::connected_Slot()
{
    // 关联 tcpSocket 的 readyRead() 信号到 this 的 readyRead_Slot() 槽函数
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readyRead_Slot()));
}

void Widget::readyRead_Slot()
{
    // 读取数据并显示
    ui->receiveEdit->appendPlainText(tcpSocket->readAll());
}

void Widget::on_closeBt_clicked()
{
    tcpSocket->close();
}

void Widget::on_sendBt_clicked()
{
    tcpSocket->write(ui->sendEdit->text().toLocal8Bit().data());
}
