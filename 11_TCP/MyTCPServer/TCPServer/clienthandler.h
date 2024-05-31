#ifndef CLIENTHANDLER_H
#define CLIENTHANDLER_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class ClientHandler : public QObject
{
    Q_OBJECT
public:
    explicit ClientHandler(qintptr socketDes, QObject *parent = nullptr);

public slots:
    void working();

private slots:
    void receiveInfo();

private:
    qintptr socketDescriptor;
    QTcpSocket *socket;

};

#endif // CLIENTHANDLER_H
