#include "dialog.h"
#include "ui_dialog.h"
#include "QPixmap"
#include "stdlib.h"
#include "time.h"
#include "QDebug"
#include "QKeyEvent"

int sayilar [4][4];

Dialog::Dialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    srand(time(NULL));
    int konum1 = rand()%4;
    int konum2 = rand()%4;
    int konum3 = rand()%4;
    int konum4 = rand()%4;

    while (konum1==konum3 && konum2==konum4){
        konum3 = rand()%4;
        konum4 = rand()%4;
    }

    int sayi1 = rand()%2;
    int sayi2 = rand()%2;

    if (sayi1 == 1){
        sayilar[konum1][konum2] = 4;
    }
    else sayilar[konum1][konum2] = 2;

    if (sayi2 == 1){
        sayilar[konum3][konum4] = 4;
    }
    else sayilar[konum3][konum4] = 2;




    for(int i = 0; i<4; i++){
       for(int j = 0; j<4; j++){
            qDebug() <<sayilar [i][j];
        }
     }


    if(sayilar[0][0] == 2){
        QPixmap pixl("");
        ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 4){
        QPixmap pixl("");
        ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 8){
        QPixmap pixl("");
        ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 16){
        QPixmap pixl("");
        ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 32){
        QPixmap pixl("");
        ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 64){
        QPixmap pixl("");
        ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 128){
        QPixmap pixl("");
        ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 256){
        QPixmap pixl("");
        ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 512){
        QPixmap pixl("");
        ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 1024){
        QPixmap pixl("");
        ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][0] == 2048){
        QPixmap pixl("");
        ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[0][1] == 2){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 4){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 8){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 16){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 32){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 64){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 128){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 256){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 512){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 1024){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][1] == 2048){
        QPixmap pixl("");
        ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[0][2] == 2){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 4){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 8){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 16){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 32){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 64){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 128){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 256){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 512){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 1024){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][2] == 2048){
        QPixmap pixl("");
        ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[0][3] == 2){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 4){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 8){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 16){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 32){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 64){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 128){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 256){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 512){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 1024){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[0][3] == 2048){
        QPixmap pixl("");
        ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[1][0] == 2){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 4){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 8){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 16){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 32){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 64){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 128){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 256){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 512){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 1024){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][0] == 2048){
        QPixmap pixl("");
        ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[1][1] == 2){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 4){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 8){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 16){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 32){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 64){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 128){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 256){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 512){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 1024){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][1] == 2048){
        QPixmap pixl("");
        ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[1][2] == 2){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2] == 4){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2] == 8){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2] == 16){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2] == 32){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2] == 64){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2] == 128){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2] == 256){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2] == 512){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2]== 1024){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][2] == 2048){
        QPixmap pixl("");
        ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[1][3] == 2){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3] == 4){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3] == 8){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3] == 16){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3] == 32){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3] == 64){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3] == 128){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3] == 256){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3] == 512){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3]== 1024){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[1][3] == 2048){
        QPixmap pixl("");
        ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[2][0] == 2){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 4){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 8){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 16){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 32){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 64){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 128){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 256){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 512){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 1024){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][0] == 2048){
        QPixmap pixl("");
        ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[2][1] == 2){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 4){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 8){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 16){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 32){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 64){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 128){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 256){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 512){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 1024){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][1] == 2048){
        QPixmap pixl("");
        ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[2][2] == 2){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 4){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 8){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 16){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 32){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 64){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 128){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 256){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 512){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 1024){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][2] == 2048){
        QPixmap pixl("");
        ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[2][3] == 2){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 4){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 8){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 16){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 32){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 64){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 128){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 256){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 512){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 1024){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[2][3] == 2048){
        QPixmap pixl("");
        ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[3][0] == 2){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 4){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 8){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 16){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 32){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 64){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 128){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 256){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 512){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 1024){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][0] == 2048){
        QPixmap pixl("");
        ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[3][1] == 2){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 4){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 8){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 16){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 32){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 64){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 128){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 256){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 512){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 1024){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][1] == 2048){
        QPixmap pixl("");
        ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[3][2] == 2){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 4){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 8){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 16){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 32){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 64){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 128){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 256){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 512){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 1024){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][2] == 2048){
        QPixmap pixl("");
        ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }


    if(sayilar[3][3] == 2){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 4){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 8){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 16){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 32){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 64){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 128){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 256){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 512){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 1024){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(sayilar[3][3] == 2048){
        QPixmap pixl("");
        ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
    }
}


