#include "customerlogin.h"
#include "ui_customerlogin.h"

customerlogin::customerlogin(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customerlogin)
{
  ui->setupUi(this);
}

customerlogin::~customerlogin()
{
  delete ui;
}
