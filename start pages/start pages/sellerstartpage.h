
#ifndef SELLERSTARTPAGE_H
#define SELLERSTARTPAGE_H

#include <QDialog>

#include "sellersignuppage.h"
#include "sellerloginpage.h"

namespace Ui {
  class sellerstartpage;
}

class sellerstartpage : public QDialog
{
  Q_OBJECT

public:
  explicit sellerstartpage(QWidget *parent = 0);
  ~sellerstartpage();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_3_clicked();

private:
  Ui::sellerstartpage *ui;
  sellersignuppage *ptrsellersignup;
  sellerloginpage *ptrsellerlogin;
  sellerstartpage *ptrsellerstartpage;
};

#endif // SELLERSTARTPAGE_H

