#include "addpackage.h"
#include "ui_addpackage.h"

AddPackage::AddPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPackage)
{
    ui->setupUi(this);
}

AddPackage::~AddPackage()
{
    delete ui;
}

void AddPackage::on_btnSave_clicked()
{
    QString packageName = ui->txtPackageName->text();
    QString packageDescription = ui->txtDescription->toPlainText();
    QString amount = ui->txtAmount->text();

    qDebug() << packageName << packageDescription << amount;

    //显示要添加什么数据库，后面是sqlite就是添加sqlite数据库
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    //后面写数据库的地址（我刚创建了一个.db数据库，里面有几张表，db数据库里面可以有很多表，所以他是够用的）
    database.setDatabaseName("D:/users/download/QtCreator/projectforgit/database/TouristManager.db");

    //然后就是判断"D:/users/download/QtCreator/projectforgit/database/TouristManager.db"能不能打开，感觉使用这个就行了
    if(!database.open()) {
        qDebug() << "Error: Unable open this database";
        return;
    }
    else {
        qDebug() << "Open this database successfully";
    }

    QSqlQuery query(database);
    query.prepare("insert into Tourist (PackageName, PackageDescription, Amount) values('" + packageName + "','" + packageDescription + "','" + amount + "')");
    query.exec();
    qDebug() << "Last error : " << query.lastError().text();
    database.close();
}

void AddPackage::on_btnReset_clicked()
{
    ui->txtPackageName->clear();
    ui->txtDescription->clear();
    ui->txtAmount->clear();
}
