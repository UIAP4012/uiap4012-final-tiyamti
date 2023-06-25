#include "additem.h"
#include "ui_additem.h"
#include <QFile>
#include <QTextStream>
additem::additem(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::additem)
{
  ui->setupUi(this);

}

additem::~additem()
{
  delete ui;
}

void additem::on_btnAdd_clicked()
{
  QString sName = ui->txtName->text();
  QString sQuantity = ui->txtQuantity->text();
  QString sStatus = ui->cmbStatus->currentText();
  QString sSellingPrice = ui->txtSellingPrice->text();
  QString sPurchasePrice = ui->txtPurchasePrice->text();

  QFile file("F:/pishrafteh/final project/main/main_part1/csv files/items.csv");
  if (file.open(QIODevice::ReadWrite| QIODevice::Append)) {
  QTextStream out (&file);
  out << "Name,Quantity,Status,SellingPrice,PurchasePrice\n";
  out << sName << "," << sQuantity<<"," <<sStatus<<","<<sSellingPrice<<","<< sPurchasePrice<<"\n";
  file.close ();
   ui->resl->setText("Item Added Successfully!");
    }
}
void additem::resetElements()
{
    ui->txtName->clear();
    ui->txtQuantity->clear();
    ui->txtSellingPrice->clear();
    ui->txtPurchasePrice->clear();
}
