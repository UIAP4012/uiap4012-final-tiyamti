#ifndef SELLERSIGNUPPAGE_H
#define SELLERSIGNUPPAGE_H

#include <QDialog>
#include "sellermainpage.h"
class QLineEdit;
class QPushButton;
namespace Ui {
  class sellersignuppage;
}

class sellersignuppage : public QDialog
{
  Q_OBJECT

public:
  explicit sellersignuppage(QWidget *parent = 0);
  ~sellersignuppage();

private slots:
  void on_pushButton_2_clicked();
  void  enabledbutton();

  void on_pushButton_clicked();

private:
  Ui::sellersignuppage *ui;
  sellermainpage *ptrsellermainpage;

};

#endif // SELLERSIGNUPPAGE_H
