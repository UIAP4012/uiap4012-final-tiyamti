#include "sellerstartpage.h"
#include "ui_sellerstartpage.h"

sellerstartpage::sellerstartpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::sellerstartpage)
{
  ui->setupUi(this);
}

sellerstartpage::~sellerstartpage()
{
  delete ui;
}
