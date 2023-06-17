#ifndef BSELLERNEW2_H
#define BSELLERNEW2_H

#include <QDialog>

namespace Ui {
  class bsellernew2;
}

class bsellernew2 : public QDialog
{
  Q_OBJECT

public:
  explicit bsellernew2(QWidget *parent = 0);
  ~bsellernew2();

private:
  Ui::bsellernew2 *ui;
};

#endif // BSELLERNEW2_H
