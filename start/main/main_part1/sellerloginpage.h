#ifndef SELLERLOGINPAGE_H
#define SELLERLOGINPAGE_H

#include <QDialog>

namespace Ui {
  class sellerloginpage;
}

class sellerloginpage : public QDialog
{
  Q_OBJECT

public:
  explicit sellerloginpage(QWidget *parent = 0);
  ~sellerloginpage();

private:
  Ui::sellerloginpage *ui;
};

#endif // SELLERLOGINPAGE_H
