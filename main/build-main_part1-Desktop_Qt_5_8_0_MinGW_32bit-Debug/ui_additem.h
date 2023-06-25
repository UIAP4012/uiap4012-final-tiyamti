/********************************************************************************
** Form generated from reading UI file 'additem.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_additem
{
public:
    QLabel *label;
    QLabel *label_6;
    QLineEdit *txtPurchasePrice;
    QLineEdit *txtName;
    QPushButton *btnAdd;
    QLineEdit *txtQuantity;
    QLineEdit *txtSellingPrice;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *resl;
    QComboBox *cmbStatus;
    QLabel *label_3;

    void setupUi(QDialog *additem)
    {
        if (additem->objectName().isEmpty())
            additem->setObjectName(QStringLiteral("additem"));
        additem->resize(340, 360);
        additem->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/bcap10.jpg);"));
        label = new QLabel(additem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 121, 16));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));
        label_6 = new QLabel(additem);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 160, 121, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));
        txtPurchasePrice = new QLineEdit(additem);
        txtPurchasePrice->setObjectName(QStringLiteral("txtPurchasePrice"));
        txtPurchasePrice->setGeometry(QRect(220, 200, 113, 20));
        txtPurchasePrice->setFont(font);
        txtPurchasePrice->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        txtName = new QLineEdit(additem);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(220, 40, 113, 20));
        txtName->setFont(font);
        txtName->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        btnAdd = new QPushButton(additem);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        btnAdd->setGeometry(QRect(130, 310, 75, 31));
        btnAdd->setFont(font);
        btnAdd->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        txtQuantity = new QLineEdit(additem);
        txtQuantity->setObjectName(QStringLiteral("txtQuantity"));
        txtQuantity->setGeometry(QRect(220, 80, 113, 20));
        txtQuantity->setFont(font);
        txtQuantity->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        txtSellingPrice = new QLineEdit(additem);
        txtSellingPrice->setObjectName(QStringLiteral("txtSellingPrice"));
        txtSellingPrice->setGeometry(QRect(220, 160, 113, 20));
        txtSellingPrice->setFont(font);
        txtSellingPrice->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        label_2 = new QLabel(additem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 121, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(additem);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 200, 121, 16));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));
        resl = new QLabel(additem);
        resl->setObjectName(QStringLiteral("resl"));
        resl->setGeometry(QRect(80, 270, 191, 20));
        resl->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        cmbStatus = new QComboBox(additem);
        cmbStatus->setObjectName(QStringLiteral("cmbStatus"));
        cmbStatus->setGeometry(QRect(220, 120, 111, 22));
        label_3 = new QLabel(additem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 120, 121, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(additem);

        QMetaObject::connectSlotsByName(additem);
    } // setupUi

    void retranslateUi(QDialog *additem)
    {
        additem->setWindowTitle(QApplication::translate("additem", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("additem", "Name", Q_NULLPTR));
        label_6->setText(QApplication::translate("additem", "Selling Price", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("additem", "ADD", Q_NULLPTR));
        label_2->setText(QApplication::translate("additem", "Quantity", Q_NULLPTR));
        label_7->setText(QApplication::translate("additem", "Purchase Price", Q_NULLPTR));
        resl->setText(QString());
        cmbStatus->clear();
        cmbStatus->insertItems(0, QStringList()
         << QApplication::translate("additem", "Available", Q_NULLPTR)
         << QApplication::translate("additem", "Expired", Q_NULLPTR)
         << QApplication::translate("additem", "Sold", Q_NULLPTR)
         << QApplication::translate("additem", "Return", Q_NULLPTR)
         << QApplication::translate("additem", "Spoiled", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("additem", "Status", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class additem: public Ui_additem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
