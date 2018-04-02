#include "headline.h"
#include "str.h"

extern okna okno;

void statykazpunktami(mojstatek& wirek){
char punkty;
int x=getmaxx(),y=getmaxy();

setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,DARKGRAY);
bar(794, 0,x,y);
bar(106, 594,794,y);
bar(106,0,794,6);
bar(100,0,106,y);
setcolor(WHITE);

settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
itoa(wirek.punkty,&punkty, 10);
outtextxy(10,30,&punkty);

setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(GREEN);
rectangle(9,479,21,581);

setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(GREEN);
rectangle(59,479,71,581);

setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(GREEN);
rectangle(69,351,81,304);}

void statyka1(void){
int x=getmaxx(),y=getmaxy();
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,DARKGRAY);
bar(794, 0,x,y);
bar(106, 594,794,y);
bar(106,0,794,6);
bar(100,0,106,y);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
floodfill(150,300,DARKGRAY);
readimagefile("tlo.bmp",680,490,780,590);}

void statyka2(void){
settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(10,10,"Punkty:");
outtextxy(9,455,"PP");
outtextxy(59,455,"HP");
outtextxy(30,320,"BOS");
przygotuj();}

void przegrales(void){
int windh;
windh=initwindow(700,100,"Przegrales",30,30,false,false);
settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcurrentwindow(windh);
outtextxy(10,10,"PRZEGRALES GRA ZOSTANIE ZAMKNIETA PO WCISNIECIU ESC.");
do{
}while(!GetAsyncKeyState(VK_ESCAPE)); //ESC
closegraph(windh);
setcurrentwindow(okno.wind);
exit(0);}

void przygotuj(void){
settextstyle(DEFAULT_FONT ,HORIZ_DIR,3);
outtextxy(270,450,"Przygotuj sie!");
delay(2000);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(265,430,620,480);
}
