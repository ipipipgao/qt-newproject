#include "mm.h"

mm::mm(QObject *parent) : QTcpServer(parent)
{
    listen(QHostAddress::Any,6666);
}

void mm::incomingConnection(qintptr handle)
{
    qDebug()<<"提醒，有一笔金额到账";
    sock = new QTcpSocket(this);
    sock->setSocketDescriptor(handle);
    connect(sock,SIGNAL(readyRead()),this,SLOT(receiveMessage()));
}

void mm::receiveMessage()
{
    qDebug()<<"数据正在输入";
    char buffer[1024];
    sock->read(buffer,sock->bytesAvailable());
    qDebug()<<buffer;
}
