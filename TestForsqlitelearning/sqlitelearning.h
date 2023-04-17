#ifndef SQLITELEARNING_H
#define SQLITELEARNING_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class SqliteLearning; }
QT_END_NAMESPACE

class SqliteLearning : public QWidget
{
    Q_OBJECT

public:
    SqliteLearning(QWidget *parent = nullptr);
    ~SqliteLearning();

private:
    Ui::SqliteLearning *ui;
    QSqlDatabase db;
};
#endif // SQLITELEARNING_H
