#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QPainter>
#include <windows.h>
#include <QTimer>
#include <QBrush>
#include <QGraphicsObject>
#include "clock.h"
#include "wall.h"

class car: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    car();
    int a11;
    int a12;
    int a21;
    int a22;
    int a31;
    int a32;
    int lapp=0;
    int starcheckx;
    int starchecky;
    int scorenum;
    int cooldown;
    void gametime();
    void time();
    void check();
    void lap();

public slots:
    void result();
    void move();
    void cd();

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    qreal angle;
    qreal accel;
    bool direction;
    bool Alap;
    bool Blap;
    bool Clap;
    qreal trigger;
};

#endif // MYRECT_H
