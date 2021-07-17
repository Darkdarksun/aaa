#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QImage>
#include <QDebug>
#include <QMediaPlayer>
#include "car.h"
#include "wall.h"
#include "clock.h"
#include "finish.h"
#include "star.h"
#include "win.h"
#include "art.h"

class game: public QGraphicsView{
public:
    game();
    int starposx;
    int starposy;
    int cl;
    int randpos;
    int a;
    void clear();
    void spawn();
    void random();

    QGraphicsScene * scene;
    car * Car;
    wall * Wall1;
    Clock * Racetime;
    finish * Finish;
    star * Star;
    win * Winend;
    art * Gameart;

};

#endif // GAME_H
