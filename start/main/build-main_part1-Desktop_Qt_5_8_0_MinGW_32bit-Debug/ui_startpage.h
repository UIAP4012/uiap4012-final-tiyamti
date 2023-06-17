/********************************************************************************
** Form generated from reading UI file 'startpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPAGE_H
#define UI_STARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_startpage
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *startpage)
    {
        if (startpage->objectName().isEmpty())
            startpage->setObjectName(QStringLiteral("startpage"));
        startpage->resize(417, 399);
        startpage->setStyleSheet(QStringLiteral("background-image:url(:/imagestart/start.jpg);"));
        pushButton = new QPushButton(startpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 180, 91, 51));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image:url(:/imagestart/button.jpg);"));
        pushButton_2 = new QPushButton(startpage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 180, 91, 51));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("background-image:url(:/imagestart/button.jpg);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(startpage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 271, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Sans Serif"));
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(startpage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 300, 121, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("MV Boli"));
        font2.setPointSize(10);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(startpage);

        QMetaObject::connectSlotsByName(startpage);
    } // setupUi

    void retranslateUi(QDialog *startpage)
    {
        startpage->setWindowTitle(QApplication::translate("startpage", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("startpage", "customer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("startpage", "seller", Q_NULLPTR));
        label->setText(QApplication::translate("startpage", "welcome to TITI's online Inventory &  store", Q_NULLPTR));
        label_2->setText(QApplication::translate("startpage", "Which one are you?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class startpage: public Ui_startpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPAGE_H
