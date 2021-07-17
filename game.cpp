#include "game.h"

game::game(){

    random();
    scene = new QGraphicsScene ();

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scene->setSceneRect(0,0,1900,910);

    Car = new car();
    Wall1 = new wall();
    Racetime = new Clock();
    Finish = new finish();
    Star = new star();
    Winend = new win();
    Gameart= new art();

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/music/mainmusic.mp3"));
    music->setVolume(1);
    music->play();

    scene->addItem(Finish);
    scene->addItem(Car);
    scene->addItem(Wall1);
    scene->addItem(Racetime);
    scene->addItem(Star);
    scene->addItem(Gameart);
    scene->addItem(Winend);

    setFixedSize(1900,910);
    move(0,0);
    scene->setBackgroundBrush(QBrush(QImage(":/graphics/ground").scaled(150,150)));
    Car->setPos(width()/2,910/2+910/4);

    Finish->setPos(width()/2,height()/2);
    Finish->setRotation(90);

    Star->setPos(randpos,200+400*(a%2));
    starposx=Star->x();
    starposy=Star->y();

    Wall1->setPos(0,0);
    Racetime->setPos(width()/2,0);
    Winend->setPos(50,50);
    Gameart->setPos(0,0);
}

void game::spawn(){
    Star->setPos(randpos,200+400*(a%2));
    scene->addItem(Star);
    starposx=Star->x();
    starposy=Star->y();
}

void game::clear(){
    scene->removeItem(Star);
}

void game::random(){
    std::srand(std::time(nullptr));
    a = (std::rand() % 10);
    randpos = 180*(a%10+1);
}

