#ifndef MYNTRACUSTOMERPAGE_H
#define MYNTRACUSTOMERPAGE_H

#include <QDialog>

namespace Ui {
  class myntracustomerpage;
}

class myntracustomerpage : public QDialog
{
  Q_OBJECT

public:
  explicit myntracustomerpage(QWidget *parent = 0);
  ~myntracustomerpage();

private:
  Ui::myntracustomerpage *ui;
};

#endif // MYNTRACUSTOMERPAGE_H
