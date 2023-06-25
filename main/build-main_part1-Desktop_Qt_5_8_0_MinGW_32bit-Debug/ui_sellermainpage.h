/********************************************************************************
** Form generated from reading UI file 'sellermainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERMAINPAGE_H
#define UI_SELLERMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sellermainpage
{
public:
    QPushButton *ord;
    QPushButton *rep;
    QPushButton *item;
    QPushButton *add;

    void setupUi(QDialog *sellermainpage)
    {
        if (sellermainpage->objectName().isEmpty())
            sellermainpage->setObjectName(QStringLiteral("sellermainpage"));
        sellermainpage->resize(349, 400);
        sellermainpage->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/bcap4.jpg);"));
        ord = new QPushButton(sellermainpage);
        ord->setObjectName(QStringLiteral("ord"));
        ord->setGeometry(QRect(40, 80, 75, 23));
        rep = new QPushButton(sellermainpage);
        rep->setObjectName(QStringLiteral("rep"));
        rep->setGeometry(QRect(40, 140, 75, 23));
        item = new QPushButton(sellermainpage);
        item->setObjectName(QStringLiteral("item"));
        item->setGeometry(QRect(40, 200, 75, 23));
        add = new QPushButton(sellermainpage);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(40, 260, 75, 23));

        retranslateUi(sellermainpage);

        QMetaObject::connectSlotsByName(sellermainpage);
    } // setupUi

    void retranslateUi(QDialog *sellermainpage)
    {
        sellermainpage->setWindowTitle(QApplication::translate("sellermainpage", "Dialog", Q_NULLPTR));
        ord->setText(QApplication::translate("sellermainpage", "orders", Q_NULLPTR));
        rep->setText(QApplication::translate("sellermainpage", "report", Q_NULLPTR));
        item->setText(QApplication::translate("sellermainpage", "item", Q_NULLPTR));
        add->setText(QApplication::translate("sellermainpage", "add employee", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sellermainpage: public Ui_sellermainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERMAINPAGE_H
