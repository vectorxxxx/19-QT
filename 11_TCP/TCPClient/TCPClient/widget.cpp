#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    // 初始化 QTcpSocket
    socket = new QTcpSocket;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_cancelButton_clicked()
{
    this->close();
}

void Widget::on_connectButton_clicked()
{
    // 连接主机
    QString IP = ui->ipEdit->text();
    QString PORT = ui->portEdit->text();
    socket->connectToHost(QHostAddress(IP), PORT.toUShort());

    // 连接成功
    connect(socket, &QTcpSocket::connected, this, [this, IP, PORT](){
        QMessageBox::information(this, "提示", QString("TCP连接").append(IP).append(":").append(PORT).append("成功"));
    });

    // 连接断开
    connect(socket, &QTcpSocket::disconnected, this, [this, IP, PORT](){
        QMessageBox::warning(this, "提示", QString("TCP连接%1:%2断开，请重试").arg(IP).arg(PORT));
    });
}
