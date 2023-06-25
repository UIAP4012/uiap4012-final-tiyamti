/********************************************************************************
** Form generated from reading UI file 'updateitems.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEITEMS_H
#define UI_UPDATEITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_updateitems
{
public:
    QPushButton *find;
    QLineEdit *findline;
    QTableView *tfind;
    QPushButton *reset;
    QComboBox *cmbStatus;
    QPushButton *edite;
    QLabel *label_7;
    QLineEdit *txtPurchasePrice;
    QLabel *label_3;
    QLabel *resl;
    QLabel *label_6;
    QLineEdit *txtName;
    QLabel *label_2;
    QLineEdit *txtQuantity;
    QLabel *label;
    QLineEdit *txtSellingPrice;

    void setupUi(QDialog *updateitems)
    {
        if (updateitems->objectName().isEmpty())
            updateitems->setObjectName(QStringLiteral("updateitems"));
        updateitems->resize(400, 373);
        find = new QPushButton(updateitems);
        find->setObjectName(QStringLiteral("find"));
        find->setGeometry(QRect(230, 20, 75, 23));
        findline = new QLineEdit(updateitems);
        findline->setObjectName(QStringLiteral("findline"));
        findline->setGeometry(QRect(40, 20, 191, 20));
        tfind = new QTableView(updateitems);
        tfind->setObjectName(QStringLiteral("tfind"));
        tfind->setGeometry(QRect(40, 60, 256, 41));
        reset = new QPushButton(updateitems);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(310, 70, 75, 23));
        cmbStatus = new QComboBox(updateitems);
        cmbStatus->setObjectName(QStringLiteral("cmbStatus"));
        cmbStatus->setGeometry(QRect(220, 190, 111, 22));
        edite = new QPushButton(updateitems);
        edite->setObjectName(QStringLiteral("edite"));
        edite->setGeometry(QRect(150, 340, 75, 31));
        QFont font;
        font.setPointSize(9);
        edite->setFont(font);
        edite->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        label_7 = new QLabel(updateitems);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 270, 121, 16));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));
        txtPurchasePrice = new QLineEdit(updateitems);
        txtPurchasePrice->setObjectName(QStringLiteral("txtPurchasePrice"));
        txtPurchasePrice->setGeometry(QRect(220, 270, 113, 20));
        txtPurchasePrice->setFont(font);
        txtPurchasePrice->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        label_3 = new QLabel(updateitems);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 190, 121, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));
        resl = new QLabel(updateitems);
        resl->setObjectName(QStringLiteral("resl"));
        resl->setGeometry(QRect(90, 300, 191, 20));
        resl->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        label_6 = new QLabel(updateitems);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 230, 121, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));
        txtName = new QLineEdit(updateitems);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(220, 110, 113, 20));
        txtName->setFont(font);
        txtName->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        label_2 = new QLabel(updateitems);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 150, 121, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));
        txtQuantity = new QLineEdit(updateitems);
        txtQuantity->setObjectName(QStringLiteral("txtQuantity"));
        txtQuantity->setGeometry(QRect(220, 150, 113, 20));
        txtQuantity->setFont(font);
        txtQuantity->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));
        label = new QLabel(updateitems);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 110, 121, 16));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-image: url(:/imagestart/pic/t1.jpg);\n"
"color: rgb(255, 255, 255);"));
        txtSellingPrice = new QLineEdit(updateitems);
        txtSellingPrice->setObjectName(QStringLiteral("txtSellingPrice"));
        txtSellingPrice->setGeometry(QRect(220, 230, 113, 20));
        txtSellingPrice->setFont(font);
        txtSellingPrice->setStyleSheet(QStringLiteral("background-image: url(:/imagestart/pic/t1.jpg);"));

        retranslateUi(updateitems);

        QMetaObject::connectSlotsByName(updateitems);
    } // setupUi

    void retranslateUi(QDialog *updateitems)
    {
        updateitems->setWindowTitle(QApplication::translate("updateitems", "Dialog", Q_NULLPTR));
        find->setText(QApplication::translate("updateitems", "FIND", Q_NULLPTR));
        reset->setText(QApplication::translate("updateitems", "RESET", Q_NULLPTR));
        cmbStatus->clear();
        cmbStatus->insertItems(0, QStringList()
         << QApplication::translate("updateitems", "Available", Q_NULLPTR)
         << QApplication::translate("updateitems", "Expired", Q_NULLPTR)
         << QApplication::translate("updateitems", "Sold", Q_NULLPTR)
         << QApplication::translate("updateitems", "Return", Q_NULLPTR)
         << QApplication::translate("updateitems", "Spoiled", Q_NULLPTR)
        );
        edite->setText(QApplication::translate("updateitems", "edite", Q_NULLPTR));
        label_7->setText(QApplication::translate("updateitems", "Purchase Price", Q_NULLPTR));
        label_3->setText(QApplication::translate("updateitems", "Status", Q_NULLPTR));
        resl->setText(QString());
        label_6->setText(QApplication::translate("updateitems", "Selling Price", Q_NULLPTR));
        label_2->setText(QApplication::translate("updateitems", "Quantity", Q_NULLPTR));
        label->setText(QApplication::translate("updateitems", "Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updateitems: public Ui_updateitems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEITEMS_H
