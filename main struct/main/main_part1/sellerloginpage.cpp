#include "sellerloginpage.h"
#include "ui_sellerloginpage.h"

sellerloginpage::sellerloginpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::sellerloginpage)
{
  ui->setupUi(this);
}

sellerloginpage::~sellerloginpage()
{
  delete ui;
}
