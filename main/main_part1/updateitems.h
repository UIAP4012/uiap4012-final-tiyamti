#ifndef UPDATEITEMS_H
#define UPDATEITEMS_H

#include <QDialog>

namespace Ui {
  class updateitems;
}

class updateitems : public QDialog
{
  Q_OBJECT

public:
  explicit updateitems(QWidget *parent = 0);
  ~updateitems();

private slots:
  void on_pushButton_clicked();

  void on_find_clicked();

  void on_reset_clicked();

  void on_edite_clicked();

private:
  Ui::updateitems *ui;
};

#endif // UPDATEITEMS_H
