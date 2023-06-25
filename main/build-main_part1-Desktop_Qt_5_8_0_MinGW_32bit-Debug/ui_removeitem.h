/********************************************************************************
** Form generated from reading UI file 'removeitem.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEITEM_H
#define UI_REMOVEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_removeitem
{
public:
    QLineEdit *txtValue;
    QPushButton *btnFind;

    void setupUi(QDialog *removeitem)
    {
        if (removeitem->objectName().isEmpty())
            removeitem->setObjectName(QStringLiteral("removeitem"));
        removeitem->resize(400, 300);
        txtValue = new QLineEdit(removeitem);
        txtValue->setObjectName(QStringLiteral("txtValue"));
        txtValue->setGeometry(QRect(20, 30, 201, 20));
        btnFind = new QPushButton(removeitem);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        btnFind->setGeometry(QRect(230, 30, 75, 23));

        retranslateUi(removeitem);

        QMetaObject::connectSlotsByName(removeitem);
    } // setupUi

    void retranslateUi(QDialog *removeitem)
    {
        removeitem->setWindowTitle(QApplication::translate("removeitem", "Dialog", Q_NULLPTR));
        btnFind->setText(QApplication::translate("removeitem", "Remove", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class removeitem: public Ui_removeitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEITEM_H
