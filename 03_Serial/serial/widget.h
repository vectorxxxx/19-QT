#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSerialPort>  // 引入串口头文件

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    // 定义串口
    QSerialPort *serialPort;

private slots:
    void on_openBt_clicked();

    void on_closeBt_clicked();

    // 串口接收槽函数
    void serialReceive_Slot();

    void on_sendBt_clicked();

    void on_clearBt_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
