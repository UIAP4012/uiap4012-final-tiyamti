#include "customerfavoritpage.h"
#include "ui_customerfavoritpage.h"

customerfavoritpage::customerfavoritpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customerfavoritpage)
{
  ui->setupUi(this);
}

customerfavoritpage::~customerfavoritpage()
{
  delete ui;
}
