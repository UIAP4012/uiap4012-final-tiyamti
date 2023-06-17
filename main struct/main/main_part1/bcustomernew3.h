#ifndef BCUSTOMERNEW3_H
#define BCUSTOMERNEW3_H

#include <QDialog>

namespace Ui {
  class bcustomernew3;
}

class bcustomernew3 : public QDialog
{
  Q_OBJECT

public:
  explicit bcustomernew3(QWidget *parent = 0);
  ~bcustomernew3();

private:
  Ui::bcustomernew3 *ui;
};

#endif // BCUSTOMERNEW3_H
