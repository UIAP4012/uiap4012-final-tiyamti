#ifndef FORGETPAGECUSTOMER_H
#define FORGETPAGECUSTOMER_H

#include <QDialog>

namespace Ui {
  class forgetpagecustomer;
}

class forgetpagecustomer : public QDialog
{
  Q_OBJECT

public:
  explicit forgetpagecustomer(QWidget *parent = 0);
  ~forgetpagecustomer();

private slots:
  void on_pushButton_3_clicked();

private:
  Ui::forgetpagecustomer *ui;
};

#endif // FORGETPAGECUSTOMER_H
