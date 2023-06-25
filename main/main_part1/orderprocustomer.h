#ifndef ORDERPROCUSTOMER_H
#define ORDERPROCUSTOMER_H

#include <QDialog>

namespace Ui {
  class orderprocustomer;
}

class orderprocustomer : public QDialog
{
  Q_OBJECT

public:
  explicit orderprocustomer(QWidget *parent = 0);
  ~orderprocustomer();

private slots:
  void on_sorders_clicked();

private:
  Ui::orderprocustomer *ui;
};

#endif // ORDERPROCUSTOMER_H
