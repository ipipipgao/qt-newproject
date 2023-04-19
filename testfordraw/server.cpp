#include "server.h"

//冒号后面表示继承，如果继承了QTcpServer，那么里面的方法比如listen()都可以使用
Server::Server(QObject *parent) : QTcpServer(parent)
{
    listen(QHostAddress::Any,8888);


}
