#include "widget.h"
#include "ui_widget.h"
#include "ctrl.h"
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->loginButton, SIGNAL(clicked()), this, SLOT(loginButton_clicked_slots()));
}

Widget::~Widget()
{
    delete ui;
}

// 信号与槽——自动关联
void Widget::on_registerButton_clicked()
{
//    qDebug("on_registerButton_clicked");
}

// 信号与槽——手动关联
void Widget::loginButton_clicked_slots()
{
//    qDebug("loginButton_clicked_slots");

    // 简单校验账号密码
    QString userName = ui->usernameEdit->text();
    QString passWord = ui->passwordEdit->text();
    if (userName == "admin" && passWord == "admin")
    {
        // 校验成功，进行登录，跳转智能家居界面
        ctrl* ct = new ctrl;
        ct->setGeometry(this->geometry());
        ct->show();
    }
}
