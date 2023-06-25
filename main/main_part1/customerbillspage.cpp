#include "customerbillspage.h"
#include "ui_customerbillspage.h"

customerbillspage::customerbillspage(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::customerbillspage)
{
  ui->setupUi(this);
}

customerbillspage::~customerbillspage()
{
  delete ui;
}
