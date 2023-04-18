 #include "sqlitelearning.h"
#include "ui_sqlitelearning.h"
#include "QDebug"

SqliteLearning::SqliteLearning(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SqliteLearning)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/users/download/QtCreator/projectforgit/build-TestForsqlitelearning-Desktop_Qt_5_14_2_MinGW_32_bit-Debug/wzs6.db");
    db.open();

    sql = new QSqlQuery();
    sql->exec("create table user1(u,p)");
    qmodel = new QSqlQueryModel();
    //qmodel就将查询的数据存到了qmodel里面
    qmodel->setQuery("select * from user1");
    //下面的可以将数据据中的数据在空白的表格中展示出来，即使有多个列，也会自动展示出来
    ui->tableView->setModel(qmodel);
}

SqliteLearning::~SqliteLearning()
{
    delete ui;
}


void SqliteLearning::on_pushButton_clicked()
{
    QString username = ui->uni->text();
    QString password = ui->pwi->text();
    sql->prepare("insert into user1 (u, p) values (:username, :password)");
    sql->bindValue(":username", username);
    sql->bindValue(":password", password);
    sql->exec();
    QMessageBox::about(this,"消息","注册成功");
    qmodel->setQuery("select * from user1");
}

void SqliteLearning::on_tableView_clicked(const QModelIndex &index)
{
    uoftable = index.siblingAtColumn(0).data().toString();
    poftable = index.siblingAtColumn(1).data().toString();
    ui->uni->setText(uoftable);
    ui->pwi->setText(poftable);

    currentIndexModel = index;
}

void SqliteLearning::on_pushButton_2_clicked()
{
    QString username = ui->uni->text();
    QString password = ui->pwi->text();
    sql->prepare("update user1 set p = :password where u = :username");
    sql->bindValue(":username", username);
    sql->bindValue(":password", password);
    sql->exec();
    if (sql->exec()) {
        qDebug() << "Update success!";
    } else {
        qDebug() << "Update failed!";
    }
    qmodel->setQuery("select * from user1");
}

void SqliteLearning::on_pushButton_3_clicked()
{
    QString username = currentIndexModel.siblingAtColumn(0).data().toString();
    sql->prepare("delete from user1 where u = :username");
    sql->bindValue(":username", username);
    sql->exec();
    qmodel->setQuery("select * from user1");
}
