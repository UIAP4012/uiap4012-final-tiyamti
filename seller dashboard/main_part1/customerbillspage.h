#ifndef CUSTOMERBILLSPAGE_H
#define CUSTOMERBILLSPAGE_H

#include <QDialog>

namespace Ui {
  class customerbillspage;
}

class customerbillspage : public QDialog
{
  Q_OBJECT

public:
  explicit customerbillspage(QWidget *parent = 0);
  ~customerbillspage();

private:
  Ui::customerbillspage *ui;
};

#endif // CUSTOMERBILLSPAGE_H
