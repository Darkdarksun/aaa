#include "win.h"
#include "game.h"
extern game * Racinggame;

win::win(){

}

void win::end(){
    QTime bibo(0,0);
    QTime biba=bibo.addSecs(Racinggame->Racetime->sec-1);
    QString bb=biba.toString("mm:ss");
    int summary=1000000/(70+(Racinggame->Racetime->sec))+250*(Racinggame->Car->scorenum);
    setPlainText(QString("   Your score:")+ QString::number(summary)+QString("\n       Time:")+bb);
    setDefaultTextColor(Qt::white);
    setFont(QFont("Times", 50));

}
