#include "startpage.h"
#include "ui_startpage.h"

startpage::startpage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::startpage)
{
  ui->setupUi(this);
  ptrsellerstartpage = new sellerstartpage();
  ptrcustomerstartpage = new customerstartpage();
}

startpage::~startpage()
{
  delete ptrsellerstartpage;
  delete ptrcustomerstartpage;
  delete ui;
}

void startpage::on_pushButton_clicked()
{
  this->close();
  ptrcustomerstartpage->show();
}

void startpage::on_pushButton_2_clicked()
{
  this->close();
  ptrsellerstartpage->show();
}
