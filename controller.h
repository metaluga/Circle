#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>

class Controller : public QObject
{
    Q_OBJECT
    int x = 0;
    int y = 0;
public:
    explicit Controller(QObject *parent = 0);
    void positionChange();
signals:
    void positionUpdate(int x, int y);
public slots:
};

#endif // CONTROLLER_H
