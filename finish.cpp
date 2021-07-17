#include "finish.h"


finish::finish(){

    QPixmap finish = QPixmap(":/graphics/finish.png").scaled(500, 50, Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    setPixmap(finish);
}
