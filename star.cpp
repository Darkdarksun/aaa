#include "star.h"

star::star()
{
    QPixmap star = QPixmap(":/graphics/coin.png").scaled(50, 50, Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    setPixmap(star);
}
