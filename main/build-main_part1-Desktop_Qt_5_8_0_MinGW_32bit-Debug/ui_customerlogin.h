/********************************************************************************
** Form generated from reading UI file 'customerlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERLOGIN_H
#define UI_CUSTOMERLOGIN_H

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

class Ui_customerlogin
{
public:
    QLabel *label_3;
    QLineEdit *username;
    QLabel *label;
    QLineEdit *password;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *customerlogin)
    {
        if (customerlogin->objectName().isEmpty())
            customerlogin->setObjectName(QStringLiteral("customerlogin"));
        customerlogin->resize(359, 414);
        customerlogin->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/cl2.jpg);"));
        label_3 = new QLabel(customerlogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 180, 101, 20));
        label_3->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"color: rgb(255, 255, 255);"));
        username = new QLineEdit(customerlogin);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(50, 150, 113, 20));
        username->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        label = new QLabel(customerlogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 71, 31));
        label->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"font: 18pt \"MV Boli\";\n"
"color: rgb(255, 255, 255);"));
        password = new QLineEdit(customerlogin);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(50, 200, 113, 20));
        password->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        password->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(customerlogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 130, 101, 20));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton = new QPushButton(customerlogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 320, 75, 23));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(customerlogin);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 10, 75, 23));
        pushButton_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        username->raise();
        label_3->raise();
        label->raise();
        password->raise();
        pushButton->raise();
        pushButton_3->raise();
        label_2->raise();

        retranslateUi(customerlogin);

        QMetaObject::connectSlotsByName(customerlogin);
    } // setupUi

    void retranslateUi(QDialog *customerlogin)
    {
        customerlogin->setWindowTitle(QApplication::translate("customerlogin", "titi", Q_NULLPTR));
        label_3->setText(QApplication::translate("customerlogin", "Password", Q_NULLPTR));
        label->setText(QApplication::translate("customerlogin", "log in ", Q_NULLPTR));
        label_2->setText(QApplication::translate("customerlogin", "Account Name", Q_NULLPTR));
        pushButton->setText(QApplication::translate("customerlogin", "log in", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("customerlogin", "back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerlogin: public Ui_customerlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERLOGIN_H
