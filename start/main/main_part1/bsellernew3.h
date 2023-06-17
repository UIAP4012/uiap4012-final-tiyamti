#ifndef BSELLERNEW3_H
#define BSELLERNEW3_H

#include <QDialog>

namespace Ui {
  class bsellernew3;
}

class bsellernew3 : public QDialog
{
  Q_OBJECT

public:
  explicit bsellernew3(QWidget *parent = 0);
  ~bsellernew3();

private:
  Ui::bsellernew3 *ui;
};

#endif // BSELLERNEW3_H
