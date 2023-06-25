/********************************************************************************
** Form generated from reading UI file 'myntracustomerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYNTRACUSTOMERPAGE_H
#define UI_MYNTRACUSTOMERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_myntracustomerpage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *myntracustomerpage)
    {
        if (myntracustomerpage->objectName().isEmpty())
            myntracustomerpage->setObjectName(QStringLiteral("myntracustomerpage"));
        myntracustomerpage->resize(400, 300);
        buttonBox = new QDialogButtonBox(myntracustomerpage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(myntracustomerpage);
        QObject::connect(buttonBox, SIGNAL(accepted()), myntracustomerpage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), myntracustomerpage, SLOT(reject()));

        QMetaObject::connectSlotsByName(myntracustomerpage);
    } // setupUi

    void retranslateUi(QDialog *myntracustomerpage)
    {
        myntracustomerpage->setWindowTitle(QApplication::translate("myntracustomerpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myntracustomerpage: public Ui_myntracustomerpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYNTRACUSTOMERPAGE_H
