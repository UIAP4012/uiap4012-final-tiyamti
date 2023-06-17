#include "startpage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  startpage window;
  window.resize(420, 500);
  window.show();
  return a.exec();
}
