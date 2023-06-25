/********************************************************************************
** Form generated from reading UI file 'customerbillspage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERBILLSPAGE_H
#define UI_CUSTOMERBILLSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_customerbillspage
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *customerbillspage)
    {
        if (customerbillspage->objectName().isEmpty())
            customerbillspage->setObjectName(QStringLiteral("customerbillspage"));
        customerbillspage->resize(400, 300);
        buttonBox = new QDialogButtonBox(customerbillspage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(customerbillspage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(86, 92, 271, 111));
        label->setStyleSheet(QStringLiteral("image: url(:/imagestart/pic/cl1.jpg);"));

        retranslateUi(customerbillspage);
        QObject::connect(buttonBox, SIGNAL(accepted()), customerbillspage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customerbillspage, SLOT(reject()));

        QMetaObject::connectSlotsByName(customerbillspage);
    } // setupUi

    void retranslateUi(QDialog *customerbillspage)
    {
        customerbillspage->setWindowTitle(QApplication::translate("customerbillspage", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("customerbillspage", ".", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerbillspage: public Ui_customerbillspage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERBILLSPAGE_H
