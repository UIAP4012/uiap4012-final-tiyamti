/********************************************************************************
** Form generated from reading UI file 'mainreportpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINREPORTPAGE_H
#define UI_MAINREPORTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_mainreportpage
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QPushButton *reset;

    void setupUi(QDialog *mainreportpage)
    {
        if (mainreportpage->objectName().isEmpty())
            mainreportpage->setObjectName(QStringLiteral("mainreportpage"));
        mainreportpage->resize(400, 300);
        pushButton = new QPushButton(mainreportpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 40, 75, 23));
        pushButton_2 = new QPushButton(mainreportpage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 130, 75, 23));
        pushButton_3 = new QPushButton(mainreportpage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 230, 75, 23));
        tableView = new QTableView(mainreportpage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(140, 10, 256, 251));
        reset = new QPushButton(mainreportpage);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(220, 270, 75, 23));

        retranslateUi(mainreportpage);

        QMetaObject::connectSlotsByName(mainreportpage);
    } // setupUi

    void retranslateUi(QDialog *mainreportpage)
    {
        mainreportpage->setWindowTitle(QApplication::translate("mainreportpage", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("mainreportpage", "Bills", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("mainreportpage", "customers", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("mainreportpage", "sellers", Q_NULLPTR));
        reset->setText(QApplication::translate("mainreportpage", "reset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainreportpage: public Ui_mainreportpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINREPORTPAGE_H
