/********************************************************************************
** Form generated from reading UI file 'changepasswordcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDCUSTOMER_H
#define UI_CHANGEPASSWORDCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_changepasswordcustomer
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *changepasswordcustomer)
    {
        if (changepasswordcustomer->objectName().isEmpty())
            changepasswordcustomer->setObjectName(QStringLiteral("changepasswordcustomer"));
        changepasswordcustomer->resize(400, 300);
        buttonBox = new QDialogButtonBox(changepasswordcustomer);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(changepasswordcustomer);
        QObject::connect(buttonBox, SIGNAL(accepted()), changepasswordcustomer, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), changepasswordcustomer, SLOT(reject()));

        QMetaObject::connectSlotsByName(changepasswordcustomer);
    } // setupUi

    void retranslateUi(QDialog *changepasswordcustomer)
    {
        changepasswordcustomer->setWindowTitle(QApplication::translate("changepasswordcustomer", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class changepasswordcustomer: public Ui_changepasswordcustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDCUSTOMER_H
