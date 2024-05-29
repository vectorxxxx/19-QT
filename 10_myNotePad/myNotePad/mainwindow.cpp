#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->newAction, &QAction::triggered, this, &MainWindow::newActionSlot);
    connect(ui->openAction, &QAction::triggered, this, &MainWindow::openActionSlot);
    connect(ui->saveAction, &QAction::triggered, this, &MainWindow::saveActionSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newActionSlot()
{
    ui->textEdit->clear();
    this->setWindowTitle("my.cpp");
}

void MainWindow::openActionSlot()
{
    QString fileName = QFileDialog::getOpenFileName(this, "选择一个文件", QCoreApplication::applicationFilePath(), "*.cpp");
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请选择一个文件");
    }
    else
    {
        this->setWindowTitle(fileName.mid(fileName.lastIndexOf("/") + 1));

        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui->textEdit->setText(QString(ba));
        file.close();
    }
}

void MainWindow::saveActionSlot()
{
    QString fileName = QFileDialog::getSaveFileName(this, "另存为", QCoreApplication::applicationFilePath(), "*.cpp");
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入文件名");
    }
    else
    {
        this->setWindowTitle(fileName.mid(fileName.lastIndexOf("/") + 1));

        QFile file(fileName);
        file.open(QIODevice::WriteOnly);
        QByteArray ba;
        ba.append(ui->textEdit->toPlainText());
        file.write(ba);
        file.close();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *k)
{
    if (k->modifiers() == Qt::ControlModifier)
    {
        // 新建
        if (k->key() == Qt::Key_N)
        {
            newActionSlot();
        }
        // 打开
        else if (k->key() == Qt::Key_O)
        {
            openActionSlot();
        }
        // 保存
        else if (k->key() == Qt::Key_S)
        {
            saveActionSlot();
        }
    }
}

void MainWindow::mousePressEvent(QMouseEvent *m)
{
    if (m->button() == Qt::LeftButton)
    {
        qDebug() << "左键被按下";
    }
    else if (m->button() == Qt::MidButton)
    {
        qDebug() << "中键被按下";
    }
    else if (m->button() == Qt::RightButton)
    {
        qDebug() << "右键被按下";
    }
}
