/********************************************************************************
** Form generated from reading UI file 'forgetpagecustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPAGECUSTOMER_H
#define UI_FORGETPAGECUSTOMER_H

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

class Ui_forgetpagecustomer
{
public:
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *forgetpagecustomer)
    {
        if (forgetpagecustomer->objectName().isEmpty())
            forgetpagecustomer->setObjectName(QStringLiteral("forgetpagecustomer"));
        forgetpagecustomer->resize(333, 441);
        forgetpagecustomer->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/fo.jpg);"));
        label_3 = new QLabel(forgetpagecustomer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 180, 47, 13));
        label_3->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(forgetpagecustomer);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 250, 113, 20));
        lineEdit_3->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        lineEdit_2 = new QLineEdit(forgetpagecustomer);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 200, 113, 20));
        lineEdit_2->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        pushButton = new QPushButton(forgetpagecustomer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 140, 75, 23));
        pushButton->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t2.jpg);"));
        lineEdit_4 = new QLineEdit(forgetpagecustomer);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(40, 310, 113, 20));
        lineEdit_4->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        label_2 = new QLabel(forgetpagecustomer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 103, 47, 20));
        label_2->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(forgetpagecustomer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 230, 47, 13));
        label_4->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(forgetpagecustomer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 290, 91, 16));
        label_5->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(forgetpagecustomer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 380, 101, 23));
        pushButton_2->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton_3 = new QPushButton(forgetpagecustomer);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 10, 75, 23));
        pushButton_3->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t2.jpg);"));
        label = new QLabel(forgetpagecustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 191, 21));
        label->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"font: 18pt \"MV Boli\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(forgetpagecustomer);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 120, 113, 20));
        lineEdit->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));

        retranslateUi(forgetpagecustomer);

        QMetaObject::connectSlotsByName(forgetpagecustomer);
    } // setupUi

    void retranslateUi(QDialog *forgetpagecustomer)
    {
        forgetpagecustomer->setWindowTitle(QApplication::translate("forgetpagecustomer", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("forgetpagecustomer", "OTP", Q_NULLPTR));
        pushButton->setText(QApplication::translate("forgetpagecustomer", "send OTP", Q_NULLPTR));
        label_2->setText(QApplication::translate("forgetpagecustomer", "email", Q_NULLPTR));
        label_4->setText(QApplication::translate("forgetpagecustomer", "Password", Q_NULLPTR));
        label_5->setText(QApplication::translate("forgetpagecustomer", "Confirm Password", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("forgetpagecustomer", "change password", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("forgetpagecustomer", "back", Q_NULLPTR));
        label->setText(QApplication::translate("forgetpagecustomer", "Change Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class forgetpagecustomer: public Ui_forgetpagecustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPAGECUSTOMER_H
