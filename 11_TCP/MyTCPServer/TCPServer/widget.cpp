#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    server = new MyTCPServer;

    server->listen(QHostAddress::AnyIPv4, PORT);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::readyReadSlot()
{
    QTcpSocket *s = (QTcpSocket *)sender();
    ui->receiveEdit->setText(QString(s->readAll()));
}
