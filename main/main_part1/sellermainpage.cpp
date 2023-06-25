#include "sellermainpage.h"
#include "ui_sellermainpage.h"

sellermainpage::sellermainpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::sellermainpage)
{
  ui->setupUi(this);
  ptremployee=new emplyee(this);
  ptritem = new item(this);
  ptrmainreport=new mainreportpage(this);
  ptrorderpro=new orderprocustomer(this);
}

sellermainpage::~sellermainpage()
{
  delete ptrmainreport;
  delete ptrorderpro;
  delete ptremployee;
  delete ptritem;
  delete ui;
}

void sellermainpage::on_pushButton_clicked()
{
   this->hide();
  ptremployee->show();
}

void sellermainpage::on_item_clicked()
{
  this->hide();
  ptritem->show();
}

void sellermainpage::on_rep_clicked()
{

    ptrmainreport->show();
}

void sellermainpage::on_ord_clicked()
{
    this->hide();
  ptrorderpro->show();
}
