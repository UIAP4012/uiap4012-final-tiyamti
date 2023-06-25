/********************************************************************************
** Form generated from reading UI file 'sellerloginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERLOGINPAGE_H
#define UI_SELLERLOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sellerloginpage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *username;
    QLabel *label_3;
    QLineEdit *password;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *sellerloginpage)
    {
        if (sellerloginpage->objectName().isEmpty())
            sellerloginpage->setObjectName(QStringLiteral("sellerloginpage"));
        sellerloginpage->resize(354, 385);
        sellerloginpage->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/ssn2.jpg);"));
        label = new QLabel(sellerloginpage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 71, 31));
        label->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"font: 18pt \"MV Boli\";\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(sellerloginpage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 101, 20));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        username = new QLineEdit(sellerloginpage);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(30, 150, 113, 20));
        username->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        label_3 = new QLabel(sellerloginpage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 180, 101, 20));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        password = new QLineEdit(sellerloginpage);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(30, 200, 113, 20));
        password->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        password->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(sellerloginpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 320, 75, 23));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(sellerloginpage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 10, 75, 23));
        pushButton_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(sellerloginpage);

        QMetaObject::connectSlotsByName(sellerloginpage);
    } // setupUi

    void retranslateUi(QDialog *sellerloginpage)
    {
        sellerloginpage->setWindowTitle(QApplication::translate("sellerloginpage", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("sellerloginpage", "log in ", Q_NULLPTR));
        label_2->setText(QApplication::translate("sellerloginpage", "Account Name", Q_NULLPTR));
        label_3->setText(QApplication::translate("sellerloginpage", "Password", Q_NULLPTR));
        pushButton->setText(QApplication::translate("sellerloginpage", "log in", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("sellerloginpage", "back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sellerloginpage: public Ui_sellerloginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERLOGINPAGE_H
