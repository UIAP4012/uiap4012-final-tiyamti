#include "bsellernew3.h"
#include "ui_bsellernew3.h"

bsellernew3::bsellernew3(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::bsellernew3)
{
  ui->setupUi(this);
}

bsellernew3::~bsellernew3()
{
  delete ui;
}
