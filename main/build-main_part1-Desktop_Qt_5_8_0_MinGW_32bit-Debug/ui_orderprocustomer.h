/********************************************************************************
** Form generated from reading UI file 'orderprocustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERPROCUSTOMER_H
#define UI_ORDERPROCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_orderprocustomer
{
public:
    QPushButton *sorders;
    QTableView *tableView;
    QPushButton *reset;
    QPushButton *ordered;

    void setupUi(QDialog *orderprocustomer)
    {
        if (orderprocustomer->objectName().isEmpty())
            orderprocustomer->setObjectName(QStringLiteral("orderprocustomer"));
        orderprocustomer->resize(400, 300);
        sorders = new QPushButton(orderprocustomer);
        sorders->setObjectName(QStringLiteral("sorders"));
        sorders->setGeometry(QRect(150, 30, 75, 23));
        tableView = new QTableView(orderprocustomer);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 70, 256, 192));
        reset = new QPushButton(orderprocustomer);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(80, 270, 75, 23));
        ordered = new QPushButton(orderprocustomer);
        ordered->setObjectName(QStringLiteral("ordered"));
        ordered->setGeometry(QRect(240, 270, 75, 23));

        retranslateUi(orderprocustomer);

        QMetaObject::connectSlotsByName(orderprocustomer);
    } // setupUi

    void retranslateUi(QDialog *orderprocustomer)
    {
        orderprocustomer->setWindowTitle(QApplication::translate("orderprocustomer", "Dialog", Q_NULLPTR));
        sorders->setText(QApplication::translate("orderprocustomer", "show orders", Q_NULLPTR));
        reset->setText(QApplication::translate("orderprocustomer", "reset", Q_NULLPTR));
        ordered->setText(QApplication::translate("orderprocustomer", "preparing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class orderprocustomer: public Ui_orderprocustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERPROCUSTOMER_H
