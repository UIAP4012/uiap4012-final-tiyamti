#include "customermainpage.h"
#include "ui_customermainpage.h"

customermainpage::customermainpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customermainpage)
{
  ui->setupUi(this);
  ptrproduct =new product(this);
  ptrcustomerfav=new customerfavoritpage(this);
  ptrcustomercart=new customercartpage(this);
  ptrcustomerbill=new customerbillspage(this);
}

customermainpage::~customermainpage()
{
  delete ptrproduct;
  delete ptrcustomerfav;
  delete ptrcustomercart;
  delete ptrcustomerbill;
  delete ui;
}

void customermainpage::on_product_clicked()
{
    ptrproduct->show();
}

void customermainpage::on_cart_clicked()
{
    ptrcustomercart->show();
}

void customermainpage::on_fav_clicked()
{
    ptrcustomerfav->show();
}

void customermainpage::on_bill_clicked()
{
    ptrcustomerbill->show();
}
