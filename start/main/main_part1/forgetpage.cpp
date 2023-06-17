#include "forgetpage.h"
#include "ui_forgetpage.h"

forgetpage::forgetpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::forgetpage)
{
  ui->setupUi(this);
}

forgetpage::~forgetpage()
{
  delete ui;
}
