#include <QDebug>
#include <QList>

#include "wall.h"
//#include "car.h"
#include "game.h"

extern game * Racinggame;

wall::wall(): QObject(){

    std::srand(std::time(nullptr));
    pozition = std::rand() % 301 + (-150);

    a1=1900/2-900/2-pozition;
    a2=910/2-150/2;
    a3=900;
    a4=150;
    b1=1900/2-150/2+2*pozition;
    b2=910/2-3*150+40;
    c1=1900/2-150/2-1.5*pozition;
    c2=910/2+2*150;

    //qDebug() << pozition;
}

QRectF wall::boundingRect() const
{
    return QRectF(0, 0, 1900, 910);
}
void wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setBrush(QBrush(QImage(":/graphics/bricks1").scaled(50,50)));
    painter->drawRect(0, 0, 1900, 50);
    painter->drawRect(0, 0, 20, 930);
    painter->drawRect(1880, 0, 20, 910);
    painter->drawRect(0, 890, 1900, 20);

    painter->drawRect(a1, a2, a3, a4);
    painter->drawRect(b1, b2, 150, 150);
    painter->drawRect(c1, c2, 150, 150);
}



