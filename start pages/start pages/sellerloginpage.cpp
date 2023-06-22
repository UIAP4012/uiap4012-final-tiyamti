#include "sellerloginpage.h"
#include "ui_sellerloginpage.h"
#include "sellerstartpage.h"
#include <QFile>
#include <QTextStream>
sellerloginpage::sellerloginpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::sellerloginpage)
{
  ui->setupUi(this);
  ptrforgetpage= new forgetpage(this);
  ptrsellermainpage = new sellermainpage(this);
  this->ui->pushButton->setEnabled(false);
  connect(this->ui->username,&QLineEdit::textChanged,this,&sellerloginpage::enabledbutton);
  connect(this->ui->password,&QLineEdit::textChanged,this,&sellerloginpage::enabledbutton);
}

sellerloginpage::~sellerloginpage()
{
  delete ptrforgetpage;
  delete ptrsellermainpage;
  delete ui;
}

void sellerloginpage::on_pushButton_2_clicked()
{
    this->hide();
  ptrforgetpage->show();
}

void sellerloginpage::on_pushButton_3_clicked()
{
  this->hide();
  sellerstartpage *ptrsellerstartpage= new sellerstartpage(this);
  ptrsellerstartpage->show();
}

void sellerloginpage::enabledbutton()
{
  if(this->ui->username->text().length()>4 &&this->ui->password->text().length()>4){
      this->ui->pushButton->setEnabled(true);
    }
  else{
      this->ui->pushButton->setEnabled(false);
    }
}

void sellerloginpage::on_pushButton_clicked()
{
  QString username,password;
  username=ui->username->text();
  password=ui->password->text();
  bool valid = false; // flag to indicate if username and password are valid
   QFile file("F:/pishrafteh/final project/main/main_part1/csv files/selleracount.csv");
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
      ptrsellermainpage->show();
    }
  file.close();
}
