#ifndef SELLERSIGNUPPAGE_H
#define SELLERSIGNUPPAGE_H

#include <QDialog>

namespace Ui {
  class sellersignuppage;
}

class sellersignuppage : public QDialog
{
  Q_OBJECT

public:
  explicit sellersignuppage(QWidget *parent = 0);
  ~sellersignuppage();

private:
  Ui::sellersignuppage *ui;
};

#endif // SELLERSIGNUPPAGE_H
