/********************************************************************************
** Form generated from reading UI file 'draw.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_H
#define UI_DRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Draw
{
public:

    void setupUi(QWidget *Draw)
    {
        if (Draw->objectName().isEmpty())
            Draw->setObjectName(QString::fromUtf8("Draw"));
        Draw->resize(800, 600);

        retranslateUi(Draw);

        QMetaObject::connectSlotsByName(Draw);
    } // setupUi

    void retranslateUi(QWidget *Draw)
    {
        Draw->setWindowTitle(QCoreApplication::translate("Draw", "Draw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw: public Ui_Draw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_H
