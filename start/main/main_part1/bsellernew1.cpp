#include "bsellernew1.h"
#include "ui_bsellernew1.h"

bsellernew1::bsellernew1(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::bsellernew1)
{
  ui->setupUi(this);
}

bsellernew1::~bsellernew1()
{
  delete ui;
}
