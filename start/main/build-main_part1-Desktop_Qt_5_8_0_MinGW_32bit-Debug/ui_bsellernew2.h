/********************************************************************************
** Form generated from reading UI file 'bsellernew2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BSELLERNEW2_H
#define UI_BSELLERNEW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_bsellernew2
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *bsellernew2)
    {
        if (bsellernew2->objectName().isEmpty())
            bsellernew2->setObjectName(QStringLiteral("bsellernew2"));
        bsellernew2->resize(400, 300);
        buttonBox = new QDialogButtonBox(bsellernew2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(bsellernew2);
        QObject::connect(buttonBox, SIGNAL(accepted()), bsellernew2, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), bsellernew2, SLOT(reject()));

        QMetaObject::connectSlotsByName(bsellernew2);
    } // setupUi

    void retranslateUi(QDialog *bsellernew2)
    {
        bsellernew2->setWindowTitle(QApplication::translate("bsellernew2", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bsellernew2: public Ui_bsellernew2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BSELLERNEW2_H
