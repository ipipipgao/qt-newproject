#include "testforphotoplay.h"

testforphotoplay::testforphotoplay(QWidget *parent)
    : QWidget(parent)
{
    lblimg.setParent(this);
    lblimg.resize(800,800);

    //
    timer1=new QTimer(this);
    connect(timer1,SIGNAL(timeout()),this,SLOT(myfunc1()));
    timer1->start(1000);
}

testforphotoplay::~testforphotoplay()
{

}

void testforphotoplay::myfunc1()
{
    pm = new QPixmap();
    num++;
    if(num>3)num=1;
    //1.命名规则_str表示转化成字符串  2.::
    QString num_str = QString::number(num);

    pm->load(":/wzs/img/0"+num_str+".jfif");
    QPixmap pmm = pm->scaled(450,700);
    lblimg.setPixmap(pmm);


}

