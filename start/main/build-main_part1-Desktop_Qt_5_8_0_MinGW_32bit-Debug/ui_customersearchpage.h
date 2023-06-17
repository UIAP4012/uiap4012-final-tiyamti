/********************************************************************************
** Form generated from reading UI file 'customersearchpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSEARCHPAGE_H
#define UI_CUSTOMERSEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_customersearchpage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *customersearchpage)
    {
        if (customersearchpage->objectName().isEmpty())
            customersearchpage->setObjectName(QStringLiteral("customersearchpage"));
        customersearchpage->resize(400, 300);
        buttonBox = new QDialogButtonBox(customersearchpage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(customersearchpage);
        QObject::connect(buttonBox, SIGNAL(accepted()), customersearchpage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customersearchpage, SLOT(reject()));

        QMetaObject::connectSlotsByName(customersearchpage);
    } // setupUi

    void retranslateUi(QDialog *customersearchpage)
    {
        customersearchpage->setWindowTitle(QApplication::translate("customersearchpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customersearchpage: public Ui_customersearchpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSEARCHPAGE_H
