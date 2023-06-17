#ifndef FORGETPAGE_H
#define FORGETPAGE_H

#include <QDialog>

namespace Ui {
  class forgetpage;
}

class forgetpage : public QDialog
{
  Q_OBJECT

public:
  explicit forgetpage(QWidget *parent = 0);
  ~forgetpage();

private:
  Ui::forgetpage *ui;
};

#endif // FORGETPAGE_H
