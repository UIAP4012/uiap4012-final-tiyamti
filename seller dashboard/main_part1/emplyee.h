#ifndef EMPLYEE_H
#define EMPLYEE_H

#include <QDialog>
namespace Ui {
  class emplyee;
}

class emplyee : public QDialog
{
  Q_OBJECT

public:
  explicit emplyee(QWidget *parent = 0);
  ~emplyee();

private slots:
  void on_pushButton_clicked();

  void  enabledbutton();
  void on_pushButton_2_clicked();

private:
  Ui::emplyee *ui;

};

#endif // EMPLYEE_H
