#ifndef SQLITELEARNING_H
#define SQLITELEARNING_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QModelIndex>

QT_BEGIN_NAMESPACE
namespace Ui { class SqliteLearning; }
QT_END_NAMESPACE

class SqliteLearning : public QWidget
{
    Q_OBJECT

public:
    SqliteLearning(QWidget *parent = nullptr);
    ~SqliteLearning();

private slots:
    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::SqliteLearning *ui;
    QSqlDatabase db;
    QSqlQuery *sql;
    QString uoftable,poftable;
    QSqlQueryModel *qmodel;
    QModelIndex currentIndexModel;

};
#endif // SQLITELEARNING_H
