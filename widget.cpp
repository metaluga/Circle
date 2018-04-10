#include "widget.h"
#include "ui_widget.h"
#include <QThread>

#include <iostream>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setPosition(int x, int y)
{
    this->x = x;
    this->y = y;
   // paintEvent(x,y);
}

/* Метод, в котором происходит рисование
 * */
void Widget::paintEvent(int x, int y)
{
    QPainter painter(this); // Создаём объект отрисовщика
    // Устанавливаем кисть абриса
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));



    // Если ничего не выбрано, то отрисовываем белый круг
    painter.setBrush(QBrush(Qt::white, Qt::SolidPattern));
    painter.drawEllipse(100+x, 80+y, 150, 150);
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this); // Создаём объект отрисовщика
    // Устанавливаем кисть абриса
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));



    // Если ничего не выбрано, то отрисовываем белый круг
    painter.setBrush(QBrush(Qt::white, Qt::SolidPattern));
    painter.drawEllipse(100, 50, 150, 150);
    painter.drawEllipse(100, 60, 150, 150);
    painter.drawEllipse(100, 80, 150, 150);

}

