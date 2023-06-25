#include "product.h"
#include "ui_product.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QTableView>
product::product(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::product)
{
  ui->setupUi(this);
}

product::~product()
{
  delete ui;
}



void product::on_show_clicked()
{
  QFile file("F:/pishrafteh/final project/main/main_part1/csv files/items.csv");
  if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
          QMessageBox::critical(nullptr, "Error", "Failed to open the file for reading.");
          return;
      }

      QTextStream stream(&file);
      QStringList headerData;
      QList<QStringList> rowData;

      // Read the header line of the CSV file
      if (!stream.atEnd()) {
          QString headerLine = stream.readLine();
          headerData = headerLine.split(",");
      }

      // Read each line in the CSV file and store the row data
      while (!stream.atEnd()) {
          QString line = stream.readLine();
          QStringList rowValues = line.split(",");
          rowData.append(rowValues);
      }

      file.close();

      // Create the model and set the header data
      QStandardItemModel* model = new QStandardItemModel();
      model->setHorizontalHeaderLabels(headerData);

      // Add the row data to the model
      for (const QStringList& row : rowData) {
          QList<QStandardItem*> items;
          for (const QString& value : row) {
              QStandardItem* item = new QStandardItem(value);
              items.append(item);
          }
          model->appendRow(items);
      }

      // Set the model for the QTableView
      ui->tableView->setModel(model);
}

void product::on_search_clicked()
{
  QString searchItem = ui->lineEdit->text();
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
         ui->tableView->setModel(model);

     }
}

void product::on_order_clicked()
{
  QFile sourceFile("F:/pishrafteh/final project/main/main_part1/csv files/items.csv");
      QFile destinationFile("F:/pishrafteh/final project/main/main_part1/csv files/temp.csv");
      QFile destinationFile2("F:/pishrafteh/final project/main/main_part1/csv files/bills.csv");

  int lineIndex = 1;
int lineIndex2 = 1;
  if (!sourceFile.open(QIODevice::ReadOnly | QIODevice::Text))
  {
      // Handle error if the source file cannot be opened
      return;
  }

  if (!destinationFile.open(QIODevice::WriteOnly | QIODevice::Text))
  {
      // Handle error if the destination file cannot be opened
      sourceFile.close();
      return;
  }
  if (!destinationFile2.open(QIODevice::WriteOnly | QIODevice::Text))
  {
      // Handle error if the destination file cannot be opened
      sourceFile.close();
      return;
  }

  QTextStream sourceStream(&sourceFile);
  QTextStream destinationStream(&destinationFile);
  QTextStream destinationStream2(&destinationFile2);

  // Loop through each line in the source file
  int currentIndex = 0;
  while (!sourceStream.atEnd())
  {
      QString line = sourceStream.readLine();

      // Check if the current line is the one to copy and modify
      if (currentIndex == lineIndex)
      {
          // Split the line by commas
          QStringList values = line.split(',');

          // Loop through the values in the line
          for (int i = 0; i < values.size(); ++i)
          {
              // Check if the value is a valid number
              bool isNumber = false;
              int number = values.at(i).toInt(&isNumber);

              if (isNumber)
              {
                  // Decrement the number by 1
                  values[i] = QString::number(number - 1);
              }
          }

          // Join the modified values back into a line
          line = values.join(',');
      }

      // Write the line to the destination file
      destinationStream << line << endl;
      destinationStream2 << line << endl;
      currentIndex++;
  }

  // Close the files
  sourceFile.close();
  destinationFile.close();
  destinationFile2.close();
  // Remove the original line from the source file
  if (sourceFile.remove())
  {
      // Rename the destination file to the source file's name
      destinationFile.rename("F:/pishrafteh/final project/main/main_part1/csv files/items.csv");
  }


  QFile sourceFile2("F:/pishrafteh/final project/main/main_part1/csv files/bills.csv");
  QFile destinationFile3("F:/pishrafteh/final project/main/main_part1/csv files/temp.csv");

  if (!sourceFile2.open(QIODevice::ReadOnly | QIODevice::Text))
  {
      // Handle error if the source file cannot be opened
      return;
  }

  if (!destinationFile3.open(QIODevice::WriteOnly | QIODevice::Text))
  {
      // Handle error if the destination file cannot be opened
      sourceFile2.close();
      return;
  }

  QTextStream sourceStream2(&sourceFile2);
  QTextStream destinationStream3(&destinationFile3);

  // Loop through each line in the source file
  int currentIndex2 = 0;
  while (!sourceStream2.atEnd())
  {
      QString line2 = sourceStream2.readLine();

      // Check if the current line is the one to copy and modify
      if (currentIndex2== lineIndex2)
      {
          // Split the line by commas
          QStringList values2 = line2.split(',');

          // Loop through the values in the line
          for (int i = 0; i < values2.size(); ++i)
          {
              // Check if the value is a valid number
              bool isNumber2 = false;
              int number = values2.at(i).toInt(&isNumber2);

              if (isNumber2)
              {
                  // Decrement the number by 1
                  values2[i] = QString::number( 1);
              }
          }

          // Join the modified values back into a line
          line2 = values2.join(',');

          // Write the modified line to the destination file
          destinationStream3 << line2 << endl;
      }
      else
      {
          // Write the line to the destination file without modifications
          destinationStream3<< line2 << endl;
      }

      currentIndex2++;
  }

  // Close the files
  sourceFile2.close();
  destinationFile3.close();

  // Remove the original line from the source file
  if (sourceFile2.open(QIODevice::ReadWrite | QIODevice::Text))
  {
      QTextStream sourceWriteStream(&sourceFile2);
      sourceWriteStream.seek(0);

      currentIndex2 = 0;
      while (!sourceStream2.atEnd())
      {
          QString line = sourceStream2.readLine();

          if (currentIndex2 != lineIndex2)
          {
              sourceWriteStream << line << endl;
          }

          currentIndex2++;
      }

      sourceFile2.resize(sourceWriteStream.pos());

      sourceFile2.close();
  }
}

