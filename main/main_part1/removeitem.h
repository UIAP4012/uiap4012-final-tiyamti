#ifndef REMOVEITEM_H
#define REMOVEITEM_H

#include <QDialog>

namespace Ui {
  class removeitem;
}

class removeitem : public QDialog
{
  Q_OBJECT

public:
  explicit removeitem(QWidget *parent = 0);
  ~removeitem();

private slots:
  void on_btnFind_clicked();

  void on_pushButton_clicked();

private:
  Ui::removeitem *ui;
};

#endif // REMOVEITEM_H
