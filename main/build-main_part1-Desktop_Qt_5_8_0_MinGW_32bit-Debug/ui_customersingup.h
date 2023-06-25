/********************************************************************************
** Form generated from reading UI file 'customersingup.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSINGUP_H
#define UI_CUSTOMERSINGUP_H

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

class Ui_customersingup
{
public:
    QLabel *label_5;
    QLineEdit *namec;
    QLineEdit *usernamec;
    QLineEdit *cpasswordc;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *passwordc;
    QPushButton *pushButton_2;

    void setupUi(QDialog *customersingup)
    {
        if (customersingup->objectName().isEmpty())
            customersingup->setObjectName(QStringLiteral("customersingup"));
        customersingup->resize(357, 412);
        customersingup->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/cl2.jpg);"));
        label_5 = new QLabel(customersingup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 260, 121, 20));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        namec = new QLineEdit(customersingup);
        namec->setObjectName(QStringLiteral("namec"));
        namec->setGeometry(QRect(50, 130, 113, 20));
        namec->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        usernamec = new QLineEdit(customersingup);
        usernamec->setObjectName(QStringLiteral("usernamec"));
        usernamec->setGeometry(QRect(50, 180, 113, 20));
        usernamec->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        cpasswordc = new QLineEdit(customersingup);
        cpasswordc->setObjectName(QStringLiteral("cpasswordc"));
        cpasswordc->setGeometry(QRect(50, 280, 113, 20));
        cpasswordc->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        label_4 = new QLabel(customersingup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 210, 91, 20));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        label_2 = new QLabel(customersingup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 91, 20));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton = new QPushButton(customersingup);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 330, 75, 23));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label = new QLabel(customersingup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 101, 31));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 18pt \"MV Boli\";\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        label_3 = new QLabel(customersingup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 160, 101, 20));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        passwordc = new QLineEdit(customersingup);
        passwordc->setObjectName(QStringLiteral("passwordc"));
        passwordc->setGeometry(QRect(50, 230, 113, 20));
        passwordc->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        pushButton_2 = new QPushButton(customersingup);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 10, 75, 23));
        pushButton_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(customersingup);

        QMetaObject::connectSlotsByName(customersingup);
    } // setupUi

    void retranslateUi(QDialog *customersingup)
    {
        customersingup->setWindowTitle(QApplication::translate("customersingup", "titi", Q_NULLPTR));
        label_5->setText(QApplication::translate("customersingup", "Confrim Password", Q_NULLPTR));
        label_4->setText(QApplication::translate("customersingup", "Password", Q_NULLPTR));
        label_2->setText(QApplication::translate("customersingup", "Full Name", Q_NULLPTR));
        pushButton->setText(QApplication::translate("customersingup", "sign up", Q_NULLPTR));
        label->setText(QApplication::translate("customersingup", "sign up", Q_NULLPTR));
        label_3->setText(QApplication::translate("customersingup", "Account Name", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("customersingup", "back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customersingup: public Ui_customersingup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSINGUP_H
