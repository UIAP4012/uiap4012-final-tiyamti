#ifndef STARTPAGE_H
#define STARTPAGE_H

#include <QDialog>
#include "sellerstartpage.h"
#include "customerstartpage.h"

namespace Ui {
  class startpage;
}

class startpage : public QDialog
{
  Q_OBJECT

public:
  explicit startpage(QWidget *parent = 0);
  ~startpage();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

private:
  Ui::startpage *ui;
  sellerstartpage *ptrsellerstartpage;
  customerstartpage *ptrcustomerstartpage;


};

#endif // STARTPAGE_H
