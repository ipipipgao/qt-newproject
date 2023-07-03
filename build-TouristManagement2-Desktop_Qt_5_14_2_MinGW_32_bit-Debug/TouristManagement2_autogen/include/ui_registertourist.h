/********************************************************************************
** Form generated from reading UI file 'registertourist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURIST_H
#define UI_REGISTERTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterTourist
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtTouristName;
    QLabel *label_4;
    QLineEdit *txtPassportNo;
    QLabel *label_5;
    QLineEdit *txtContactNo;
    QLabel *label_6;
    QLineEdit *txtPermanentAddress;
    QLabel *label_7;
    QLineEdit *txtPackageName;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *RegisterTourist)
    {
        if (RegisterTourist->objectName().isEmpty())
            RegisterTourist->setObjectName(QString::fromUtf8("RegisterTourist"));
        RegisterTourist->resize(773, 255);
        formLayoutWidget = new QWidget(RegisterTourist);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 10, 631, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtTouristName = new QLineEdit(formLayoutWidget);
        txtTouristName->setObjectName(QString::fromUtf8("txtTouristName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtTouristName);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        txtPassportNo = new QLineEdit(formLayoutWidget);
        txtPassportNo->setObjectName(QString::fromUtf8("txtPassportNo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassportNo);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        txtContactNo = new QLineEdit(formLayoutWidget);
        txtContactNo->setObjectName(QString::fromUtf8("txtContactNo"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtContactNo);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        txtPermanentAddress = new QLineEdit(formLayoutWidget);
        txtPermanentAddress->setObjectName(QString::fromUtf8("txtPermanentAddress"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txtPermanentAddress);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        txtPackageName = new QLineEdit(formLayoutWidget);
        txtPackageName->setObjectName(QString::fromUtf8("txtPackageName"));

        formLayout->setWidget(4, QFormLayout::FieldRole, txtPackageName);

        btnSave = new QPushButton(RegisterTourist);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(580, 190, 75, 23));
        btnReset = new QPushButton(RegisterTourist);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setGeometry(QRect(470, 190, 75, 23));

        retranslateUi(RegisterTourist);

        QMetaObject::connectSlotsByName(RegisterTourist);
    } // setupUi

    void retranslateUi(QDialog *RegisterTourist)
    {
        RegisterTourist->setWindowTitle(QCoreApplication::translate("RegisterTourist", "RegisterTourist", nullptr));
        label->setText(QCoreApplication::translate("RegisterTourist", "Tourist Name", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterTourist", "Passpost No", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterTourist", "Contact No", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterTourist", "Permanent Address", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterTourist", "Package Name", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisterTourist", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterTourist", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterTourist: public Ui_RegisterTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURIST_H
