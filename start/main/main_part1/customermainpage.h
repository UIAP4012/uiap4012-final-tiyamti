#ifndef CUSTOMERMAINPAGE_H
#define CUSTOMERMAINPAGE_H

#include <QDialog>

namespace Ui {
  class customermainpage;
}

class customermainpage : public QDialog
{
  Q_OBJECT

public:
  explicit customermainpage(QWidget *parent = 0);
  ~customermainpage();

private:
  Ui::customermainpage *ui;
};

#endif // CUSTOMERMAINPAGE_H
