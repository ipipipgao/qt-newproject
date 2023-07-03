#include "findpackage.h"
#include "ui_findpackage.h"

FindPackage::FindPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindPackage)
{
    ui->setupUi(this);
}

FindPackage::~FindPackage()
{
    delete ui;
}

void FindPackage::on_btnFindPackage_clicked()
{
    QString packageName = ui->txtPackageName->text();
                                 //QSQLITE必须写大写
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/users/download/QtCreator/projectforgit/database/TouristManager.db");

    if(QFile::exists("D:/users/download/QtCreator/projectforgit/database/TouristManager.db"))
        qDebug() << "File exist";
    else {
        qDebug() << "File don't exist";
        return;
    }

    if(!database.open()) {
        qDebug() << "Error: Unable open this database";
        return;
    }
    else {
        qDebug() << "Open this database successfully";
    }

    QSqlQuery query(database);
    query.prepare("SELECT * FROM Package WHERE PackageName LIKE :packageName");
    query.bindValue(":packageName", "%" + packageName + "%");
    //如果查询成功的话
    if (query.exec()) {
        // QSqlQueryModel*放到findpackage.h里面了
        model = new QSqlQueryModel;

        // 查询来源于query这个sql语句的集合
        model->setQuery(query);
        // 将数据模型与QTableView关联
        ui->sqlResult->setModel(model);
    } else {
        qDebug() << "Query execution failed: " << query.lastError().text();
    }

    database.close();
}
