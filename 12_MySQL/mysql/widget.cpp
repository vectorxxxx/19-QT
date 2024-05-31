#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 初始化数据库
    db = QSqlDatabase::addDatabase("QMYSQL");   // MySQL数据库驱动
    db.setHostName("localhost");
    db.setDatabaseName("mydatabase");
    db.setUserName("root");
    db.setPassword("root");

    // 连接数据库
    if (db.open())
    {
        QMessageBox::information(this, "提示", "连接成功");
    }
    else
    {
        QMessageBox::critical(this, "提示", "连接失败");
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_queryPushButton_clicked()
{

}
