#include "bcustomernew3.h"
#include "ui_bcustomernew3.h"

bcustomernew3::bcustomernew3(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::bcustomernew3)
{
  ui->setupUi(this);
}

bcustomernew3::~bcustomernew3()
{
  delete ui;
}
