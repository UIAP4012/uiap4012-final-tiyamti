/********************************************************************************
** Form generated from reading UI file 'product.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_H
#define UI_PRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_product
{
public:
    QPushButton *show;
    QPushButton *search;
    QPushButton *order;
    QLineEdit *lineEdit;
    QTableView *tableView;

    void setupUi(QDialog *product)
    {
        if (product->objectName().isEmpty())
            product->setObjectName(QStringLiteral("product"));
        product->resize(400, 300);
        show = new QPushButton(product);
        show->setObjectName(QStringLiteral("show"));
        show->setGeometry(QRect(30, 10, 101, 23));
        search = new QPushButton(product);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(150, 10, 101, 23));
        order = new QPushButton(product);
        order->setObjectName(QStringLiteral("order"));
        order->setGeometry(QRect(270, 10, 101, 23));
        lineEdit = new QLineEdit(product);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 50, 113, 20));
        tableView = new QTableView(product);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(80, 90, 256, 192));

        retranslateUi(product);

        QMetaObject::connectSlotsByName(product);
    } // setupUi

    void retranslateUi(QDialog *product)
    {
        product->setWindowTitle(QApplication::translate("product", "Dialog", Q_NULLPTR));
        show->setText(QApplication::translate("product", "show all product", Q_NULLPTR));
        search->setText(QApplication::translate("product", "search product", Q_NULLPTR));
        order->setText(QApplication::translate("product", "order product", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class product: public Ui_product {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_H
