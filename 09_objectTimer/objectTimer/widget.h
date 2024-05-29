#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#define TIMEOUT     1 * 1000

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);

    // 定时器虚函数
    virtual void timerEvent(QTimerEvent *event);

    ~Widget();

private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

private:
    Ui::Widget *ui;

    // 定时器ID
    int myTimerID;

    // 图片ID
    int picID;

    // 显示图片函数
    void showPic(int picID);
};

#endif // WIDGET_H
