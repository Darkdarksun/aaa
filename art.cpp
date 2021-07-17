#include "art.h"

art::art(){
}

void art::screen(){
    QPixmap art = QPixmap(":/graphics/fon.jpg").scaled(1900, 900, Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    setPixmap(art);
}
