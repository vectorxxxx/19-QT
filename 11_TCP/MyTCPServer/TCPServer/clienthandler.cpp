#include "clienthandler.h"

ClientHandler::ClientHandler(qintptr socketDes, QObject *parent)
    : QObject{parent}
{
    socketDescriptor = socketDes;
}

void ClientHandler::working()
{
    qDebug() << "enter working...";

    // 根据 Socket 描述符重新建立一个 QTcpSocket
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);

    // 连接成功后转到槽函数进行处理，这样才会真正在子线程中进行处理，而不会阻塞主线程
    connect(socket, &QTcpSocket::readyRead, this, &ClientHandler::receiveInfo);
}

void ClientHandler::receiveInfo()
{
    qDebug() << socket->readAll();
}
