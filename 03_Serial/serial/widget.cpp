#include "widget.h"
#include "ui_widget.h"
#include <QSerialPortInfo>  // 引入串口信息头文件
#include <QMessageBox>
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 自动识别并添加串口号到选项中
    QStringList serialPortList;
    foreach(const QSerialPortInfo &Info, QSerialPortInfo::availablePorts() )
    {
        //serialPortList.append(Info.portName());
        serialPortList<<Info.portName();
    }
    ui->serialCb->addItems(serialPortList);

    // 初始化串口
    serialPort = new QSerialPort(this);

    // 手动关联信号与槽
    connect(serialPort, SIGNAL(readyRead()), this, SLOT(serialReceive_Slot()));
}

Widget::~Widget()
{
    delete ui;
}

// 串口接收槽函数
void Widget::serialReceive_Slot()
{
    QString receiveData = serialPort->readAll();
    ui->receiveEdit->appendPlainText(receiveData);
}

void Widget::on_openBt_clicked()
{
    // 串口号
    serialPort->setPortName(ui->serialCb->currentText());


    // 波特率
    QSerialPort::BaudRate baudRate;
    if(ui->baudrateCb->currentText() == "4800")
    {
        baudRate = QSerialPort::Baud4800;
    }
    else if(ui->baudrateCb->currentText() == "9600")
    {
        baudRate = QSerialPort::Baud9600;
    }
    else if(ui->baudrateCb->currentText() == "115200")
    {
        baudRate = QSerialPort::Baud115200;
    }
    serialPort->setBaudRate(baudRate);


    // 数据位
    QSerialPort::DataBits dataBits;
    if(ui->dataCb->currentText() == "5")
    {
        dataBits = QSerialPort::Data5;
    }
    else if(ui->dataCb->currentText() == "6")
    {
        dataBits = QSerialPort::Data6;
    }
    else if(ui->dataCb->currentText() == "7")
    {
        dataBits = QSerialPort::Data7;
    }
    else if(ui->dataCb->currentText() == "8")
    {
        dataBits = QSerialPort::Data8;
    }
    serialPort->setDataBits(dataBits);


    // 停止位
    QSerialPort::StopBits stopBits;
    if(ui->stopCb->currentText() == "1")
    {
        stopBits = QSerialPort::OneStop;
    }
    else if(ui->stopCb->currentText() == "1.5")
    {
        stopBits = QSerialPort::OneAndHalfStop;
    }
    else if(ui->stopCb->currentText() == "2")
    {
        stopBits = QSerialPort::TwoStop;
    }
    serialPort->setStopBits(stopBits);


    // 奇偶校验位
    QSerialPort::Parity checkBits;
    if(ui->checkCb->currentText() == "None")
    {
        checkBits = QSerialPort::NoParity;
    }
    else if(ui->checkCb->currentText() == "Odd")
    {
        checkBits = QSerialPort::OddParity;
    }
    else if(ui->checkCb->currentText() == "Even")
    {
        checkBits = QSerialPort::EvenParity;
    }
    serialPort->setParity(checkBits);


    // 数据流控
    //serialPort->setFlowControl(QSerialPort::HardwareControl);

    // 检查串口是否打开
    if (serialPort->open(QIODevice::ReadWrite)){
        QMessageBox::information(this, "提示", "打开串口成功");
    }
    else{
        QMessageBox::critical(this, "提示", "打开串口失败");
    }
}

void Widget::on_closeBt_clicked()
{
    serialPort->close();
    QMessageBox::information(this, "提示", "关闭串口成功");
}

void Widget::on_sendBt_clicked()
{
    QString sendData = ui->sendEdit->text();
    serialPort->write(sendData.toLocal8Bit().data());   // 转成8位数据位
}

void Widget::on_clearBt_clicked()
{
    ui->receiveEdit->clear();
}
