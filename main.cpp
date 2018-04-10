#include "widget.h"
#include <QApplication>
#include "controller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // Widget w;
    //w.show();
    Controller *controller = new Controller();
    controller->positionChange();
    return a.exec();
}
