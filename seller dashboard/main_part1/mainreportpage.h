#ifndef MAINREPORTPAGE_H
#define MAINREPORTPAGE_H

#include <QDialog>

namespace Ui {
  class mainreportpage;
}

class mainreportpage : public QDialog
{
  Q_OBJECT

public:
  explicit mainreportpage(QWidget *parent = 0);
  ~mainreportpage();

private slots:
  void on_pushButton_clicked();
  void on_pushButton_2_clicked();

  void on_pushButton_3_clicked();

  void on_reset_clicked();

private:
  Ui::mainreportpage *ui;
};

#endif // MAINREPORTPAGE_H
