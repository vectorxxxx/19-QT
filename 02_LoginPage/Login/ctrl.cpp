#include "ctrl.h"
#include "ui_ctrl.h"

ctrl::ctrl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ctrl)
{
    ui->setupUi(this);
}

ctrl::~ctrl()
{
    delete ui;
}

void ctrl::on_backButton_clicked()
{
    // 跳转回登录页面
    this->close();
}
