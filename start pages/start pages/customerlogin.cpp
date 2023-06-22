#include "customerlogin.h"
#include "ui_customerlogin.h"
#include "customerstartpage.h"
#include <QLineEdit>
#include <QPushButton>
#include <QFile>
#include <QTextStream>
customerlogin::customerlogin(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customerlogin)
{
  ui->setupUi(this);
  ptrforgetpagec = new forgetpagecustomer(this);
  ptrcustomermainpage=new customermainpage(this);
  this->ui->pushButton->setEnabled(false);
  connect(this->ui->username,&QLineEdit::textChanged,this,&customerlogin::enabledbutton);
  connect(this->ui->password,&QLineEdit::textChanged,this,&customerlogin::enabledbutton);
}

customerlogin::~customerlogin()
{
  delete ptrforgetpagec;
  delete ui;
}

void customerlogin::on_pushButton_2_clicked()
{
    this->hide();
  ptrforgetpagec->show();


}

void customerlogin::on_pushButton_3_clicked()
{
  this->hide();
  customerstartpage *ptrcustomerstartpage= new customerstartpage(this);
  ptrcustomerstartpage->show();
}

void customerlogin::enabledbutton()
{
  if(this->ui->username->text().length()>4 &&this->ui->password->text().length()>4){
      this->ui->pushButton->setEnabled(true);
    }
  else{
      this->ui->pushButton->setEnabled(false);
    }
}



void customerlogin::on_pushButton_clicked()
{
  QString username,password;
  username=ui->username->text();
  password=ui->password->text();
  bool valid = false; // flag to indicate if username and password are valid
   QFile file("F:/pishrafteh/final project/main/main_part1/csv files/customeracount.csv");
   if (file.open (QIODevice::ReadOnly)) {
     QTextStream in (&file); // create text stream
     in.readLine (); // ignore header row
     while (!in.atEnd ()) {
       QString line = in.readLine (); // read data row
       QStringList fields = line.split (','); // split by comma
       if (fields.at (1) == username && fields.at (2) == password) {
         valid = true; // username and password match
         break; // exit loop
       }
     }
     file.close (); // close file
   }
  if (valid) {
      this->hide();
      ptrcustomermainpage->show();
    }
  file.close();
}
