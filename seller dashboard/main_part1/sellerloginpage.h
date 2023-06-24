#ifndef SELLERLOGINPAGE_H
#define SELLERLOGINPAGE_H

#include <QDialog>
#include "forgetpage.h"
#include "sellerloginpage.h"
#include "sellermainpage.h"
class QLineEdit;
class QPushButton;
namespace Ui {
  class sellerloginpage;
}

class sellerloginpage : public QDialog
{
  Q_OBJECT

public:
  explicit sellerloginpage(QWidget *parent = 0);
  ~sellerloginpage();

private slots:


  void on_pushButton_3_clicked();
  void  enabledbutton();
  void on_pushButton_clicked();

private:
  Ui::sellerloginpage *ui;
  forgetpage *ptrforgetpage;
  sellerloginpage *ptrsellerloginpage;
  sellermainpage *ptrsellermainpage;
private:
  QLineEdit *userapasswlines;
  QPushButton *logins;
};

#endif // SELLERLOGINPAGE_H
