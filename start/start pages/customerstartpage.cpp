#include "customerstartpage.h"
#include "ui_customerstartpage.h"

customerstartpage::customerstartpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customerstartpage)
{
  ui->setupUi(this);
}

customerstartpage::~customerstartpage()
{
  delete ui;
}
