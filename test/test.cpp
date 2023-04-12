#include "test.h"
#include "ui_test.h"

test::test(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::test)
{
    ui->setupUi(this);
    timer1 = new QTimer(this);
    //每当计时器触发一次，就调用一次daojishi（）这个槽函数
//    connect(timer1,SIGNAL(timeout()),this,SLOT(daojishi()));
    connect(timer1,&QTimer::timeout,this,&test::daojishi);
    timer1->start(1000);
}

test::~test()
{
    delete ui;
}

void test::daojishi()
{
    qDebug()<<"倒计时";

    int curval = ui->label->text().toInt();
    qDebug()<<curval;
    curval--;
    ui->label->setText(QString::number(curval));
}

