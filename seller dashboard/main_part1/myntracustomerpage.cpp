#include "myntracustomerpage.h"
#include "ui_myntracustomerpage.h"

myntracustomerpage::myntracustomerpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::myntracustomerpage)
{
  ui->setupUi(this);
}

myntracustomerpage::~myntracustomerpage()
{
  delete ui;
}
