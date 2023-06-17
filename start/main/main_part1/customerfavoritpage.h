#ifndef CUSTOMERFAVORITPAGE_H
#define CUSTOMERFAVORITPAGE_H

#include <QDialog>

namespace Ui {
  class customerfavoritpage;
}

class customerfavoritpage : public QDialog
{
  Q_OBJECT

public:
  explicit customerfavoritpage(QWidget *parent = 0);
  ~customerfavoritpage();

private:
  Ui::customerfavoritpage *ui;
};

#endif // CUSTOMERFAVORITPAGE_H
