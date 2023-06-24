#ifndef REPORT_H
#define REPORT_H

#include <QDialog>

namespace Ui {
  class report;
}

class report : public QDialog
{
  Q_OBJECT

public:
  explicit report(QWidget *parent = 0);
  ~report();

private slots:
  void on_showitems_clicked();

private:
  Ui::report *ui;
};

#endif // REPORT_H
