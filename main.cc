#include "viewer.h"
#include <QApplication>



int main(int argc, char** argv){
  QApplication application(argc, argv);
  Viewer viewer{};
  viewer.show();
  return application.exec();
}
