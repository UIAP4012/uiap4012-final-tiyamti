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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customerfavoritpage
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *customerfavoritpage)
    {
        if (customerfavoritpage->objectName().isEmpty())
            customerfavoritpage->setObjectName(QStringLiteral("customerfavoritpage"));
        customerfavoritpage->resize(342, 407);
        customerfavoritpage->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/bcap2.jpg);"));
        label = new QLabel(customerfavoritpage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 47, 13));
        pushButton = new QPushButton(customerfavoritpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 75, 23));

        retranslateUi(customerfavoritpage);

        QMetaObject::connectSlotsByName(customerfavoritpage);
    } // setupUi

    void retranslateUi(QDialog *customerfavoritpage)
    {
        customerfavoritpage->setWindowTitle(QApplication::translate("customerfavoritpage", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("customerfavoritpage", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("customerfavoritpage", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerfavoritpage: public Ui_customerfavoritpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERFAVORITPAGE_H
