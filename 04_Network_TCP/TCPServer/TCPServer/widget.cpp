#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 初始化 QTcpServer 和 QTcpSocket
    tcpServer = new QTcpServer(this);
    tcpSocket = new QTcpSocket(this);

    // 关联信号与槽
    // 信号：tcpServer->newConnection()
    // 槽：newConnection_Slot()
    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(newConnection_Slot()));
}

void Widget::newConnection_Slot()
{
    // 获取 Socket
    tcpSocket = tcpServer->nextPendingConnection();

    // 关联 Socket 的 readyRead() 信号到 readyRead_Slot() 槽中
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readyRead_Slot()));
}

void Widget::readyRead_Slot()
{
    // 读取所有数据并显示
    QString data = tcpSocket->readAll();
    ui->receiveEdit->appendPlainText(data);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_openBt_clicked()
{
    // 监听所有人的连接
    tcpServer->listen(QHostAddress::Any, ui->portEdit->text().toUInt());
}

void Widget::on_closeBt_clicked()
{
    tcpServer->close();
}

void Widget::on_sendBt_clicked()
{
    tcpSocket->write(ui->sendEdit->text().toLocal8Bit().data());
}
