#ifndef SELLERMAINPAGE_H
#define SELLERMAINPAGE_H
#include "sellermainpage.h"
#include <QDialog>
#include "emplyee.h"
#include "item.h"
#include "mainreportpage.h"
#include "orderprocustomer.h"
namespace Ui {
  class sellermainpage;
}

class sellermainpage : public QDialog
{
  Q_OBJECT

public:
  explicit sellermainpage(QWidget *parent = 0);
  ~sellermainpage();

private slots:
  void on_pushButton_clicked();

  void on_item_clicked();

  void on_rep_clicked();

  void on_ord_clicked();

private:
  Ui::sellermainpage *ui;
  emplyee *ptremployee;
  item *ptritem;
  sellermainpage *ptrsellermainpage;
  mainreportpage *ptrmainreport;
  orderprocustomer *ptrorderpro;
};

#endif // SELLERMAINPAGE_H


