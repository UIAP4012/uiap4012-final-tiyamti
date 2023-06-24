#include "customerstartpage.h"
#include "ui_customerstartpage.h"
#include "startpage.h"
customerstartpage::customerstartpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customerstartpage)
{
  ui->setupUi(this);
  ptrcustomersignup = new customersingup(this);
  ptrcustomerlogin = new customerlogin(this);
}

customerstartpage::~customerstartpage()
{
  delete ptrcustomersignup;
  delete ptrcustomerlogin;
  delete ui;

}

void customerstartpage::on_pushButton_clicked()
{
    this->hide();
  ptrcustomersignup->show();
}

void customerstartpage::on_pushButton_2_clicked()
{
    this->hide();
  ptrcustomerlogin->show();
}

void customerstartpage::on_pushButton_3_clicked()
{
  this->hide();
  startpage *ptrstartpage= new startpage(this);
  ptrstartpage->show();
}
