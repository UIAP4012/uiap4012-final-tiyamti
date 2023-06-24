#include "customersingup.h"
#include "ui_customersingup.h"
#include "customerstartpage.h"
#include <QFile>
#include <QTextStream>
customersingup::customersingup(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customersingup)
{
  ui->setupUi(this);
  ptrcustomermain=new customermainpage(this);
  this->ui->pushButton->setEnabled(false);
  connect(this->ui->namec,&QLineEdit::textChanged,this,&customersingup::enabledbutton);
  connect(this->ui->usernamec,&QLineEdit::textChanged,this,&customersingup::enabledbutton);
  connect(this->ui->passwordc,&QLineEdit::textChanged,this,&customersingup::enabledbutton);
  connect(this->ui->cpasswordc,&QLineEdit::textChanged,this,&customersingup::enabledbutton);
}

customersingup::~customersingup()
{
  delete ptrcustomermain;
  delete ui;
}

void customersingup::on_pushButton_clicked()
{ QString name,username,password,cpassword;
  name=ui->namec->text();
  username=ui->usernamec->text();
  password=ui->passwordc->text();
  cpassword=ui->cpasswordc->text();

  QFile file("F:/pishrafteh/final project/main/main_part1/csv files/customeracount.csv");


  if (file.open(QIODevice::ReadWrite| QIODevice::Append)) {
  QTextStream out (&file);
  out << "Name,username,password\n";
  out << name << "," << username << "," << password << "\n";
  file.close ();}
    this->hide();
  ptrcustomermain->show();
}

void customersingup::on_pushButton_2_clicked()
{

  this->hide();
  customerstartpage *ptrcustomerstartpage= new customerstartpage(this);
  ptrcustomerstartpage->show();
}

void customersingup::enabledbutton()
{

  if(this->ui->namec->text().length()>4&&this->ui->usernamec->text().length()>4&&this->ui->passwordc->text().length()>4 &&this->ui->cpasswordc->text().length()>4&&this->ui->passwordc->text().length()==this->ui->cpasswordc->text().length() ){
      this->ui->pushButton->setEnabled(true);
    }
  else{
      this->ui->pushButton->setEnabled(false);
    }

}
