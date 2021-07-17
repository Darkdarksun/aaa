#include "car.h"

#include <QDebug>
#include <QPen>
#include <QList>
#include "wall.h"
#include "game.h"

extern game * Racinggame;

car::car(): QObject(){
    angle = 90;
    setRotation(angle);
    accel = 0;
    trigger = 0;
    cooldown=0;
    time();
    setRect(-30,-90,60,130);
    scorenum=0;
    Alap=0;
    Blap=0;
    Clap=1;
}

QRectF car::boundingRect() const{
    return QRectF(-33, -40, 66, 80);
}

void car::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setBrush(Qt::black);

    painter->save();
    painter->translate(-20, -18);
    painter->rotate(0);
    painter->drawRect(-10, -7, 10, 15); // front left
    painter->restore();

    painter->save();
    painter->translate(20, -18);
    painter->rotate(0);
    painter->drawRect(0, -7, 10, 15); // front left
    painter->restore();

    painter->drawRect(-30, 0, 12, 17); // rear left
    painter->drawRect(19, 0, 12, 17);  // rear right

    painter->setBrush(Qt::darkRed);

    painter->drawPie(-28, -40, 56, 30, 0, 180 * 16);
    painter->drawRect(-28, -30, 56, 60);

    painter->drawRect(-15, 9, 30, 10); // back pod
    painter->drawRect(-33, 19, 66, 15); // rear wing

    painter->setBrush(Qt::black);
    painter->drawPie(-22, -5, 44, 15, 0, 180 * 16);
    painter->drawRect(-22, 0, 44, 5); // cocpit
    painter->drawEllipse(-20, -33, 10, 6);
    painter->drawEllipse(10, -33, 10, 6);

}

void car::move(){
  if (lapp<5){

    a11=Racinggame->Wall1->a1;
    a12=Racinggame->Wall1->a2;
    a21=Racinggame->Wall1->b1;
    a22=Racinggame->Wall1->b2;
    a31=Racinggame->Wall1->c1;
    a32=Racinggame->Wall1->c2;

    if  ((GetAsyncKeyState('W'))||(GetAsyncKeyState('S'))){
       if (GetAsyncKeyState('W')){
           trigger+=1;

           if (trigger==1){
               gametime();
           }
       setPos(mapToParent(0,0-accel));
       direction=0;
       if (accel<=2.6){
           accel +=0.01;
       }
       }
       if (GetAsyncKeyState('S')){
       setPos(mapToParent(0,0-accel/2));
       direction=1;
       if (accel>=-2){
           accel -=0.01;
       }
       }

       }
       else {
           if (accel>0.1){
                accel -= 0.015;
                if (direction==0){
           setPos(mapToParent(0,0-accel));
           }
           }
           if (accel<-0.1){
                accel += 0.015;
                if (direction==1){
           setPos(mapToParent(0,0-accel/2));
           }
           }
       }
  if ((GetAsyncKeyState('W'))&&(GetAsyncKeyState('A'))){
               angle -= 0.5;
               setRotation(angle);
  }

  if  ((GetAsyncKeyState('W'))&&(GetAsyncKeyState('D'))){
               angle += 0.5;
               setRotation(angle);
  }

  if ((GetAsyncKeyState('S'))&&(GetAsyncKeyState('A'))){
               //setPos(mapToParent(0,-2));
               angle -= 0.3;
               setRotation(angle);
  }

  if  ((GetAsyncKeyState('S'))&&(GetAsyncKeyState('D'))){
               //setPos(mapToParent(0,-2));
               angle += 0.3;
               setRotation(angle);
  }

     if (((this->x()<55)||(this->x()>1845))||((this->y()<40+50)||(this->y()>855))||
     ((this->x()<(a11+900+33))&&(this->x()>(a11-33))&&(this->y()>(910/2-150/2-33))&&(this->y()<(910/2-150/2+150+33)))||
     ((this->x()<(a21+183))&&(this->x()>(a21-33))&&(this->y()>(a22-33))&&(this->y()<(a22+183)))||
     ((this->x()<(a31+183))&&(this->x()>(a31-33))&&(this->y()>(a32-33))&&(this->y()<(a32+183)))){

        if  (accel>0){
            setPos(mapToParent(0,6));
            accel=0;
         }
        else {
            setPos(mapToParent(0,-6));
        }
    }

     starcheckx=Racinggame->starposx;
     starchecky=Racinggame->starposy;

     if ((this->x()<starcheckx+90)&&(this->x()>starcheckx-40)&&(this->y()<starchecky+90)&&(this->y()>starchecky-40)){

         if (cooldown==0){
             cooldown=1;
             check();
             scorenum++;
             Racinggame->clear();
         }
     }
     if((this->x()>1900/2-50)&&(this->x()<1900/2-47)&&(this->y()>910/2)){//Ccheck
         if(Alap==1){
            lap();
         }
         Alap=0;
         Blap=0;
         Clap=1;
     }
     if((this->x()>1900/2-50)&&(this->x()<1900/2-47)&&(this->y()<910/2)){//Bcheck
         if(Clap==1){
             Blap=1;
         }
         Clap=0;
         Alap=0;
     }
     if((this->x()>1900/2-60)&&(this->x()<1900/2-57)&&(this->y()<910/2)){//Acheck
         if(Blap==1){
             Alap=1;
         }
          Blap=0;
          Clap=0;
     }
   }
}

void car::result(){
       // tm+=1;
        Racinggame->Racetime->timeincrease();
}

void car::time(){
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(5);
}

void car::gametime(){
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(result()));
    timer->start(1000);
}

void car::check(){
    QTimer::singleShot(500,[]{
        Racinggame->Car->cd();
        Racinggame->spawn();
        Racinggame->random();

    });
}

void car::cd(){
        cooldown=0;
}
void car::lap(){
    lapp++;
    if (lapp==5){
        Racinggame->Winend->end();
        Racinggame->Gameart->screen();
        Racinggame->clear();
    }
   // qDebug() <<" Lap: "<<lapp<<" "<<Clap<<" "<<Blap<<" "<<Alap;
}
