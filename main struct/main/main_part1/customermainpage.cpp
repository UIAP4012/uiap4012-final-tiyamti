#include "customermainpage.h"
#include "ui_customermainpage.h"

customermainpage::customermainpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customermainpage)
{
  ui->setupUi(this);
}

customermainpage::~customermainpage()
{
  delete ui;
}
