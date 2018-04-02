#include "headline.h"
#include "str.h"

extern okna okno;

void help(void){
int windh;
windh=initwindow(500,400,"HELP",30,30,false,false);
settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcurrentwindow(windh);
outtextxy(145,10,"PANEL POMOCY");
outtextxy(0,50,"Klawisze sterowania statkiem: ");
outtextxy(0,70,"W- ruch do przodu;");
outtextxy(0,90,"S- ruch do tylu;");
outtextxy(0,110,"A- ruch w lewo;");
outtextxy(0,130,"D-ruch w prawo;");
outtextxy(0,130,"F-przyspieszenie 'PP';");

outtextxy(220,70,"SPACJA- strzal.");

outtextxy(0,190,"W grze chodzi o to by zestrzelic wszystkie statki");
outtextxy(0,210,"przeciwnika, potem pojawi sie bos.");

outtextxy(170,270,"Nacisnij X by powrocic do gry....");
do{
}while(!GetAsyncKeyState(0x58)); //X
fflush(stdin);
closegraph(windh);
setcurrentwindow(okno.wind);
}
