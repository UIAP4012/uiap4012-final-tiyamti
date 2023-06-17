#ifndef CUSTOMERLOGIN_H
#define CUSTOMERLOGIN_H

#include <QDialog>

namespace Ui {
  class customerlogin;
}

class customerlogin : public QDialog
{
  Q_OBJECT

public:
  explicit customerlogin(QWidget *parent = 0);
  ~customerlogin();

private:
  Ui::customerlogin *ui;
};

#endif // CUSTOMERLOGIN_H
