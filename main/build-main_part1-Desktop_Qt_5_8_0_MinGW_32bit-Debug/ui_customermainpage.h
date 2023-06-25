/********************************************************************************
** Form generated from reading UI file 'customermainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMAINPAGE_H
#define UI_CUSTOMERMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customermainpage
{
public:
    QPushButton *cart;
    QPushButton *fav;
    QPushButton *bill;
    QPushButton *product;

    void setupUi(QDialog *customermainpage)
    {
        if (customermainpage->objectName().isEmpty())
            customermainpage->setObjectName(QStringLiteral("customermainpage"));
        customermainpage->resize(334, 362);
        customermainpage->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/bcap3.jpg);"));
        cart = new QPushButton(customermainpage);
        cart->setObjectName(QStringLiteral("cart"));
        cart->setGeometry(QRect(40, 120, 75, 23));
        fav = new QPushButton(customermainpage);
        fav->setObjectName(QStringLiteral("fav"));
        fav->setGeometry(QRect(40, 200, 75, 23));
        bill = new QPushButton(customermainpage);
        bill->setObjectName(QStringLiteral("bill"));
        bill->setGeometry(QRect(40, 280, 75, 23));
        product = new QPushButton(customermainpage);
        product->setObjectName(QStringLiteral("product"));
        product->setGeometry(QRect(40, 40, 75, 23));

        retranslateUi(customermainpage);

        QMetaObject::connectSlotsByName(customermainpage);
    } // setupUi

    void retranslateUi(QDialog *customermainpage)
    {
        customermainpage->setWindowTitle(QApplication::translate("customermainpage", "Dialog", Q_NULLPTR));
        cart->setText(QApplication::translate("customermainpage", "cart", Q_NULLPTR));
        fav->setText(QApplication::translate("customermainpage", "wish list", Q_NULLPTR));
        bill->setText(QApplication::translate("customermainpage", "bills", Q_NULLPTR));
        product->setText(QApplication::translate("customermainpage", "product", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customermainpage: public Ui_customermainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMAINPAGE_H
