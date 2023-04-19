#ifndef MM_H
#define MM_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
//使用套接字来进行消息的传递
#include <QTcpSocket>

class mm : public QTcpServer
{
    Q_OBJECT
public:
    explicit mm(QObject *parent = nullptr);

private:
    //如果声明的是指针，那么内存空间就是没有创建，如果声明的不是指针，那么这个对象就会自动创建出来，而一旦sock被创建出来而没有建立连接，程序就会报错
    QTcpSocket *sock;


private slots:
    void incomingConnection(qintptr handle);
    void receiveMessage();
};

#endif // MM_H
