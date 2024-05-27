#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    // 定义 QUdpSocket
    QUdpSocket *udpSocket;

private slots:
    void on_openBt_clicked();

    void on_closeBt_clicked();

    void on_sendBt_clicked();

    void readyRead_Slot();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
