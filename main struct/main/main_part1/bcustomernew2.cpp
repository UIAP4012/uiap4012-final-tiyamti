#include "bcustomernew2.h"
#include "ui_bcustomernew2.h"

bcustomernew2::bcustomernew2(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::bcustomernew2)
{
  ui->setupUi(this);
}

bcustomernew2::~bcustomernew2()
{
  delete ui;
}
