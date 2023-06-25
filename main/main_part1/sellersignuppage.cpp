#include "sellersignuppage.h"
#include "ui_sellersignuppage.h"
#include "sellerstartpage.h"
#include <QFile>
#include <QTextStream>
sellersignuppage::sellersignuppage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::sellersignuppage)
{
  ui->setupUi(this);
  ptrsellermain=new sellermainpage(this);
  this->ui->pushButton->setEnabled(false);
  connect(this->ui->names,&QLineEdit::textChanged,this,&sellersignuppage::enabledbutton);
  connect(this->ui->usernames,&QLineEdit::textChanged,this,&sellersignuppage::enabledbutton);
  connect(this->ui->passwords,&QLineEdit::textChanged,this,&sellersignuppage::enabledbutton);
  connect(this->ui->cpasswords,&QLineEdit::textChanged,this,&sellersignuppage::enabledbutton);

}

sellersignuppage::~sellersignuppage()
{
  delete ptrsellermain;
  delete ui;
}

void sellersignuppage::on_pushButton_2_clicked()
{
  this->hide();
  sellerstartpage *ptrsellerstartpage= new sellerstartpage(this);
  ptrsellerstartpage->show();
}

void sellersignuppage::enabledbutton()
{

  if(this->ui->names->text().length()>4&&this->ui->usernames->text().length()>4 &&this->ui->passwords->text().length()>4 &&this->ui->cpasswords->text().length()>4&& this->ui->passwords->text().length()==this->ui->cpasswords->text().length()){
      this->ui->pushButton->setEnabled(true);
    }
  else{
      this->ui->pushButton->setEnabled(false);
    }
}


void sellersignuppage::on_pushButton_clicked()
{
    QString name,username,password,cpassword;
    name=ui->names->text();
    username=ui->usernames->text();
    password=ui->passwords->text();
    cpassword=ui->cpasswords->text();

    QFile file("F:/pishrafteh/final project/main/main_part1/csv files/selleracount.csv");


    if (file.open(QIODevice::ReadWrite| QIODevice::Append)) {
    QTextStream out (&file);
    out << "Name,username,password\n";
    out << name << "," << username << "," << password << "\n";
    file.close ();}
    this->hide();
    ptrsellermain->show();
}
