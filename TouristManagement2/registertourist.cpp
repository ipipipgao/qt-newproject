#include "registertourist.h"
#include "ui_registertourist.h"

RegisterTourist::RegisterTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterTourist)
{
    ui->setupUi(this);
}

RegisterTourist::~RegisterTourist()
{
    delete ui;
}

void RegisterTourist::on_btnSave_clicked()
{
    QString touristName = ui->txtTouristName->text();
    QString passportNo = ui->txtPassportNo->text();
    QString contactNo = ui->txtContactNo->text();
    QString permanentAddress = ui->txtPermanentAddress->text();
    QString packageName = ui->txtPackageName->text();

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/users/download/QtCreator/projectforgit/database/TouristManager.db");
    QSqlQuery query(database);

    if(!database.open()) {
        qDebug() << "Error: Unable open this database";
        return;
    }
    else {
        qDebug() << "Open this database successfully";
    }

    //前面的许多铺垫就是为了这一个语句做准备
    query.prepare("insert into Tourist (TouristName, PassportNo, ContactNo, PermanentAddress, PackageName) values('" + touristName + "', '" + passportNo + "','" + contactNo + "','" + permanentAddress + "','" + packageName +"')");
    query.exec();
    qDebug() << "Last error : " << query.lastError().text();
    database.close();
}
