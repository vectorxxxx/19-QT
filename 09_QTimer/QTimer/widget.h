#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>

#define TIMEOUT         1 * 1000

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_startButton_clicked();

    void timeoutSlot();


    void on_singleButton_clicked();

    void on_pauseButton_clicked();

private:
    Ui::Widget *ui;

    QTimer *timer;

    int picID;

    void showPic(int picID);
};

#endif // WIDGET_H
