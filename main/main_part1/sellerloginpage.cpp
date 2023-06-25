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

  ptrsellermainpage = new sellermainpage(this);
  this->ui->pushButton->setEnabled(false);
  connect(this->ui->username,&QLineEdit::textChanged,this,&sellerloginpage::enabledbutton);
  connect(this->ui->password,&QLineEdit::textChanged,this,&sellerloginpage::enabledbutton);
}

sellerloginpage::~sellerloginpage()
{

  delete ptrsellermainpage;
  delete ui;
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
  bool valid = false;
   QFile file("F:/pishrafteh/final project/main/main_part1/csv files/selleracount.csv");
   if (file.open (QIODevice::ReadOnly)) {
     QTextStream in (&file);
     in.readLine ();
     while (!in.atEnd ()) {
       QString line = in.readLine ();
       QStringList fields = line.split (',');
       if (fields.at (1) == username && fields.at (2) == password) {
         valid = true;
         break;
       }
     }
     file.close ();
   }
  if (valid) {
      this->hide();
      ptrsellermainpage->show();
    }
  file.close();
}
