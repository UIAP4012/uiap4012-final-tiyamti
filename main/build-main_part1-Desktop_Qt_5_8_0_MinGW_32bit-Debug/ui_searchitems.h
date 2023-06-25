/********************************************************************************
** Form generated from reading UI file 'searchitems.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHITEMS_H
#define UI_SEARCHITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_searchitems
{
public:
    QPushButton *searcbutton;
    QTableView *tsearch;
    QLineEdit *searchline;

    void setupUi(QDialog *searchitems)
    {
        if (searchitems->objectName().isEmpty())
            searchitems->setObjectName(QStringLiteral("searchitems"));
        searchitems->resize(400, 300);
        searcbutton = new QPushButton(searchitems);
        searcbutton->setObjectName(QStringLiteral("searcbutton"));
        searcbutton->setGeometry(QRect(250, 30, 75, 23));
        tsearch = new QTableView(searchitems);
        tsearch->setObjectName(QStringLiteral("tsearch"));
        tsearch->setGeometry(QRect(60, 90, 256, 192));
        searchline = new QLineEdit(searchitems);
        searchline->setObjectName(QStringLiteral("searchline"));
        searchline->setGeometry(QRect(60, 30, 191, 20));

        retranslateUi(searchitems);

        QMetaObject::connectSlotsByName(searchitems);
    } // setupUi

    void retranslateUi(QDialog *searchitems)
    {
        searchitems->setWindowTitle(QApplication::translate("searchitems", "Dialog", Q_NULLPTR));
        searcbutton->setText(QApplication::translate("searchitems", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class searchitems: public Ui_searchitems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHITEMS_H
