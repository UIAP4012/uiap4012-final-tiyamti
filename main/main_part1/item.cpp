#include "item.h"
#include "ui_item.h"
#include "sellermainpage.h";
item::item(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::item)
{
  ui->setupUi(this);
  ptradditem = new additem(this);
  ptrremoveitem = new removeitem(this);
  ptrupdateitems=new updateitems(this);
  ptrreportitems=new report(this);
  ptrsearchitem=new searchitems(this);
}

item::~item()
{
  delete ptradditem;
  delete ptrremoveitem;
  delete ptrupdateitems;
  delete ptrreportitems;
  delete ptrsearchitem;
  delete ui;
}



void item::on_additem_clicked()
{
    ptradditem->show();
}

void item::on_remitem_clicked()
{
    ptrremoveitem->show();
}


void item::on_back_clicked()
{
    this->hide();
  sellermainpage *ptrsellermain= new sellermainpage(this);
   ptrsellermain->show();
}

void item::on_report_clicked()
{
    ptrreportitems->show();
}

void item::on_upitem_clicked()
{
    ptrupdateitems->show();
}


void item::on_seitem_clicked()
{
    ptrsearchitem->show();
}
