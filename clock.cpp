#include "clock.h"
#include "car.h"
#include "game.h"
#include <QString>

extern game * Racinggame;

Clock::Clock():QGraphicsTextItem(), QTime()
{
    QTime t(0,0);
    sec = 1;
    setPlainText(QString("TIME:") + t.toString("mm:ss") + QString("   COINS:") + QString::number(0) + QString("   LAP:")+ QString::number(0)+ QString("/5"));
    setDefaultTextColor(Qt::white);
    setFont(QFont("Times",20));

}



void Clock::timeincrease()
{
    scoreNum=Racinggame->Car->scorenum;
    QTime t(0,0);
    QTime n=t.addSecs(sec);
    sec++;
    setPlainText(QString("TIME: ") + n.toString("mm:ss") + QString("   COINS: ") + QString::number(scoreNum)+ QString("   LAP:")+ QString::number(Racinggame->Car->lapp+1)+ QString("/5"));
}

