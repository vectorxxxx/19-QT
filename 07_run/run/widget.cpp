#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 回车打开命令
    connect(ui->cmdLineEdit, SIGNAL(returnPressed()), this, SLOT(on_confirmButton_clicked()));

    // 取消
    connect(ui->cancelButton, &QPushButton::clicked, this, &Widget::on_cancelButton_clicked);

    // 浏览（目前仅弹出提示框）
    connect(ui->broswerButton, &QPushButton::clicked, [this](){
        QMessageBox::information(this, "提示", "打开浏览");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_confirmButton_clicked()
{
    QProcess *process = new QProcess(this);
    process->start(ui->cmdLineEdit->text());
}

void Widget::on_cancelButton_clicked()
{
    this->close();
}
