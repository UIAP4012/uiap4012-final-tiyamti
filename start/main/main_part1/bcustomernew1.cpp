#include "bcustomernew1.h"
#include "ui_bcustomernew1.h"

bcustomernew1::bcustomernew1(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::bcustomernew1)
{
  ui->setupUi(this);
}

bcustomernew1::~bcustomernew1()
{
  delete ui;
}
