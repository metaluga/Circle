#include "controller.h"
#include "widget.h"
#include <QThread>

Controller::Controller(QObject *parent) : QObject(parent)
{
    // QThread *thread = new QThread(this);

     Widget *widget = new Widget();
  //   widget->moveToThread(thread);
     //connect(thread, SIGNAL(started()), widget, SLOT(show()));
    // connect(widget, SIGNAL(finished()), thread, SLOT(quit()));



     connect(this, SIGNAL(positionUpdate(int, int)),
             widget, SLOT(setPosition(int,int)));
   //  thread->start();
}

void Controller::positionChange()
{
    bool isUp = true;
    while(true)
    {

        if(isUp)
        {
            ++y;

        }
        else
        {
            --y;
        }
        if (isUp && (y > 500))
        {
            isUp = false;
        }
        else if(!isUp && (y < 1))
        {
            isUp = true;
        }
        emit positionUpdate(x,y);

    }

}
