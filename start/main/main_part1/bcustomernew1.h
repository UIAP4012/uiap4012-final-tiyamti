#ifndef BCUSTOMERNEW1_H
#define BCUSTOMERNEW1_H

#include <QDialog>

namespace Ui {
  class bcustomernew1;
}

class bcustomernew1 : public QDialog
{
  Q_OBJECT

public:
  explicit bcustomernew1(QWidget *parent = 0);
  ~bcustomernew1();

private:
  Ui::bcustomernew1 *ui;
};

#endif // BCUSTOMERNEW1_H
