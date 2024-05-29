#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>

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

private:
    Ui::Widget *ui;
    QTcpServer *server;
    QTcpSocket *socket;

};

#endif // WIDGET_H
