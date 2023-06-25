/********************************************************************************
** Form generated from reading UI file 'emplyee.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLYEE_H
#define UI_EMPLYEE_H

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

class Ui_emplyee
{
public:
    QLineEdit *cpassworde2;
    QLabel *label;
    QLabel *passworde;
    QLineEdit *passworde2;
    QLabel *label_3;
    QLabel *cpassworde;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *namee;
    QLabel *label_2;
    QLineEdit *usernamee;

    void setupUi(QDialog *emplyee)
    {
        if (emplyee->objectName().isEmpty())
            emplyee->setObjectName(QStringLiteral("emplyee"));
        emplyee->resize(388, 368);
        emplyee->setStyleSheet(QLatin1String("\n"
"background-image: url(:/imagestart/pic/logs1.jpg);"));
        cpassworde2 = new QLineEdit(emplyee);
        cpassworde2->setObjectName(QStringLiteral("cpassworde2"));
        cpassworde2->setGeometry(QRect(40, 260, 113, 20));
        cpassworde2->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        cpassworde2->setEchoMode(QLineEdit::Password);
        label = new QLabel(emplyee);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 161, 31));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 18pt \"MV Boli\";\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        passworde = new QLabel(emplyee);
        passworde->setObjectName(QStringLiteral("passworde"));
        passworde->setGeometry(QRect(20, 190, 91, 20));
        passworde->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        passworde2 = new QLineEdit(emplyee);
        passworde2->setObjectName(QStringLiteral("passworde2"));
        passworde2->setGeometry(QRect(40, 210, 113, 20));
        passworde2->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        passworde2->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(emplyee);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 101, 20));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        cpassworde = new QLabel(emplyee);
        cpassworde->setObjectName(QStringLiteral("cpassworde"));
        cpassworde->setGeometry(QRect(20, 240, 121, 20));
        cpassworde->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton_2 = new QPushButton(emplyee);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 10, 75, 23));
        pushButton_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(emplyee);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 310, 75, 23));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        namee = new QLineEdit(emplyee);
        namee->setObjectName(QStringLiteral("namee"));
        namee->setGeometry(QRect(40, 110, 113, 20));
        namee->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));
        label_2 = new QLabel(emplyee);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 91, 20));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        usernamee = new QLineEdit(emplyee);
        usernamee->setObjectName(QStringLiteral("usernamee"));
        usernamee->setGeometry(QRect(40, 160, 113, 20));
        usernamee->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t1.jpg);"));

        retranslateUi(emplyee);

        QMetaObject::connectSlotsByName(emplyee);
    } // setupUi

    void retranslateUi(QDialog *emplyee)
    {
        emplyee->setWindowTitle(QApplication::translate("emplyee", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("emplyee", "add employee", Q_NULLPTR));
        passworde->setText(QApplication::translate("emplyee", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("emplyee", "Account Name", Q_NULLPTR));
        cpassworde->setText(QApplication::translate("emplyee", "Confrim Password", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("emplyee", "back", Q_NULLPTR));
        pushButton->setText(QApplication::translate("emplyee", "sign up", Q_NULLPTR));
        label_2->setText(QApplication::translate("emplyee", "Full Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class emplyee: public Ui_emplyee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLYEE_H
