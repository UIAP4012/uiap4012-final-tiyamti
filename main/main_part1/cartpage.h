#ifndef CARTPAGE_H
#define CARTPAGE_H

#include <QDialog>

namespace Ui {
  class cartpage;
}

class cartpage : public QDialog
{
  Q_OBJECT

public:
  explicit cartpage(QWidget *parent = 0);
  ~cartpage();

private:
  Ui::cartpage *ui;
};

#endif // CARTPAGE_H
