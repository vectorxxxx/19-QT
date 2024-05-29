#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDate>
#include <QTime>
#include <QTimer>
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QTimer currentTimer;

    QTime time;
    QTimer timer;

private slots:
    void currentTimer_timeout_slot();

    void timer_timeout_slot();

    void on_startBt_clicked();

    void on_stopBt_clicked();

    void on_resetBt_clicked();

    void on_dotBt_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
