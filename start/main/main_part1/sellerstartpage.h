#ifndef SELLERSTARTPAGE_H
#define SELLERSTARTPAGE_H

#include <QDialog>

namespace Ui {
  class sellerstartpage;
}

class sellerstartpage : public QDialog
{
  Q_OBJECT

public:
  explicit sellerstartpage(QWidget *parent = 0);
  ~sellerstartpage();

private:
  Ui::sellerstartpage *ui;
};

#endif // SELLERSTARTPAGE_H
