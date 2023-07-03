#include "findtourist.h"
#include "ui_findtourist.h"

FindTourist::FindTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindTourist)
{
    ui->setupUi(this);
}

FindTourist::~FindTourist()
{
    delete ui;
}

void FindTourist::on_btnFindTourist_clicked()
{
                                 //QSQLITE必须写大写
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/users/download/QtCreator/projectforgit/database/TouristManager.db");
    QSqlQuery query(database);
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
    //前面都是固定格式，永安里打开数据库以及为查询做准备

    QString touristName = ui->txtTouristName->text();
    query.prepare("SELECT * FROM Tourist WHERE TouristName LIKE :touristName");
    query.bindValue(":touristName", "%" + touristName + "%");
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
