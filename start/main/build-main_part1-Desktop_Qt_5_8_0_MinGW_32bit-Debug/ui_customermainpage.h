/********************************************************************************
** Form generated from reading UI file 'customermainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMAINPAGE_H
#define UI_CUSTOMERMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_customermainpage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *customermainpage)
    {
        if (customermainpage->objectName().isEmpty())
            customermainpage->setObjectName(QStringLiteral("customermainpage"));
        customermainpage->resize(400, 300);
        buttonBox = new QDialogButtonBox(customermainpage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(customermainpage);
        QObject::connect(buttonBox, SIGNAL(accepted()), customermainpage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customermainpage, SLOT(reject()));

        QMetaObject::connectSlotsByName(customermainpage);
    } // setupUi

    void retranslateUi(QDialog *customermainpage)
    {
        customermainpage->setWindowTitle(QApplication::translate("customermainpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customermainpage: public Ui_customermainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMAINPAGE_H
