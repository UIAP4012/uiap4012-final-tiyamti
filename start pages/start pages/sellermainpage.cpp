#include "sellermainpage.h"
#include "ui_sellermainpage.h"

sellermainpage::sellermainpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::sellermainpage)
{
  ui->setupUi(this);
}

sellermainpage::~sellermainpage()
{
  delete ui;
}
