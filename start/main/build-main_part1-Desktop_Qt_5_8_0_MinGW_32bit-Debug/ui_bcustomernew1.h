/********************************************************************************
** Form generated from reading UI file 'bcustomernew1.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BCUSTOMERNEW1_H
#define UI_BCUSTOMERNEW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_bcustomernew1
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *bcustomernew1)
    {
        if (bcustomernew1->objectName().isEmpty())
            bcustomernew1->setObjectName(QStringLiteral("bcustomernew1"));
        bcustomernew1->resize(400, 300);
        buttonBox = new QDialogButtonBox(bcustomernew1);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(bcustomernew1);
        QObject::connect(buttonBox, SIGNAL(accepted()), bcustomernew1, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), bcustomernew1, SLOT(reject()));

        QMetaObject::connectSlotsByName(bcustomernew1);
    } // setupUi

    void retranslateUi(QDialog *bcustomernew1)
    {
        bcustomernew1->setWindowTitle(QApplication::translate("bcustomernew1", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bcustomernew1: public Ui_bcustomernew1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BCUSTOMERNEW1_H
