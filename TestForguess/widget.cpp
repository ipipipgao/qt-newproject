#include "widget.h"
#include "ui_widget.h"
#include "QDebug"
#include "QString"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建一个实例
    //头文件里面你写的什么名字，就要在用的时候写什么名字
    timer1 = new QTimer(this);
    //qt4注意要给方法加括号
    //1，2，3，4   1表示将什么与myfun1（）函数连接起来，3表示谁接受信号，4表示接受之后会发生什么
    connect(timer1,SIGNAL(timeout()),this,SLOT(myfunc1()));
    //下面的，表示这个按钮一旦触发，就会执行on_pushButton_clicked()方法
//    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::myfunc1);

    //表示每隔1s，timer1就自动响应一次，而timer1与myfunc1通过connect被捆绑了，所以一旦timer1响应，myfun1函数也会被执行
    timer1->start(1000);
    //防止只生成那一个随机数
    rng.seed(QDateTime::currentMSecsSinceEpoch() / 1000);
    //rand_num在头文件里面有定义
    rand_num = rng.bounded(1, 50);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::myfunc1()
{
    //使用窗体的控件时，必须要先构建一下
    QString curtime = QTime::currentTime().toString("hh:mm:ss");
    ui->label->setText(curtime);
    //注意这个q是小写,但是d是大写，记住把头文件里的第一个字母改成小写就行了,还有就是方法要加括号

}


void Widget::on_pushButton_clicked()
{
    if(ui->lineEdit->text().toInt()>rand_num) {
        QMessageBox::about(this,"消息","猜大了");
    } else if(ui->lineEdit->text().toInt()<rand_num) {
        QMessageBox::about(this,"消息","猜小了");
    } else {
        QMessageBox::about(this,"消息","猜中了！！！");
    }
}
