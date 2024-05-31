#include "mythread.h"

myThread::myThread(QTcpSocket *s)
{
    socket = s;
}

void myThread::run()
{
    connect(socket, &QTcpSocket::readyRead, this, &myThread::readyReadSlot);
}

void myThread::readyReadSlot()
{
//    qDebug() << socket->readAll();

    QByteArray ba = socket->readAll();
    // 发送自定义信号
    emit sendToWidget(ba);
}
