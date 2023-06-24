#include "customercartpage.h"
#include "ui_customercartpage.h"

customercartpage::customercartpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customercartpage)
{
  ui->setupUi(this);
}

customercartpage::~customercartpage()
{
  delete ui;
}
