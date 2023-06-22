#ifndef CUSTOMERLOGIN_H
#define CUSTOMERLOGIN_H

#include <QDialog>
#include "forgetpagecustomer.h"
#include "customermainpage.h"
class QLineEdit;
class QPushButton;
namespace Ui {
  class customerlogin;
}

class customerlogin : public QDialog
{
  Q_OBJECT

public:
  explicit customerlogin(QWidget *parent = 0);
  ~customerlogin();

private slots:
  void on_pushButton_2_clicked();

  void on_pushButton_3_clicked();
   void enabledbutton();
   void on_pushButton_clicked();

private:
  Ui::customerlogin *ui;
  forgetpagecustomer *ptrforgetpagec;
  customermainpage *ptrcustomermainpage;
private:
  QLineEdit *userapasswlinec;
  QPushButton *loginc;
};

#endif // CUSTOMERLOGIN_H
