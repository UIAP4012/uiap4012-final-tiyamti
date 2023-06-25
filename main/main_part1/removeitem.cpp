#include "removeitem.h"
#include "ui_removeitem.h"
#include <QFile>
#include <QTextStream>
#include <QTableView>
#include <QAbstractTableModel>
removeitem::removeitem(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::removeitem)
{
  ui->setupUi(this);

}

removeitem::~removeitem()
{
  delete ui;
}

void removeitem::on_btnFind_clicked()
{

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

}


