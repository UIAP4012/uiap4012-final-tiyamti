/********************************************************************************
** Form generated from reading UI file 'bsellernew3.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BSELLERNEW3_H
#define UI_BSELLERNEW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_bsellernew3
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *bsellernew3)
    {
        if (bsellernew3->objectName().isEmpty())
            bsellernew3->setObjectName(QStringLiteral("bsellernew3"));
        bsellernew3->resize(400, 300);
        buttonBox = new QDialogButtonBox(bsellernew3);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(bsellernew3);
        QObject::connect(buttonBox, SIGNAL(accepted()), bsellernew3, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), bsellernew3, SLOT(reject()));

        QMetaObject::connectSlotsByName(bsellernew3);
    } // setupUi

    void retranslateUi(QDialog *bsellernew3)
    {
        bsellernew3->setWindowTitle(QApplication::translate("bsellernew3", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bsellernew3: public Ui_bsellernew3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BSELLERNEW3_H
