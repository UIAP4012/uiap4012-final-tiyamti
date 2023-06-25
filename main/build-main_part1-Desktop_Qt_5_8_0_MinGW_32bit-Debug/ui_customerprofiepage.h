/********************************************************************************
** Form generated from reading UI file 'customerprofiepage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERPROFIEPAGE_H
#define UI_CUSTOMERPROFIEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customerprofiepage
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *customerprofiepage)
    {
        if (customerprofiepage->objectName().isEmpty())
            customerprofiepage->setObjectName(QStringLiteral("customerprofiepage"));
        customerprofiepage->resize(352, 398);
        customerprofiepage->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/bcap4.jpg);"));
        label = new QLabel(customerprofiepage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 20, 47, 13));
        label_2 = new QLabel(customerprofiepage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 47, 13));
        label_2->setStyleSheet(QStringLiteral("font: 75 italic 13pt \"MS Sans Serif\";"));
        pushButton = new QPushButton(customerprofiepage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 60, 101, 23));
        pushButton_2 = new QPushButton(customerprofiepage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 130, 101, 23));
        pushButton_3 = new QPushButton(customerprofiepage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 200, 101, 23));
        pushButton_4 = new QPushButton(customerprofiepage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 270, 101, 23));
        pushButton_5 = new QPushButton(customerprofiepage);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 340, 101, 23));

        retranslateUi(customerprofiepage);

        QMetaObject::connectSlotsByName(customerprofiepage);
    } // setupUi

    void retranslateUi(QDialog *customerprofiepage)
    {
        customerprofiepage->setWindowTitle(QApplication::translate("customerprofiepage", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("customerprofiepage", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("customerprofiepage", "      Hi", Q_NULLPTR));
        pushButton->setText(QApplication::translate("customerprofiepage", "your orders", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("customerprofiepage", "wishlist", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("customerprofiepage", "your bills", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("customerprofiepage", "myntra credit", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("customerprofiepage", "change password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerprofiepage: public Ui_customerprofiepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERPROFIEPAGE_H
