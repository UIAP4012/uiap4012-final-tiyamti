#ifndef CUSTOMERMAINPAGE_H
#define CUSTOMERMAINPAGE_H

#include <QDialog>
#include "product.h"
#include "customerfavoritpage.h"
#include "customercartpage.h"
#include "customerbillspage.h"
namespace Ui {
  class customermainpage;
}

class customermainpage : public QDialog
{
  Q_OBJECT

public:
  explicit customermainpage(QWidget *parent = 0);
  ~customermainpage();

private slots:
  void on_product_clicked();

  void on_cart_clicked();

  void on_fav_clicked();

  void on_bill_clicked();

private:
  Ui::customermainpage *ui;
  product *ptrproduct;
  customerfavoritpage *ptrcustomerfav;
  customercartpage *ptrcustomercart;
  customerbillspage *ptrcustomerbill;
};

#endif // CUSTOMERMAINPAGE_H
