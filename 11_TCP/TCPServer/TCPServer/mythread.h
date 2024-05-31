#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class myThread : public QThread
{
    Q_OBJECT
public:
    explicit myThread(QTcpSocket *s);

    // 线程运行函数
    void run();

signals:
    // 自定义信号
    void sendToWidget(QByteArray ba);

public slots:
    void readyReadSlot();

private:
    QTcpSocket *socket;
};

#endif // MYTHREAD_H
