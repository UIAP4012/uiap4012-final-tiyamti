/********************************************************************************
** Form generated from reading UI file 'cartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTPAGE_H
#define UI_CARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_cartpage
{
public:

    void setupUi(QDialog *cartpage)
    {
        if (cartpage->objectName().isEmpty())
            cartpage->setObjectName(QStringLiteral("cartpage"));
        cartpage->resize(400, 300);

        retranslateUi(cartpage);

        QMetaObject::connectSlotsByName(cartpage);
    } // setupUi

    void retranslateUi(QDialog *cartpage)
    {
        cartpage->setWindowTitle(QApplication::translate("cartpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cartpage: public Ui_cartpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTPAGE_H
