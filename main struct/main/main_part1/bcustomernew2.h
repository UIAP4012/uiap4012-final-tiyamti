#ifndef BCUSTOMERNEW2_H
#define BCUSTOMERNEW2_H

#include <QDialog>

namespace Ui {
  class bcustomernew2;
}

class bcustomernew2 : public QDialog
{
  Q_OBJECT

public:
  explicit bcustomernew2(QWidget *parent = 0);
  ~bcustomernew2();

private:
  Ui::bcustomernew2 *ui;
};

#endif // BCUSTOMERNEW2_H
