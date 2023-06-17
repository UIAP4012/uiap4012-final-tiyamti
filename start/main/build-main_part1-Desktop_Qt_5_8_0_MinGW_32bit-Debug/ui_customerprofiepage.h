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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_customerprofiepage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *customerprofiepage)
    {
        if (customerprofiepage->objectName().isEmpty())
            customerprofiepage->setObjectName(QStringLiteral("customerprofiepage"));
        customerprofiepage->resize(400, 300);
        buttonBox = new QDialogButtonBox(customerprofiepage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(customerprofiepage);
        QObject::connect(buttonBox, SIGNAL(accepted()), customerprofiepage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customerprofiepage, SLOT(reject()));

        QMetaObject::connectSlotsByName(customerprofiepage);
    } // setupUi

    void retranslateUi(QDialog *customerprofiepage)
    {
        customerprofiepage->setWindowTitle(QApplication::translate("customerprofiepage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerprofiepage: public Ui_customerprofiepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERPROFIEPAGE_H
