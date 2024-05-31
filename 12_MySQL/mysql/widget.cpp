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
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("mydatabase");

    // 连接数据库
    if (db.open())
    {
        QMessageBox::information(this, "提示", "连接成功");

        // 设置 QSqlTableModel 到 QTableView 上
        model = new QSqlTableModel;
        model->setTable("student");
        ui->tableView->setModel(model);
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
    QSqlQuery query;
    query.exec("select * from student");
    while(query.next())
    {
        qDebug() << query.value(0);
        qDebug() << query.value(1);
        qDebug() << query.value(2);
    }

    // QSqlTableModel 查询
    model->select();
}

void Widget::on_insertPushButton_clicked()
{
    QString id = ui->idLineEdit->text();
    QString name = ui->nameLineEdit->text();
    QString birth = ui->birthLineEdit->text();

    QString sql = QString("insert into student values(%1, '%2', '%3')").arg(id).arg(name).arg(birth);
    QSqlQuery query;
    if (query.exec(sql))
    {
        QMessageBox::information(this, "提示", "插入成功");

        // QSqlTableModel 查询
        model->select();
    }
    else
    {
        QMessageBox::critical(this, "提示", "插入失败");
    }
}

