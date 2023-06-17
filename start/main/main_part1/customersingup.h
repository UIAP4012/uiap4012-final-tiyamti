#ifndef CUSTOMERSINGUP_H
#define CUSTOMERSINGUP_H

#include <QDialog>

namespace Ui {
  class customersingup;
}

class customersingup : public QDialog
{
  Q_OBJECT

public:
  explicit customersingup(QWidget *parent = 0);
  ~customersingup();

private:
  Ui::customersingup *ui;
};

#endif // CUSTOMERSINGUP_H
