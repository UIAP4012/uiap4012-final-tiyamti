#include "updateitems.h"
#include "ui_updateitems.h"
#include <QTableView>
#include <QStandardItemModel>
#include <QFile>
#include <QTextStream>
#include <QStringList>
updateitems::updateitems(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::updateitems)
{
  ui->setupUi(this);
}

updateitems::~updateitems()
{
  delete ui;
}

void updateitems::on_find_clicked()
{
  QString searchItem = ui->findline->text();
  QFile file("F:/pishrafteh/final project/main/main_part1/csv files/items.csv");
     if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
     {
         // Handle error opening the file
         return;
     }

     QTextStream stream(&file);

     QStandardItemModel* model = new QStandardItemModel(this);
     model->setColumnCount(2); // Assuming the CSV file has two columns

     // Set header labels
     model->setHeaderData(0, Qt::Horizontal, "Index");
     model->setHeaderData(1, Qt::Horizontal, "Data");

     int row = 0;
     bool found = false;

     // Read and process each line of the CSV file
     while (!stream.atEnd())
     {
         QString line = stream.readLine();
         QStringList fields = line.split(",");

         // Check if the first field matches the search item
         if (!fields.isEmpty() && fields.at(0) == searchItem)
         {
             found = true;

             // Display the result in the QTableView
             model->setItem(row, 0, new QStandardItem(fields.at(0)));
             model->setItem(row, 1, new QStandardItem(fields.at(1))); // Assuming the data is in the second field (index 1)
             model->setItem(row, 2, new QStandardItem(fields.at(2)));
             model->setItem(row, 3, new QStandardItem(fields.at(3)));
             model->setItem(row, 4, new QStandardItem(fields.at(4)));
             row++;
         }
     }

     file.close();

     if (found)
     {
         ui->tfind->setModel(model);

     }
}

void updateitems::on_reset_clicked()
{
  QFile file("F:/pishrafteh/final project/main/main_part1/csv files/items.csv");

  // Open the file in read-write mode
  if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
      // Read all lines into a QStringList
      QStringList lines;
      QTextStream in(&file);
      while (!in.atEnd()) {
          lines.append(in.readLine());
      }

      // Remove the line at the specified index
      for(int i=0;i<1;i++){
      if (lines.at(i) >= 0 && lines.at(i)  < lines.size()) {
          lines.removeAt(i);
      }
}
      // Reopen the file in write mode
      file.resize(0); // Clear the file contents
      if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
          // Write the updated lines to the file
          QTextStream out(&file);
          for (const QString& line : lines) {
              out << line << "\n";
          }
          file.close();
      }
  }
}

void updateitems::on_edite_clicked()
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
   ui->resl->setText("Item Edited Successfully!");
    }
}

