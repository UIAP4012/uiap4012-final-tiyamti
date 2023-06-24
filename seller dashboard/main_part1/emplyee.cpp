#include "emplyee.h"
#include "ui_emplyee.h"
#include <QFile>
#include <QTextStream>
#include "sellermainpage.h"
emplyee::emplyee(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::emplyee)
{
  ui->setupUi(this);

  this->ui->pushButton->setEnabled(false);
  connect(this->ui->namee,&QLineEdit::textChanged,this,&emplyee::enabledbutton);
  connect(this->ui->usernamee,&QLineEdit::textChanged,this,&emplyee::enabledbutton);
  connect(this->ui->passworde2,&QLineEdit::textChanged,this,&emplyee::enabledbutton);
  connect(this->ui->cpassworde2,&QLineEdit::textChanged,this,&emplyee::enabledbutton);
}

emplyee::~emplyee()
{
  delete ui;
}

void emplyee::on_pushButton_clicked()
{
  QString name,username,password,cpassword;
   name=ui->namee->text();
   username=ui->usernamee->text();
   password=ui->passworde2->text();
   cpassword=ui->cpassworde2->text();

   QFile file("F:/pishrafteh/final project/main/main_part1/csv files/selleracount.csv");


   if (file.open(QIODevice::ReadWrite| QIODevice::Append)) {
   QTextStream out (&file);
   out << "Name,username,password\n";
   out << name << "," << username << "," << password << "\n";
   file.close ();}
     this->hide();
   sellermainpage *ptrsellermain= new sellermainpage(this);
    ptrsellermain->show();
}

void emplyee::enabledbutton()
{

  if(this->ui->namee->text().length()>4&&this->ui->usernamee->text().length()>4&&this->ui->passworde2->text().length()>4 &&this->ui->cpassworde2->text().length()>4&&this->ui->passworde2->text().length()==this->ui->cpassworde2->text().length() ){
      this->ui->pushButton->setEnabled(true);
    }
  else{
      this->ui->pushButton->setEnabled(false);
    }
}

void emplyee::on_pushButton_2_clicked()
{
    this->hide();
   sellermainpage *ptrsellermain= new sellermainpage(this);
    ptrsellermain->show();
}
