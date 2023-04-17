/********************************************************************************
** Form generated from reading UI file 'sqlitelearning.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLITELEARNING_H
#define UI_SQLITELEARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SqliteLearning
{
public:

    void setupUi(QWidget *SqliteLearning)
    {
        if (SqliteLearning->objectName().isEmpty())
            SqliteLearning->setObjectName(QString::fromUtf8("SqliteLearning"));
        SqliteLearning->resize(800, 600);

        retranslateUi(SqliteLearning);

        QMetaObject::connectSlotsByName(SqliteLearning);
    } // setupUi

    void retranslateUi(QWidget *SqliteLearning)
    {
        SqliteLearning->setWindowTitle(QCoreApplication::translate("SqliteLearning", "SqliteLearning", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SqliteLearning: public Ui_SqliteLearning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLITELEARNING_H
