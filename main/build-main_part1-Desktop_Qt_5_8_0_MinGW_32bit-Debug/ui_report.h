/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QTableView *tableView;
    QPushButton *showitems;

    void setupUi(QDialog *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName(QStringLiteral("report"));
        report->resize(400, 300);
        tableView = new QTableView(report);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(80, 60, 256, 192));
        showitems = new QPushButton(report);
        showitems->setObjectName(QStringLiteral("showitems"));
        showitems->setGeometry(QRect(170, 20, 75, 23));

        retranslateUi(report);

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QDialog *report)
    {
        report->setWindowTitle(QApplication::translate("report", "Dialog", Q_NULLPTR));
        showitems->setText(QApplication::translate("report", "show items", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
