#include "cartpage.h"
#include "ui_cartpage.h"

cartpage::cartpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::cartpage)
{
  ui->setupUi(this);
}

cartpage::~cartpage()
{
  delete ui;
}
