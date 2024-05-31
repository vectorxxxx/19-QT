#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include <mythread.h>

#define PORT        8888

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void newConnectionSlot();

    void readyReadSlot();

    void threadSlot(QByteArray ba);

private:
    Ui::Widget *ui;
    QTcpServer *server;
    QTcpSocket *socket;

};

#endif // WIDGET_H
