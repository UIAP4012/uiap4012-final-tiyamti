/********************************************************************************
** Form generated from reading UI file 'sellerstartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERSTARTPAGE_H
#define UI_SELLERSTARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sellerstartpage
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;

    void setupUi(QDialog *sellerstartpage)
    {
        if (sellerstartpage->objectName().isEmpty())
            sellerstartpage->setObjectName(QStringLiteral("sellerstartpage"));
        sellerstartpage->resize(339, 437);
        sellerstartpage->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/12.jpg);"));
        pushButton = new QPushButton(sellerstartpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 250, 75, 23));
        pushButton_2 = new QPushButton(sellerstartpage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 320, 75, 23));
        label = new QLabel(sellerstartpage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 70, 171, 20));
        pushButton_3 = new QPushButton(sellerstartpage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 20, 75, 23));

        retranslateUi(sellerstartpage);

        QMetaObject::connectSlotsByName(sellerstartpage);
    } // setupUi

    void retranslateUi(QDialog *sellerstartpage)
    {
        sellerstartpage->setWindowTitle(QApplication::translate("sellerstartpage", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("sellerstartpage", "sign up", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("sellerstartpage", "login", Q_NULLPTR));
        label->setText(QApplication::translate("sellerstartpage", "welcome to Inventory Managment", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("sellerstartpage", "back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sellerstartpage: public Ui_sellerstartpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERSTARTPAGE_H
