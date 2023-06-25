#ifndef ITEM_H
#define ITEM_H

#include <QDialog>
#include "additem.h"
#include "removeitem.h"
#include "updateitems.h"
#include "report.h"
#include "searchitems.h"
namespace Ui {
  class item;
}

class item : public QDialog
{
  Q_OBJECT

public:
  explicit item(QWidget *parent = 0);
  ~item();

private slots:


  void on_additem_clicked();

  void on_remitem_clicked();

  void on_back_clicked();

  void on_report_clicked();

  void on_upitem_clicked();

  void on_seitem_clicked();

private:
  Ui::item *ui;
  additem *ptradditem;
  removeitem *ptrremoveitem;
  updateitems *ptrupdateitems;
  report *ptrreportitems;
  searchitems *ptrsearchitem;
};

#endif // ITEM_H
