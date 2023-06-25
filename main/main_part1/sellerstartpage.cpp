#include "sellerstartpage.h"
#include "ui_sellerstartpage.h"
#include "startpage.h"
sellerstartpage::sellerstartpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::sellerstartpage)
{
  ui->setupUi(this);
  ptrsellersignup=new sellersignuppage(this);
  ptrsellerlogin=new sellerloginpage(this);

}

sellerstartpage::~sellerstartpage()
{
  delete ptrsellersignup;
  delete ptrsellerlogin;
  delete ui;

}

void sellerstartpage::on_pushButton_clicked()
{
   this->hide();
  ptrsellersignup->show();
}

void sellerstartpage::on_pushButton_2_clicked()
{
  this->hide();
 ptrsellerlogin->show();
}


void sellerstartpage::on_pushButton_3_clicked()
{
  this->hide();
  startpage *ptrstartpage= new startpage(this);
  ptrstartpage->show();

}
