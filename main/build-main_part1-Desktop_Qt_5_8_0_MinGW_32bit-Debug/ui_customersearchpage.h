/********************************************************************************
** Form generated from reading UI file 'customersearchpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSEARCHPAGE_H
#define UI_CUSTOMERSEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customersearchpage
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *customersearchpage)
    {
        if (customersearchpage->objectName().isEmpty())
            customersearchpage->setObjectName(QStringLiteral("customersearchpage"));
        customersearchpage->resize(346, 404);
        customersearchpage->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/pic/bcap.jpg);"));
        pushButton = new QPushButton(customersearchpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 31, 23));
        pushButton_2 = new QPushButton(customersearchpage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 10, 75, 23));
        lineEdit = new QLineEdit(customersearchpage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 10, 171, 31));
        lineEdit->setStyleSheet(QLatin1String("background-image:url(:/imagestart/pic/t1.jpg);\n"
"\n"
" "));

        retranslateUi(customersearchpage);

        QMetaObject::connectSlotsByName(customersearchpage);
    } // setupUi

    void retranslateUi(QDialog *customersearchpage)
    {
        customersearchpage->setWindowTitle(QApplication::translate("customersearchpage", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("customersearchpage", "back", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("customersearchpage", "search", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customersearchpage: public Ui_customersearchpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSEARCHPAGE_H
