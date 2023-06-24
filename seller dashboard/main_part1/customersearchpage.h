#ifndef CUSTOMERSEARCHPAGE_H
#define CUSTOMERSEARCHPAGE_H

#include <QDialog>

namespace Ui {
  class customersearchpage;
}

class customersearchpage : public QDialog
{
  Q_OBJECT

public:
  explicit customersearchpage(QWidget *parent = 0);
  ~customersearchpage();

private:
  Ui::customersearchpage *ui;
};

#endif // CUSTOMERSEARCHPAGE_H
