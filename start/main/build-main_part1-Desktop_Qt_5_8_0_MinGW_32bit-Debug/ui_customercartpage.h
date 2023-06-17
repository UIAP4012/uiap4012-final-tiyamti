/********************************************************************************
** Form generated from reading UI file 'customercartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERCARTPAGE_H
#define UI_CUSTOMERCARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_customercartpage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *customercartpage)
    {
        if (customercartpage->objectName().isEmpty())
            customercartpage->setObjectName(QStringLiteral("customercartpage"));
        customercartpage->resize(400, 300);
        buttonBox = new QDialogButtonBox(customercartpage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(customercartpage);
        QObject::connect(buttonBox, SIGNAL(accepted()), customercartpage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customercartpage, SLOT(reject()));

        QMetaObject::connectSlotsByName(customercartpage);
    } // setupUi

    void retranslateUi(QDialog *customercartpage)
    {
        customercartpage->setWindowTitle(QApplication::translate("customercartpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customercartpage: public Ui_customercartpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERCARTPAGE_H
