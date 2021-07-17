#ifndef WALL_H
#define WALL_H

#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <cstdlib>


class wall: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    wall();

    int a1;
    int a2;
    int a3;
    int a4;
    int b1, b2, c1, c2;

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int pozition;
};

#endif // WALL_H
