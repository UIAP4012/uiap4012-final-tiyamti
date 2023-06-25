#include "report.h"
#include "ui_report.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QTableView>
report::report(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::report)
{
  ui->setupUi(this);
}

report::~report()
{
  delete ui;
}

void report::on_showitems_clicked()
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

