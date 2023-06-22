#ifndef SELLERMAINPAGE_H
#define SELLERMAINPAGE_H

#include <QDialog>

namespace Ui {
  class sellermainpage;
}

class sellermainpage : public QDialog
{
  Q_OBJECT

public:
  explicit sellermainpage(QWidget *parent = 0);
  ~sellermainpage();

private:
  Ui::sellermainpage *ui;
};

#endif // SELLERMAINPAGE_H
