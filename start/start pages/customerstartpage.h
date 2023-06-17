#ifndef CUSTOMERSTARTPAGE_H
#define CUSTOMERSTARTPAGE_H

#include <QDialog>

namespace Ui {
  class customerstartpage;
}

class customerstartpage : public QDialog
{
  Q_OBJECT

public:
  explicit customerstartpage(QWidget *parent = 0);
  ~customerstartpage();

private:
  Ui::customerstartpage *ui;
};

#endif // CUSTOMERSTARTPAGE_H
