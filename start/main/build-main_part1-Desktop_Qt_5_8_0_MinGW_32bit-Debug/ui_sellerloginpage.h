/********************************************************************************
** Form generated from reading UI file 'sellerloginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERLOGINPAGE_H
#define UI_SELLERLOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_sellerloginpage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *sellerloginpage)
    {
        if (sellerloginpage->objectName().isEmpty())
            sellerloginpage->setObjectName(QStringLiteral("sellerloginpage"));
        sellerloginpage->resize(400, 300);
        buttonBox = new QDialogButtonBox(sellerloginpage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(sellerloginpage);
        QObject::connect(buttonBox, SIGNAL(accepted()), sellerloginpage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sellerloginpage, SLOT(reject()));

        QMetaObject::connectSlotsByName(sellerloginpage);
    } // setupUi

    void retranslateUi(QDialog *sellerloginpage)
    {
        sellerloginpage->setWindowTitle(QApplication::translate("sellerloginpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sellerloginpage: public Ui_sellerloginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERLOGINPAGE_H
