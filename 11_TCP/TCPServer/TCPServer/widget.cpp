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
}
