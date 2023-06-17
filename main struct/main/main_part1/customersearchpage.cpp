#include "customersearchpage.h"
#include "ui_customersearchpage.h"

customersearchpage::customersearchpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customersearchpage)
{
  ui->setupUi(this);
}

customersearchpage::~customersearchpage()
{
  delete ui;
}
