/********************************************************************************
** Form generated from reading UI file 'item.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEM_H
#define UI_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_item
{
public:
    QGridLayout *gridLayout;
    QPushButton *additem;
    QPushButton *remitem;
    QPushButton *upitem;
    QPushButton *report;
    QPushButton *seitem;
    QPushButton *back;

    void setupUi(QDialog *item)
    {
        if (item->objectName().isEmpty())
            item->setObjectName(QStringLiteral("item"));
        item->resize(385, 337);
        item->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/bcap6.jpg);"));
        gridLayout = new QGridLayout(item);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        additem = new QPushButton(item);
        additem->setObjectName(QStringLiteral("additem"));
        additem->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/bcap5.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(additem, 2, 0, 1, 1);

        remitem = new QPushButton(item);
        remitem->setObjectName(QStringLiteral("remitem"));
        remitem->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/bcap5.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(remitem, 3, 0, 1, 1);

        upitem = new QPushButton(item);
        upitem->setObjectName(QStringLiteral("upitem"));
        upitem->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/bcap5.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(upitem, 4, 0, 1, 1);

        report = new QPushButton(item);
        report->setObjectName(QStringLiteral("report"));
        report->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/bcap5.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(report, 2, 1, 1, 1);

        seitem = new QPushButton(item);
        seitem->setObjectName(QStringLiteral("seitem"));
        seitem->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/bcap5.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(seitem, 3, 1, 1, 1);

        back = new QPushButton(item);
        back->setObjectName(QStringLiteral("back"));
        back->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/bcap5.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(back, 4, 1, 1, 1);


        retranslateUi(item);

        QMetaObject::connectSlotsByName(item);
    } // setupUi

    void retranslateUi(QDialog *item)
    {
        item->setWindowTitle(QApplication::translate("item", "Dialog", Q_NULLPTR));
        additem->setText(QApplication::translate("item", "ADD Items", Q_NULLPTR));
        remitem->setText(QApplication::translate("item", "REMOVE Items", Q_NULLPTR));
        upitem->setText(QApplication::translate("item", "UPDATE Items", Q_NULLPTR));
        report->setText(QApplication::translate("item", "REPORT", Q_NULLPTR));
        seitem->setText(QApplication::translate("item", "SEARCH Item", Q_NULLPTR));
        back->setText(QApplication::translate("item", "back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class item: public Ui_item {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEM_H
