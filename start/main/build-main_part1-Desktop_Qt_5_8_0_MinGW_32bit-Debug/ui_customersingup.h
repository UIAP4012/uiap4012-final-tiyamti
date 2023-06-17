/********************************************************************************
** Form generated from reading UI file 'customersingup.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSINGUP_H
#define UI_CUSTOMERSINGUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_customersingup
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *customersingup)
    {
        if (customersingup->objectName().isEmpty())
            customersingup->setObjectName(QStringLiteral("customersingup"));
        customersingup->resize(400, 300);
        buttonBox = new QDialogButtonBox(customersingup);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(customersingup);
        QObject::connect(buttonBox, SIGNAL(accepted()), customersingup, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customersingup, SLOT(reject()));

        QMetaObject::connectSlotsByName(customersingup);
    } // setupUi

    void retranslateUi(QDialog *customersingup)
    {
        customersingup->setWindowTitle(QApplication::translate("customersingup", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customersingup: public Ui_customersingup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSINGUP_H
