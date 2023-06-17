/********************************************************************************
** Form generated from reading UI file 'customerfavoritpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERFAVORITPAGE_H
#define UI_CUSTOMERFAVORITPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_customerfavoritpage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *customerfavoritpage)
    {
        if (customerfavoritpage->objectName().isEmpty())
            customerfavoritpage->setObjectName(QStringLiteral("customerfavoritpage"));
        customerfavoritpage->resize(400, 300);
        buttonBox = new QDialogButtonBox(customerfavoritpage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(customerfavoritpage);
        QObject::connect(buttonBox, SIGNAL(accepted()), customerfavoritpage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customerfavoritpage, SLOT(reject()));

        QMetaObject::connectSlotsByName(customerfavoritpage);
    } // setupUi

    void retranslateUi(QDialog *customerfavoritpage)
    {
        customerfavoritpage->setWindowTitle(QApplication::translate("customerfavoritpage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerfavoritpage: public Ui_customerfavoritpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERFAVORITPAGE_H
