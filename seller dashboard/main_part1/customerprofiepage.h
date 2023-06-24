#ifndef CUSTOMERPROFIEPAGE_H
#define CUSTOMERPROFIEPAGE_H

#include <QDialog>

namespace Ui {
  class customerprofiepage;
}

class customerprofiepage : public QDialog
{
  Q_OBJECT

public:
  explicit customerprofiepage(QWidget *parent = 0);
  ~customerprofiepage();

private:
  Ui::customerprofiepage *ui;
};

#endif // CUSTOMERPROFIEPAGE_H
