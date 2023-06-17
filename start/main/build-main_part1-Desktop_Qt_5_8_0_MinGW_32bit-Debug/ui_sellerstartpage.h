/********************************************************************************
** Form generated from reading UI file 'sellerstartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERSTARTPAGE_H
#define UI_SELLERSTARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_sellerstartpage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *sellerstartpage)
    {
        if (sellerstartpage->objectName().isEmpty())
            sellerstartpage->setObjectName(QStringLiteral("sellerstartpage"));
        sellerstartpage->resize(400, 300);
        buttonBox = new QDialogButtonBox(sellerstartpage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(sellerstartpage);
        QObject::connect(buttonBox, SIGNAL(accepted()), sellerstartpage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sellerstartpage, SLOT(reject()));

        QMetaObject::connectSlotsByName(sellerstartpage);
    } // setupUi

    void retranslateUi(QDialog *sellerstartpage)
    {
        sellerstartpage->setWindowTitle(QApplication::translate("sellerstartpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sellerstartpage: public Ui_sellerstartpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERSTARTPAGE_H
