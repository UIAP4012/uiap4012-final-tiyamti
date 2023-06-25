/********************************************************************************
** Form generated from reading UI file 'bsellernew1.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BSELLERNEW1_H
#define UI_BSELLERNEW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_bsellernew1
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *bsellernew1)
    {
        if (bsellernew1->objectName().isEmpty())
            bsellernew1->setObjectName(QStringLiteral("bsellernew1"));
        bsellernew1->resize(400, 300);
        buttonBox = new QDialogButtonBox(bsellernew1);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(bsellernew1);
        QObject::connect(buttonBox, SIGNAL(accepted()), bsellernew1, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), bsellernew1, SLOT(reject()));

        QMetaObject::connectSlotsByName(bsellernew1);
    } // setupUi

    void retranslateUi(QDialog *bsellernew1)
    {
        bsellernew1->setWindowTitle(QApplication::translate("bsellernew1", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bsellernew1: public Ui_bsellernew1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BSELLERNEW1_H
