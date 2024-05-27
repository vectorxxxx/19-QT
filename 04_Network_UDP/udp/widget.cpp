#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 初始化 QUdpSocket
    udpSocket = new QUdpSocket(this); // 跟随父类一起销毁
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_openBt_clicked()
{
    // 绑定本机端口
    if(udpSocket->bind(ui->localPort->text().toUInt()))
    {
        QMessageBox::information(this, "提示", "打开连接成功");
    }
    else
    {
        QMessageBox::critical(this, "提示", "打开连接失败");
    }

    // 关联信号槽
    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(readyRead_Slot()));
}

void Widget::readyRead_Slot()
{
    // 循环判断是否存在数据报文
    while(udpSocket->hasPendingDatagrams())
    {
        // 读取数据报文
        QByteArray data;
        data.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(data.data(), data.length());

        // 显示数据报文
        ui->receiveEdit->appendPlainText(data.data());
    }
}

void Widget::on_closeBt_clicked()
{
    udpSocket->close();
    QMessageBox::information(this, "提示", "关闭连接成功");
}

void Widget::on_sendBt_clicked()
{
    QString buf = ui->sendEdit->text();
    QHostAddress address;
    address.setAddress(ui->aimIP->text());
    quint16 port = ui->aimPort->text().toUInt();

    //     qint64 writeDatagram(const char *data, qint64 len, const QHostAddress &host, quint16 port);
    udpSocket->writeDatagram(buf.toLocal8Bit().data(), buf.size(), address, port);
}
