#ifndef SEARCHITEMS_H
#define SEARCHITEMS_H

#include <QDialog>

namespace Ui {
  class searchitems;
}

class searchitems : public QDialog
{
  Q_OBJECT

public:
  explicit searchitems(QWidget *parent = 0);
  ~searchitems();

private slots:
  void on_searcbutton_clicked();

private:
  Ui::searchitems *ui;
};

#endif // SEARCHITEMS_H
