/********************************************************************************
** Form generated from reading UI file 'customerstartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSTARTPAGE_H
#define UI_CUSTOMERSTARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customerstartpage
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *customerstartpage)
    {
        if (customerstartpage->objectName().isEmpty())
            customerstartpage->setObjectName(QStringLiteral("customerstartpage"));
        customerstartpage->resize(392, 421);
        customerstartpage->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/2.jpg);"));
        label = new QLabel(customerstartpage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 70, 121, 21));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton = new QPushButton(customerstartpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 170, 75, 23));
        pushButton->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton_2 = new QPushButton(customerstartpage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 240, 75, 23));
        pushButton_2->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t2.jpg);"));
        pushButton_3 = new QPushButton(customerstartpage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 10, 75, 23));
        pushButton_3->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/t2.jpg);"));

        retranslateUi(customerstartpage);

        QMetaObject::connectSlotsByName(customerstartpage);
    } // setupUi

    void retranslateUi(QDialog *customerstartpage)
    {
        customerstartpage->setWindowTitle(QApplication::translate("customerstartpage", "titi", Q_NULLPTR));
        label->setText(QApplication::translate("customerstartpage", " welcome to Online Shop", Q_NULLPTR));
        pushButton->setText(QApplication::translate("customerstartpage", "sign up", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("customerstartpage", "log in", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("customerstartpage", "back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerstartpage: public Ui_customerstartpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSTARTPAGE_H
