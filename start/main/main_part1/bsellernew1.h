#ifndef BSELLERNEW1_H
#define BSELLERNEW1_H

#include <QDialog>

namespace Ui {
  class bsellernew1;
}

class bsellernew1 : public QDialog
{
  Q_OBJECT

public:
  explicit bsellernew1(QWidget *parent = 0);
  ~bsellernew1();

private:
  Ui::bsellernew1 *ui;
};

#endif // BSELLERNEW1_H
