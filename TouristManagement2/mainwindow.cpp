#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //我不知道为什么ptrAddPackage是地址，却可以直接等于new AddPackage()，啊，我想起来了，vs中的非指针等于的是AddPackage而不是new AddPackage
    ptrAddPackage = new AddPackage();
    ptrFindPackage = new FindPackage();
    ptrFindTourist = new FindTourist();
    ptrRegisterTourist = new RegisterTourist();
}

MainWindow::~MainWindow()
{
    delete ptrAddPackage;
    delete ptrFindPackage;
    delete ptrFindTourist;
    delete ptrRegisterTourist;
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ptrAddPackage->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    ptrRegisterTourist->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    ptrFindPackage->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    ptrFindTourist->show();
}