void Dialog::keyPressEvent(QKeyEvent *event)
{
  if(event -> key() == Qt::Key_A){

      int kontrol =0;
      int kontrol1 =0;

      for(int i = 0;i<4;i++){
          for(int j = 3;j>0;j--){
              if(sayilar[i][j-1]==0 && sayilar[i][j] !=0){
                  sayilar[i][j-1] = sayilar[i][j];
                  sayilar[i][j] = 0;
                  kontrol++;
              }
          }

          for(int j = 3;j>0;j--){
              if(sayilar[i][j-1]==0 && sayilar[i][j] !=0){
                  sayilar[i][j-1] = sayilar[i][j];
                  sayilar[i][j] = 0;
              }
          }

          for(int j = 3;j>0;j--){
              if(sayilar[i][j-1]==0 && sayilar[i][j] !=0){
                  sayilar[i][j-1] = sayilar[i][j];
                  sayilar[i][j] = 0;
              }
          }

          for(int j = 0;j<3;j++){
              if(sayilar[i][j]==sayilar[i][j+1] && sayilar[i][j] !=0){
                  sayilar[i][j] *= 2;
                  sayilar[i][j+1] = 0;
                  kontrol1++;
              }
          }

          for(int j = 3;j>0;j--){
              if(sayilar[i][j-1]==0 && sayilar[i][j] !=0){
                  sayilar[i][j-1] = sayilar[i][j];
                  sayilar[i][j] = 0;
              }
          }

          for(int j = 3;j>0;j--){
              if(sayilar[i][j-1]==0 && sayilar[i][j] !=0){
                  sayilar[i][j-1] = sayilar[i][j];
                  sayilar[i][j] = 0;
              }
          }

          qDebug()<< "vvv";

          for(int j=0;j<4;j++){
              qDebug()<< sayilar[i][j];
          }

      }


      if (kontrol !=0 || kontrol1 !=0){
          int konum1 = rand()%4;
          int konum2 = rand()%4;

          while(sayilar[konum1][konum2] != 0){
              konum1 = rand()%4;
              konum2 = rand()%4;
          }

          int sayi1 = rand()%2;
          int sayi2 = rand()%2;

          if(sayi1 == 1){
              sayilar[konum1][konum2] = 4;
          }
          else sayilar[konum1][konum2] = 2;

          kontrol = 0;
          kontrol1 = 0;
      }


      ui->label1->clear();
      ui->label2->clear();
      ui->label3->clear();
      ui->label4->clear();
      ui->label5->clear();
      ui->label6->clear();
      ui->label7->clear();
      ui->label8->clear();
      ui->label9->clear();
      ui->label10->clear();
      ui->label11->clear();
      ui->label12->clear();
      ui->label13->clear();
      ui->label14->clear();
      ui->label15->clear();
      ui->label16->clear();

      if(sayilar[0][0] == 2){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 4){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 8){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 16){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 32){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 64){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 128){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 256){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 512){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 1024){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 2048){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][1] == 2){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 4){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 8){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 16){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 32){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 64){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 128){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 256){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 512){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 1024){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 2048){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][2] == 2){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 4){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 8){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 16){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 32){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 64){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 128){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 256){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 512){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 1024){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 2048){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][3] == 2){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 4){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 8){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 16){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 32){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 64){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 128){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 256){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 512){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 1024){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 2048){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][0] == 2){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 4){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 8){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 16){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 32){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 64){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 128){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 256){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 512){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 1024){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 2048){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][1] == 2){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 4){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 8){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 16){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 32){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 64){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 128){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 256){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 512){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 1024){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 2048){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][2] == 2){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 4){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 8){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 16){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 32){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 64){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 128){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 256){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 512){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2]== 1024){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 2048){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][3] == 2){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 4){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 8){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 16){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 32){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 64){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 128){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 256){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 512){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3]== 1024){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 2048){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][0] == 2){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 4){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 8){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 16){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 32){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 64){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 128){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 256){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 512){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 1024){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 2048){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][1] == 2){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 4){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 8){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 16){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 32){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 64){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 128){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 256){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 512){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 1024){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 2048){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][2] == 2){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 4){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 8){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 16){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 32){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 64){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 128){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 256){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 512){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 1024){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 2048){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][3] == 2){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 4){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 8){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 16){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 32){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 64){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 128){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 256){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 512){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 1024){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 2048){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][0] == 2){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 4){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 8){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 16){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 32){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 64){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 128){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 256){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 512){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 1024){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 2048){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][1] == 2){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 4){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 8){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 16){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 32){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 64){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 128){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 256){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 512){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 1024){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 2048){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][2] == 2){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 4){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 8){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 16){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 32){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 64){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 128){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 256){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 512){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 1024){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 2048){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][3] == 2){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 4){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 8){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 16){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 32){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 64){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 128){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 256){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 512){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 1024){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 2048){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }

      qDebug()<< "vvv";

      for(int i = 0; i<4;i++){
         for(int j=0;j<4;j++){
             qDebug()<< sayilar[i][j];
         }
      }
  }
  else if(event->key() == Qt::Key_D){

      int kontrol = 0;
      int kontrol1 = 0;

      for(int i = 0; i<4;i++){
         for(int j=0;j<3;j++){

             if(sayilar[i][j] !=0 && sayilar[i][j+1] == 0){
                 sayilar[i][j+1] = sayilar[i][j];
                 sayilar[i][j] = 0;
                 kontrol++;
             }
         }
         for(int j = 0;j<3;j++){

             if(sayilar[i][j] !=0 && sayilar[i][j+1] == 0){
                 sayilar[i][j+1] = sayilar[i][j];
                 sayilar[i][j] = 0;
                 kontrol++;
             }
         }
         for(int j = 0;j<3;j++){

             if(sayilar[i][j] !=0 && sayilar[i][j+1] == 0){
                 sayilar[i][j+1] = sayilar[i][j];
                 sayilar[i][j] = 0;
                 kontrol++;
             }
         }


         for(int j = 3;j>0;j--){

             if(sayilar[i][j-1]==sayilar[i][j] !=0 && sayilar[i][j] != 0){
                sayilar[i][j] *= 2;
                 sayilar[i][j-1] = 0;
                 kontrol1++;
             }
         }
         for(int j = 0;j<3;j++){

             if(sayilar[i][j] !=0 && sayilar[i][j+1] == 0){
                 sayilar[i][j+1] = sayilar[i][j];
                 sayilar[i][j] = 0;
                 kontrol++;
             }
         }
         for(int j = 0;j<3;j++){

             if(sayilar[i][j] !=0 && sayilar[i][j+1] == 0){
                 sayilar[i][j+1] = sayilar[i][j];
                 sayilar[i][j] = 0;
                 kontrol++;
             }
         }

         qDebug()<< "vvv";

            for(int j=0;j<4;j++){
                qDebug()<< sayilar[i][j];
            }
       }

      if (kontrol !=0 || kontrol1 !=0){
          int konum1 = rand()%4;
          int konum2 = rand()%4;

          while(sayilar[konum1][konum2] != 0){
              konum1 = rand()%4;
              konum2 = rand()%4;
          }

          int sayi1 = rand()%2;
          int sayi2 = rand()%2;

          if(sayi1 == 1){
              sayilar[konum1][konum2] = 4;
          }
          else sayilar[konum1][konum2] = 2;

          kontrol = 0;
          kontrol1 = 0;
      }


      ui->label1->clear();
      ui->label2->clear();
      ui->label3->clear();
      ui->label4->clear();
      ui->label5->clear();
      ui->label6->clear();
      ui->label7->clear();
      ui->label8->clear();
      ui->label9->clear();
      ui->label10->clear();
      ui->label11->clear();
      ui->label12->clear();
      ui->label13->clear();
      ui->label14->clear();
      ui->label15->clear();
      ui->label16->clear();

      if(sayilar[0][0] == 2){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 4){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 8){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 16){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 32){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 64){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 128){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 256){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 512){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 1024){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 2048){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][1] == 2){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 4){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 8){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 16){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 32){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 64){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 128){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 256){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 512){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 1024){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 2048){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][2] == 2){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 4){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 8){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 16){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 32){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 64){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 128){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 256){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 512){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 1024){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 2048){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][3] == 2){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 4){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 8){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 16){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 32){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 64){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 128){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 256){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 512){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 1024){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 2048){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][0] == 2){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 4){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 8){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 16){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 32){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 64){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 128){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 256){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 512){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 1024){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 2048){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][1] == 2){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 4){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 8){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 16){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 32){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 64){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 128){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 256){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 512){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 1024){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 2048){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][2] == 2){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 4){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 8){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 16){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 32){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 64){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 128){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 256){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 512){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2]== 1024){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 2048){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][3] == 2){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 4){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 8){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 16){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 32){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 64){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 128){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 256){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 512){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3]== 1024){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 2048){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][0] == 2){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 4){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 8){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 16){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 32){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 64){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 128){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 256){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 512){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 1024){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 2048){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][1] == 2){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 4){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 8){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 16){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 32){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 64){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 128){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 256){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 512){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 1024){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 2048){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][2] == 2){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 4){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 8){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 16){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 32){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 64){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 128){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 256){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 512){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 1024){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 2048){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][3] == 2){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 4){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 8){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 16){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 32){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 64){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 128){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 256){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 512){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 1024){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 2048){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][0] == 2){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 4){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 8){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 16){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 32){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 64){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 128){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 256){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 512){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 1024){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 2048){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][1] == 2){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 4){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 8){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 16){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 32){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 64){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 128){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 256){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 512){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 1024){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 2048){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][2] == 2){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 4){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 8){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 16){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 32){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 64){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 128){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 256){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 512){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 1024){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 2048){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][3] == 2){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 4){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 8){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 16){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 32){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 64){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 128){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 256){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 512){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 1024){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 2048){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }

  }
  else if(event->key() == Qt::Key_W){

      int kontrol =0;
      int kontrol1 =0;

      for(int j = 0;j<4;j++){
          for(int i = 0;i<3;i++){
              if(sayilar[i][j]==0 && sayilar[i+1][j] !=0){
                  sayilar[i][j] = sayilar[i+1][j];
                  sayilar[i+1][j] = 0;
                  kontrol++;
              }
          }

          for(int i = 0;i<3;i++){
              if(sayilar[i][j]==0 && sayilar[i+1][j] !=0){
                  sayilar[i][j] = sayilar[i+1][j];
                  sayilar[i+1][j] = 0;
                  kontrol++;
              }
          }

          for(int i = 0;i<3;i++){
              if(sayilar[i][j]==0 && sayilar[i+1][j] !=0){
                  sayilar[i][j] = sayilar[i+1][j];
                  sayilar[i+1][j] = 0;
                  kontrol++;
              }
          }
//возможно дальше немного неправильно
          for(int i = 0;i<3;i++){
              if(sayilar[i][j]==sayilar[i+1][j] && sayilar[i][j] !=0){
                  sayilar[i][j] *= 2;
                  sayilar[i][j+1] = 0;
                  kontrol1++;
              }
          }

          for(int i = 0;i<3;i++){
              if(sayilar[i][j]==0 && sayilar[i+1][j] !=0){
                  sayilar[i][j] = sayilar[i+1][j];
                  sayilar[i+1][j] = 0;
                  kontrol++;
              }
          }

          for(int i = 0;i<3;i++){
              if(sayilar[i][j]==0 && sayilar[i+1][j] !=0){
                  sayilar[i][j] = sayilar[i+1][j];
                  sayilar[i+1][j] = 0;
                  kontrol++;
              }
          }

          qDebug()<< "vvv";

          for(int i=0;i<4;i++){
              qDebug()<< sayilar[i][j];
          }

      }

      if (kontrol !=0 || kontrol1 !=0){
          int konum1 = rand()%4;
          int konum2 = rand()%4;

          while(sayilar[konum1][konum2] != 0){
              konum1 = rand()%4;
              konum2 = rand()%4;
          }

          int sayi1 = rand()%2;
          int sayi2 = rand()%2;

          if(sayi1 == 1){
              sayilar[konum1][konum2] = 4;
          }
          else sayilar[konum1][konum2] = 2;

          kontrol = 0;
          kontrol1 = 0;
      }


      ui->label1->clear();
      ui->label2->clear();
      ui->label3->clear();
      ui->label4->clear();
      ui->label5->clear();
      ui->label6->clear();
      ui->label7->clear();
      ui->label8->clear();
      ui->label9->clear();
      ui->label10->clear();
      ui->label11->clear();
      ui->label12->clear();
      ui->label13->clear();
      ui->label14->clear();
      ui->label15->clear();
      ui->label16->clear();

      if(sayilar[0][0] == 2){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 4){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 8){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 16){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 32){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 64){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 128){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 256){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 512){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 1024){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 2048){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][1] == 2){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 4){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 8){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 16){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 32){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 64){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 128){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 256){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 512){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 1024){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 2048){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][2] == 2){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 4){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 8){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 16){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 32){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 64){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 128){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 256){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 512){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 1024){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 2048){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][3] == 2){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 4){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 8){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 16){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 32){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 64){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 128){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 256){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 512){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 1024){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 2048){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][0] == 2){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 4){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 8){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 16){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 32){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 64){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 128){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 256){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 512){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 1024){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 2048){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][1] == 2){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 4){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 8){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 16){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 32){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 64){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 128){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 256){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 512){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 1024){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 2048){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][2] == 2){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 4){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 8){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 16){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 32){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 64){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 128){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 256){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 512){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2]== 1024){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 2048){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][3] == 2){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 4){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 8){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 16){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 32){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 64){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 128){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 256){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 512){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3]== 1024){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 2048){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][0] == 2){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 4){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 8){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 16){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 32){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 64){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 128){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 256){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 512){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 1024){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 2048){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][1] == 2){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 4){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 8){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 16){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 32){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 64){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 128){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 256){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 512){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 1024){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 2048){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][2] == 2){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 4){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 8){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 16){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 32){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 64){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 128){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 256){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 512){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 1024){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 2048){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][3] == 2){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 4){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 8){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 16){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 32){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 64){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 128){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 256){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 512){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 1024){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 2048){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][0] == 2){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 4){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 8){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 16){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 32){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 64){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 128){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 256){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 512){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 1024){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 2048){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][1] == 2){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 4){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 8){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 16){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 32){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 64){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 128){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 256){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 512){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 1024){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 2048){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][2] == 2){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 4){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 8){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 16){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 32){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 64){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 128){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 256){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 512){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 1024){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 2048){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][3] == 2){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 4){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 8){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 16){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 32){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 64){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 128){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 256){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 512){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 1024){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 2048){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }

  }
  else if(event->key() == Qt::Key_S){

      int kontrol =0;
      int kontrol1 =0;

      for(int j=0; j<4;j++){
          for(int i=3; i>0;i--){

              if(sayilar[i][j]==0 && sayilar[i-1][j] !=0){
                 sayilar[i][j]= sayilar[i-1][j];
                 sayilar[i-1][j] = 0;
                 kontrol++;
              }
          }

          for(int i=3; i>0;i--){

              if(sayilar[i][j]==0 && sayilar[i-1][j] !=0){
                 sayilar[i][j]= sayilar[i-1][j];
                 sayilar[i-1][j] = 0;
                 kontrol++;
              }
          }

          for(int i=3; i>0;i--){

              if(sayilar[i][j]==0 && sayilar[i-1][j] !=0){
                 sayilar[i][j]= sayilar[i-1][j];
                 sayilar[i-1][j] = 0;
                 kontrol++;
              }
          }
//и тут возможно ошибки
          for(int i = 3;i>0;i--){
              if(sayilar[i][j]==sayilar[i-1][j] && sayilar[i-1][j] !=0){
                  sayilar[i][j] *= 2;
                  sayilar[i-1][j] = 0;
                  kontrol1++;
              }
          }

          for(int i = 3;i>0;i--){
              if(sayilar[i][j]==0 && sayilar[i-1][j] !=0){
                  sayilar[i][j] = sayilar[i-1][j];
                  sayilar[i-1][j] = 0;
                  kontrol++;
              }
          }

          for(int i = 3;i>0;i--){
              if(sayilar[i][j]==0 && sayilar[i-1][j] !=0){
                  sayilar[i][j] = sayilar[i-1][j];
                  sayilar[i-1][j] = 0;
                  kontrol++;
              }
          }

          qDebug()<< "vvv";

          for(int i=0;i<4;i++){
              qDebug()<< sayilar[i][j];
          }

      }

      if (kontrol !=0 || kontrol1 !=0){
          int konum1 = rand()%4;
          int konum2 = rand()%4;

          while(sayilar[konum1][konum2] != 0){
              konum1 = rand()%4;
              konum2 = rand()%4;
          }

          int sayi1 = rand()%2;
          int sayi2 = rand()%2;

          if(sayi1 == 1){
              sayilar[konum1][konum2] = 4;
          }
          else sayilar[konum1][konum2] = 2;

          kontrol = 0;
          kontrol1 = 0;
      }


      ui->label1->clear();
      ui->label2->clear();
      ui->label3->clear();
      ui->label4->clear();
      ui->label5->clear();
      ui->label6->clear();
      ui->label7->clear();
      ui->label8->clear();
      ui->label9->clear();
      ui->label10->clear();
      ui->label11->clear();
      ui->label12->clear();
      ui->label13->clear();
      ui->label14->clear();
      ui->label15->clear();
      ui->label16->clear();

      if(sayilar[0][0] == 2){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 4){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 8){
          QPixmap pixl("");
          ui -> label1->setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 16){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 32){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 64){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 128){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 256){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 512){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 1024){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][0] == 2048){
          QPixmap pixl("");
          ui -> label1-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][1] == 2){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 4){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 8){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 16){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 32){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 64){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 128){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 256){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 512){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 1024){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][1] == 2048){
          QPixmap pixl("");
          ui -> label2-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][2] == 2){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 4){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 8){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 16){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 32){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 64){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 128){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 256){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 512){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 1024){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][2] == 2048){
          QPixmap pixl("");
          ui -> label3-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[0][3] == 2){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 4){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 8){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 16){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 32){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 64){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 128){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 256){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 512){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 1024){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[0][3] == 2048){
          QPixmap pixl("");
          ui -> label4-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][0] == 2){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 4){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 8){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 16){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 32){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 64){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 128){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 256){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 512){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 1024){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][0] == 2048){
          QPixmap pixl("");
          ui -> label5-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][1] == 2){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 4){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 8){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 16){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 32){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 64){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 128){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 256){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 512){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 1024){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][1] == 2048){
          QPixmap pixl("");
          ui -> label6-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][2] == 2){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 4){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 8){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 16){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 32){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 64){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 128){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 256){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 512){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2]== 1024){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][2] == 2048){
          QPixmap pixl("");
          ui -> label7-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[1][3] == 2){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 4){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 8){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 16){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 32){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 64){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 128){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 256){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 512){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3]== 1024){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[1][3] == 2048){
          QPixmap pixl("");
          ui -> label8-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][0] == 2){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 4){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 8){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 16){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 32){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 64){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 128){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 256){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 512){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 1024){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][0] == 2048){
          QPixmap pixl("");
          ui -> label9-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][1] == 2){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 4){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 8){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 16){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 32){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 64){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 128){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 256){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 512){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 1024){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][1] == 2048){
          QPixmap pixl("");
          ui -> label10-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][2] == 2){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 4){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 8){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 16){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 32){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 64){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 128){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 256){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 512){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 1024){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][2] == 2048){
          QPixmap pixl("");
          ui -> label11-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[2][3] == 2){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 4){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 8){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 16){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 32){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 64){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 128){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 256){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 512){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 1024){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[2][3] == 2048){
          QPixmap pixl("");
          ui -> label12-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][0] == 2){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 4){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 8){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 16){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 32){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 64){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 128){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 256){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 512){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 1024){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][0] == 2048){
          QPixmap pixl("");
          ui -> label13-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][1] == 2){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 4){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 8){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 16){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 32){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 64){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 128){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 256){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 512){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 1024){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][1] == 2048){
          QPixmap pixl("");
          ui -> label14-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][2] == 2){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 4){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 8){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 16){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 32){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 64){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 128){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 256){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 512){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 1024){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][2] == 2048){
          QPixmap pixl("");
          ui -> label15-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


      if(sayilar[3][3] == 2){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 4){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 8){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 16){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 32){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 64){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 128){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 256){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 512){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 1024){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }
      else if(sayilar[3][3] == 2048){
          QPixmap pixl("");
          ui -> label16-> setPixmap(pixl.scaled(100,100,Qt::KeepAspectRatio));
      }


  }
}

Dialog::~Dialog()
{
    delete ui;
}

