/********************************************************************************
** Form generated from reading UI file 'sellersignuppage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERSIGNUPPAGE_H
#define UI_SELLERSIGNUPPAGE_H

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

class Ui_sellersignuppage
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *names;
    QLineEdit *usernames;
    QLineEdit *passwords;
    QLineEdit *cpasswords;
    QLabel *password;
    QLabel *cpassword;
    QPushButton *pushButton_2;

    void setupUi(QDialog *sellersignuppage)
    {
        if (sellersignuppage->objectName().isEmpty())
            sellersignuppage->setObjectName(QStringLiteral("sellersignuppage"));
        sellersignuppage->resize(353, 388);
        QFont font;
        font.setFamily(QStringLiteral("MV Boli"));
        font.setPointSize(11);
        sellersignuppage->setFont(font);
        sellersignuppage->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/ssn2.jpg);"));
        pushButton = new QPushButton(sellersignuppage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 330, 75, 23));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label = new QLabel(sellersignuppage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 101, 31));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 18pt \"MV Boli\";\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        label_2 = new QLabel(sellersignuppage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 91, 20));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        label_3 = new QLabel(sellersignuppage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 160, 101, 20));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        names = new QLineEdit(sellersignuppage);
        names->setObjectName(QStringLiteral("names"));
        names->setGeometry(QRect(50, 130, 113, 20));
        names->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        usernames = new QLineEdit(sellersignuppage);
        usernames->setObjectName(QStringLiteral("usernames"));
        usernames->setGeometry(QRect(50, 180, 113, 20));
        usernames->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        passwords = new QLineEdit(sellersignuppage);
        passwords->setObjectName(QStringLiteral("passwords"));
        passwords->setGeometry(QRect(50, 230, 113, 20));
        passwords->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        passwords->setEchoMode(QLineEdit::Password);
        cpasswords = new QLineEdit(sellersignuppage);
        cpasswords->setObjectName(QStringLiteral("cpasswords"));
        cpasswords->setGeometry(QRect(50, 280, 113, 20));
        cpasswords->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        cpasswords->setEchoMode(QLineEdit::Password);
        password = new QLabel(sellersignuppage);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(30, 210, 91, 20));
        password->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        cpassword = new QLabel(sellersignuppage);
        cpassword->setObjectName(QStringLiteral("cpassword"));
        cpassword->setGeometry(QRect(30, 260, 121, 20));
        cpassword->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton_2 = new QPushButton(sellersignuppage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 10, 75, 23));
        pushButton_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(sellersignuppage);

        QMetaObject::connectSlotsByName(sellersignuppage);
    } // setupUi

    void retranslateUi(QDialog *sellersignuppage)
    {
        sellersignuppage->setWindowTitle(QApplication::translate("sellersignuppage", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("sellersignuppage", "sign up", Q_NULLPTR));
        label->setText(QApplication::translate("sellersignuppage", "sign up", Q_NULLPTR));
        label_2->setText(QApplication::translate("sellersignuppage", "Full Name", Q_NULLPTR));
        label_3->setText(QApplication::translate("sellersignuppage", "Account Name", Q_NULLPTR));
        password->setText(QApplication::translate("sellersignuppage", "Password", Q_NULLPTR));
        cpassword->setText(QApplication::translate("sellersignuppage", "Confrim Password", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("sellersignuppage", "back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sellersignuppage: public Ui_sellersignuppage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERSIGNUPPAGE_H
