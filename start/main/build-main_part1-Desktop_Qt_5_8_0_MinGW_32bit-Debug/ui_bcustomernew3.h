/********************************************************************************
** Form generated from reading UI file 'bcustomernew3.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BCUSTOMERNEW3_H
#define UI_BCUSTOMERNEW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_bcustomernew3
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *bcustomernew3)
    {
        if (bcustomernew3->objectName().isEmpty())
            bcustomernew3->setObjectName(QStringLiteral("bcustomernew3"));
        bcustomernew3->resize(400, 300);
        buttonBox = new QDialogButtonBox(bcustomernew3);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(bcustomernew3);
        QObject::connect(buttonBox, SIGNAL(accepted()), bcustomernew3, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), bcustomernew3, SLOT(reject()));

        QMetaObject::connectSlotsByName(bcustomernew3);
    } // setupUi

    void retranslateUi(QDialog *bcustomernew3)
    {
        bcustomernew3->setWindowTitle(QApplication::translate("bcustomernew3", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bcustomernew3: public Ui_bcustomernew3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BCUSTOMERNEW3_H
