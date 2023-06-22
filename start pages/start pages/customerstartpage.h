#ifndef CUSTOMERSTARTPAGE_H
#define CUSTOMERSTARTPAGE_H

#include <QDialog>
#include "customersingup.h"
#include "customerlogin.h"

namespace Ui {
  class customerstartpage;
}

class customerstartpage : public QDialog
{
  Q_OBJECT

public:
  explicit customerstartpage(QWidget *parent = 0);
  ~customerstartpage();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_3_clicked();

private:
  Ui::customerstartpage *ui;
  customersingup *ptrcustomersignup;
  customerlogin *ptrcustomerlogin;
  customerstartpage *ptrcustomerstartpage;
};

#endif // CUSTOMERSTARTPAGE_H
