#include "sqlitelearning.h"
#include "ui_sqlitelearning.h"
#include "QDebug"

SqliteLearning::SqliteLearning(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SqliteLearning)
{
    ui->setupUi(this);

//    QSQLITE表示使用的是sqlite3这个版本
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("wzs9.db");
    db.setDatabaseName("D:/users/download/QtCreator/projectforgit/build-TestForsqlitelearning-Desktop_Qt_5_14_2_MinGW_32_bit-Debug/wzs9.db");
//D:\users\download\QtCreator\projectforgit\build-TestForsqlitelearning-Desktop_Qt_5_14_2_MinGW_32_bit-Debug
    db.open();

    QSqlQuery sql;
    sql.exec("create table user1(u,p)");
    sql.exec("insert into user1(u,p) values('ddd',1222)");
}

SqliteLearning::~SqliteLearning()
{
    delete ui;
}

