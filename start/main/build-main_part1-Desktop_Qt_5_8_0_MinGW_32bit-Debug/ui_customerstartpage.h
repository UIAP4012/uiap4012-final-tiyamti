/********************************************************************************
** Form generated from reading UI file 'customerstartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSTARTPAGE_H
#define UI_CUSTOMERSTARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_customerstartpage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *customerstartpage)
    {
        if (customerstartpage->objectName().isEmpty())
            customerstartpage->setObjectName(QStringLiteral("customerstartpage"));
        customerstartpage->resize(400, 300);
        buttonBox = new QDialogButtonBox(customerstartpage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(customerstartpage);
        QObject::connect(buttonBox, SIGNAL(accepted()), customerstartpage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customerstartpage, SLOT(reject()));

        QMetaObject::connectSlotsByName(customerstartpage);
    } // setupUi

    void retranslateUi(QDialog *customerstartpage)
    {
        customerstartpage->setWindowTitle(QApplication::translate("customerstartpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerstartpage: public Ui_customerstartpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSTARTPAGE_H