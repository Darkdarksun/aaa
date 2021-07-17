#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QImage>
#include <QScrollArea>

#include "car.h"
#include "wall.h"
#include "game.h"

game * Racinggame;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Racinggame = new game();
    Racinggame->show();

    return a.exec();
}
