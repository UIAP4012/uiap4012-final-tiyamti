#include "startpage.h"
#include "ui_startpage.h"

startpage::startpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::startpage)
{
  ui->setupUi(this);
}

startpage::~startpage()
{
  delete ui;
}
