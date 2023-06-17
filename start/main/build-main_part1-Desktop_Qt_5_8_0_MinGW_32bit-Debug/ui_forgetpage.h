/********************************************************************************
** Form generated from reading UI file 'forgetpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPAGE_H
#define UI_FORGETPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_forgetpage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *forgetpage)
    {
        if (forgetpage->objectName().isEmpty())
            forgetpage->setObjectName(QStringLiteral("forgetpage"));
        forgetpage->resize(400, 300);
        buttonBox = new QDialogButtonBox(forgetpage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(forgetpage);
        QObject::connect(buttonBox, SIGNAL(accepted()), forgetpage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), forgetpage, SLOT(reject()));

        QMetaObject::connectSlotsByName(forgetpage);
    } // setupUi

    void retranslateUi(QDialog *forgetpage)
    {
        forgetpage->setWindowTitle(QApplication::translate("forgetpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class forgetpage: public Ui_forgetpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPAGE_H
