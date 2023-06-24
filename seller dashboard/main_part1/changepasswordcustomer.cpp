#include "changepasswordcustomer.h"
#include "ui_changepasswordcustomer.h"

changepasswordcustomer::changepasswordcustomer(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::changepasswordcustomer)
{
  ui->setupUi(this);
}

changepasswordcustomer::~changepasswordcustomer()
{
  delete ui;
}
