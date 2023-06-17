#include "sellersignuppage.h"
#include "ui_sellersignuppage.h"

sellersignuppage::sellersignuppage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::sellersignuppage)
{
  ui->setupUi(this);
}

sellersignuppage::~sellersignuppage()
{
  delete ui;
}
