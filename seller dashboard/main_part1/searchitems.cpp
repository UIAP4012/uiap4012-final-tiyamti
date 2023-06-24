#include "searchitems.h"
#include "ui_searchitems.h"
#include <QTableView>
#include <QStandardItemModel>
#include <QFile>
#include <QTextStream>
#include <QStringList>
searchitems::searchitems(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::searchitems)
{
  ui->setupUi(this);
}

searchitems::~searchitems()
{
  delete ui;
}

void searchitems::on_searcbutton_clicked()
{
    QString searchItem = ui->searchline->text();
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
           ui->tsearch->setModel(model);

       }
}
