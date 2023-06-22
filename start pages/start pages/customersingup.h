#ifndef CUSTOMERSINGUP_H
#define CUSTOMERSINGUP_H

#include <QDialog>
#include "customermainpage.h"
class QLineEdit;
class QPushButton;
namespace Ui {
  class customersingup;
}

class customersingup : public QDialog
{
  Q_OBJECT

public:
  explicit customersingup(QWidget *parent = 0);
  ~customersingup();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();
  void  enabledbutton();

private:
  Ui::customersingup *ui;
  customermainpage *ptrcustomermain;
};

#endif // CUSTOMERSINGUP_H
