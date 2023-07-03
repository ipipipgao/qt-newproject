/********************************************************************************
** Form generated from reading UI file 'addpackage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPACKAGE_H
#define UI_ADDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPackage
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtPackageName;
    QTextEdit *txtDescription;
    QLabel *label_3;
    QLineEdit *txtAmount;
    QLabel *lable;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *AddPackage)
    {
        if (AddPackage->objectName().isEmpty())
            AddPackage->setObjectName(QString::fromUtf8("AddPackage"));
        AddPackage->resize(694, 468);
        formLayoutWidget = new QWidget(AddPackage);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 30, 461, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtPackageName = new QLineEdit(formLayoutWidget);
        txtPackageName->setObjectName(QString::fromUtf8("txtPackageName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtPackageName);

        txtDescription = new QTextEdit(formLayoutWidget);
        txtDescription->setObjectName(QString::fromUtf8("txtDescription"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDescription);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtAmount = new QLineEdit(formLayoutWidget);
        txtAmount->setObjectName(QString::fromUtf8("txtAmount"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtAmount);

        lable = new QLabel(formLayoutWidget);
        lable->setObjectName(QString::fromUtf8("lable"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lable);

        btnSave = new QPushButton(AddPackage);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(420, 250, 75, 23));
        btnReset = new QPushButton(AddPackage);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setGeometry(QRect(320, 250, 75, 23));

        retranslateUi(AddPackage);

        QMetaObject::connectSlotsByName(AddPackage);
    } // setupUi

    void retranslateUi(QDialog *AddPackage)
    {
        AddPackage->setWindowTitle(QCoreApplication::translate("AddPackage", "AddPackage", nullptr));
        label->setText(QCoreApplication::translate("AddPackage", "Package Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddPackage", "Amount", nullptr));
        lable->setText(QCoreApplication::translate("AddPackage", "Description", nullptr));
        btnSave->setText(QCoreApplication::translate("AddPackage", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("AddPackage", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPackage: public Ui_AddPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPACKAGE_H
