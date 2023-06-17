/********************************************************************************
** Form generated from reading UI file 'sellersignuppage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERSIGNUPPAGE_H
#define UI_SELLERSIGNUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_sellersignuppage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *sellersignuppage)
    {
        if (sellersignuppage->objectName().isEmpty())
            sellersignuppage->setObjectName(QStringLiteral("sellersignuppage"));
        sellersignuppage->resize(400, 300);
        buttonBox = new QDialogButtonBox(sellersignuppage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(sellersignuppage);
        QObject::connect(buttonBox, SIGNAL(accepted()), sellersignuppage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sellersignuppage, SLOT(reject()));

        QMetaObject::connectSlotsByName(sellersignuppage);
    } // setupUi

    void retranslateUi(QDialog *sellersignuppage)
    {
        sellersignuppage->setWindowTitle(QApplication::translate("sellersignuppage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sellersignuppage: public Ui_sellersignuppage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERSIGNUPPAGE_H
