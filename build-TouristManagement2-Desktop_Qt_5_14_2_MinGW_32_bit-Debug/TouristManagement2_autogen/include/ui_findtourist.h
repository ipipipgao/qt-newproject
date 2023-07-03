/********************************************************************************
** Form generated from reading UI file 'findtourist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTOURIST_H
#define UI_FINDTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindTourist
{
public:
    QTableView *sqlResult;
    QLineEdit *txtTouristName;
    QLabel *label;
    QPushButton *btnFindTourist;

    void setupUi(QDialog *FindTourist)
    {
        if (FindTourist->objectName().isEmpty())
            FindTourist->setObjectName(QString::fromUtf8("FindTourist"));
        FindTourist->resize(717, 407);
        sqlResult = new QTableView(FindTourist);
        sqlResult->setObjectName(QString::fromUtf8("sqlResult"));
        sqlResult->setGeometry(QRect(30, 70, 601, 281));
        txtTouristName = new QLineEdit(FindTourist);
        txtTouristName->setObjectName(QString::fromUtf8("txtTouristName"));
        txtTouristName->setGeometry(QRect(150, 20, 371, 20));
        label = new QLabel(FindTourist);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 121, 20));
        btnFindTourist = new QPushButton(FindTourist);
        btnFindTourist->setObjectName(QString::fromUtf8("btnFindTourist"));
        btnFindTourist->setGeometry(QRect(550, 20, 75, 23));

        retranslateUi(FindTourist);

        QMetaObject::connectSlotsByName(FindTourist);
    } // setupUi

    void retranslateUi(QDialog *FindTourist)
    {
        FindTourist->setWindowTitle(QCoreApplication::translate("FindTourist", "FindTourist", nullptr));
        label->setText(QCoreApplication::translate("FindTourist", "Enter Tourist Name", nullptr));
        btnFindTourist->setText(QCoreApplication::translate("FindTourist", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindTourist: public Ui_FindTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTOURIST_H
