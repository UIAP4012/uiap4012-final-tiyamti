#ifndef PRODUCT_H
#define PRODUCT_H

#include <QDialog>

namespace Ui {
  class product;
}

class product : public QDialog
{
  Q_OBJECT

public:
  explicit product(QWidget *parent = 0);
  ~product();

private slots:

  void on_show_clicked();

  void on_search_clicked();

  void on_order_clicked();

private:
  Ui::product *ui;
};

#endif // PRODUCT_H
