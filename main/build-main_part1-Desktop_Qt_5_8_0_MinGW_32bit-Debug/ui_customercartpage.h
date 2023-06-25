/********************************************************************************
** Form generated from reading UI file 'customercartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERCARTPAGE_H
#define UI_CUSTOMERCARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_customercartpage
{
public:

    void setupUi(QDialog *customercartpage)
    {
        if (customercartpage->objectName().isEmpty())
            customercartpage->setObjectName(QStringLiteral("customercartpage"));
        customercartpage->resize(400, 300);

        retranslateUi(customercartpage);

        QMetaObject::connectSlotsByName(customercartpage);
    } // setupUi

    void retranslateUi(QDialog *customercartpage)
    {
        customercartpage->setWindowTitle(QApplication::translate("customercartpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customercartpage: public Ui_customercartpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERCARTPAGE_H
