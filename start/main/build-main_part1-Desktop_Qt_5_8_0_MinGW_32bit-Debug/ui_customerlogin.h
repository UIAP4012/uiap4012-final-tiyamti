/********************************************************************************
** Form generated from reading UI file 'customerlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERLOGIN_H
#define UI_CUSTOMERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_customerlogin
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *customerlogin)
    {
        if (customerlogin->objectName().isEmpty())
            customerlogin->setObjectName(QStringLiteral("customerlogin"));
        customerlogin->resize(400, 300);
        buttonBox = new QDialogButtonBox(customerlogin);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(customerlogin);
        QObject::connect(buttonBox, SIGNAL(accepted()), customerlogin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customerlogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(customerlogin);
    } // setupUi

    void retranslateUi(QDialog *customerlogin)
    {
        customerlogin->setWindowTitle(QApplication::translate("customerlogin", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerlogin: public Ui_customerlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERLOGIN_H
