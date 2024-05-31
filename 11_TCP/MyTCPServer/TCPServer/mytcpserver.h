#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>

class MyTCPServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyTCPServer(QObject *parent = 0);

protected:
    void incomingConnection(qintptr socketDescriptor);

signals:
    void send_to_thread();
};

#endif // MYTCPSERVER_H
