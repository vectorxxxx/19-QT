#include "mytcpserver.h"
#include <QThread>
#include "clienthandler.h"

MyTCPServer::MyTCPServer(QObject *parent)
    : QTcpServer{parent}
{}

// 客户端连接时，会触发当前函数
void MyTCPServer::incomingConnection(qintptr socketDescriptor)
{
    qDebug() << "enter incomingConnection...";

    // 线程对象
    QThread *subThread = new QThread;
    // 事件对象
    ClientHandler *myClient = new ClientHandler(socketDescriptor);

    // 事件对象移动到线程
    myClient->moveToThread(subThread);

    // 启动线程
    subThread->start();

    // 发出自定义信号 send_to_thread 到 ClientHandler 的 working 槽函数
    connect(this, &MyTCPServer::send_to_thread, myClient, &ClientHandler::working);
    emit send_to_thread();
}
