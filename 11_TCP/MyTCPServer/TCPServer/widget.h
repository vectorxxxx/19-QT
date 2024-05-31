#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QString>
#include "mytcpserver.h"

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
    void readyReadSlot();

private:
    Ui::Widget *ui;
    MyTCPServer *server;

};

#endif // WIDGET_H
