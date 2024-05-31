#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    server = new QTcpServer;

    server->listen(QHostAddress::AnyIPv4, PORT);

    connect(server, &QTcpServer::newConnection, this, &Widget::newConnectionSlot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::newConnectionSlot()
{
    socket = server->nextPendingConnection();

    ui->ipEdit->setText(socket->peerAddress().toString());
    ui->portEdit->setText(QString::number(socket->peerPort()));

    // 接受消息
    // connect(socket, &QTcpSocket::readyRead, this, &Widget::readyReadSlot);

    // 启动一个线程
    myThread *mt = new myThread(socket);
    mt->start();

    // 接收线程中的自定义信号
    connect(mt, &myThread::sendToWidget, this, &Widget::threadSlot);
}

void Widget::readyReadSlot()
{
    QTcpSocket *s = (QTcpSocket *)sender();
    ui->receiveEdit->setText(QString(s->readAll()));
}

void Widget::threadSlot(QByteArray ba)
{
    ui->receiveEdit->setText(QString(ba));
}
