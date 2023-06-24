#include "customerprofiepage.h"
#include "ui_customerprofiepage.h"

customerprofiepage::customerprofiepage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customerprofiepage)
{
  ui->setupUi(this);
}

customerprofiepage::~customerprofiepage()
{
  delete ui;
}
