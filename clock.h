#ifndef CLOCK_H
#define CLOCK_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QTime>

class Clock: public QGraphicsTextItem, public QTime
{
public:
    Clock();
    void timeincrease();
    int sec;
    QTime t();
    QTime n;
    int scoreNum;
    int Lap;
};

#endif // CLOCK_H

