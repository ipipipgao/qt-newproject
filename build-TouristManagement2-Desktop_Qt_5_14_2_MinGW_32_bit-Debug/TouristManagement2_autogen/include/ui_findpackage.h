/********************************************************************************
** Form generated from reading UI file 'findpackage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPACKAGE_H
#define UI_FINDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindPackage
{
public:
    QLabel *label;
    QLineEdit *txtPackageName;
    QPushButton *btnFindPackage;
    QTableView *sqlResult;

    void setupUi(QDialog *FindPackage)
    {
        if (FindPackage->objectName().isEmpty())
            FindPackage->setObjectName(QString::fromUtf8("FindPackage"));
        FindPackage->resize(719, 402);
        label = new QLabel(FindPackage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 81, 16));
        txtPackageName = new QLineEdit(FindPackage);
        txtPackageName->setObjectName(QString::fromUtf8("txtPackageName"));
        txtPackageName->setGeometry(QRect(140, 30, 371, 20));
        btnFindPackage = new QPushButton(FindPackage);
        btnFindPackage->setObjectName(QString::fromUtf8("btnFindPackage"));
        btnFindPackage->setGeometry(QRect(534, 30, 81, 23));
        sqlResult = new QTableView(FindPackage);
        sqlResult->setObjectName(QString::fromUtf8("sqlResult"));
        sqlResult->setGeometry(QRect(40, 90, 581, 271));

        retranslateUi(FindPackage);

        QMetaObject::connectSlotsByName(FindPackage);
    } // setupUi

    void retranslateUi(QDialog *FindPackage)
    {
        FindPackage->setWindowTitle(QCoreApplication::translate("FindPackage", "FindPackage", nullptr));
        label->setText(QCoreApplication::translate("FindPackage", "Package Name", nullptr));
        btnFindPackage->setText(QCoreApplication::translate("FindPackage", "Find Package", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindPackage: public Ui_FindPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPACKAGE_H
