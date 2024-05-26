#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    void on_registerButton_clicked();   // 信号与槽——自动关联
    void loginButton_clicked_slots();   // 信号与槽——手动关联

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
