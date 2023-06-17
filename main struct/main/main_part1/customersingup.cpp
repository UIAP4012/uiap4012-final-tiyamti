#include "customersingup.h"
#include "ui_customersingup.h"

customersingup::customersingup(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customersingup)
{
  ui->setupUi(this);
}

customersingup::~customersingup()
{
  delete ui;
}
