#include "bsellernew2.h"
#include "ui_bsellernew2.h"

bsellernew2::bsellernew2(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::bsellernew2)
{
  ui->setupUi(this);
}

bsellernew2::~bsellernew2()
{
  delete ui;
}
