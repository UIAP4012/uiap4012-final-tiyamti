/********************************************************************************
** Form generated from reading UI file 'forgetpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPAGE_H
#define UI_FORGETPAGE_H

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

class Ui_forgetpage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *forgetpage)
    {
        if (forgetpage->objectName().isEmpty())
            forgetpage->setObjectName(QStringLiteral("forgetpage"));
        forgetpage->resize(332, 437);
        forgetpage->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/fo.jpg);"));
        label = new QLabel(forgetpage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 191, 21));
        label->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"font: 18pt \"MV Boli\";\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(forgetpage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 103, 47, 20));
        label_2->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(forgetpage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 120, 113, 20));
        lineEdit->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        label_3 = new QLabel(forgetpage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 180, 47, 13));
        label_3->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(forgetpage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 230, 47, 13));
        label_4->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(forgetpage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 290, 91, 16));
        label_5->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t2.jpg);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(forgetpage);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 200, 113, 20));
        lineEdit_2->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        lineEdit_3 = new QLineEdit(forgetpage);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 250, 113, 20));
        lineEdit_3->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        lineEdit_4 = new QLineEdit(forgetpage);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(40, 310, 113, 20));
        lineEdit_4->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        pushButton = new QPushButton(forgetpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 140, 75, 23));
        pushButton->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton_2 = new QPushButton(forgetpage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 380, 101, 23));
        pushButton_2->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton_3 = new QPushButton(forgetpage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 10, 75, 23));
        pushButton_3->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t2.jpg);"));

        retranslateUi(forgetpage);

        QMetaObject::connectSlotsByName(forgetpage);
    } // setupUi

    void retranslateUi(QDialog *forgetpage)
    {
        forgetpage->setWindowTitle(QApplication::translate("forgetpage", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("forgetpage", "Change Password", Q_NULLPTR));
        label_2->setText(QApplication::translate("forgetpage", "email", Q_NULLPTR));
        label_3->setText(QApplication::translate("forgetpage", "OTP", Q_NULLPTR));
        label_4->setText(QApplication::translate("forgetpage", "Password", Q_NULLPTR));
        label_5->setText(QApplication::translate("forgetpage", "Confirm Password", Q_NULLPTR));
        pushButton->setText(QApplication::translate("forgetpage", "send OTP", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("forgetpage", "change password", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("forgetpage", "back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class forgetpage: public Ui_forgetpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPAGE_H
