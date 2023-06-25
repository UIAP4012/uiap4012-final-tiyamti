#ifndef CUSTOMERCARTPAGE_H
#define CUSTOMERCARTPAGE_H

#include <QDialog>

namespace Ui {
  class customercartpage;
}

class customercartpage : public QDialog
{
  Q_OBJECT

public:
  explicit customercartpage(QWidget *parent = 0);
  ~customercartpage();

private:
  Ui::customercartpage *ui;
};

#endif // CUSTOMERCARTPAGE_H
