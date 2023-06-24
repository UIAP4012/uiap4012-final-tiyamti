#ifndef CHANGEPASSWORDCUSTOMER_H
#define CHANGEPASSWORDCUSTOMER_H

#include <QDialog>

namespace Ui {
  class changepasswordcustomer;
}

class changepasswordcustomer : public QDialog
{
  Q_OBJECT

public:
  explicit changepasswordcustomer(QWidget *parent = 0);
  ~changepasswordcustomer();

private:
  Ui::changepasswordcustomer *ui;
};

#endif // CHANGEPASSWORDCUSTOMER_H
