#ifndef bos2_H
#define bos2_H
#include "headline.h"

class bos2
{
protected: /** PROTECTED **/

private: /** PRIVATE **/

public: /** PUBLIC **/

void strzalr(int xrs,int yrs, int strzalexistr){
if(strzalexistr==1){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
fillellipse(xrs,yrs,3,3);}
};

void strzalu(int xus,int yus,int strzalexistu){
if(strzalexistu==1){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(COLOR(5,5,15));
setfillstyle(SOLID_FILL,COLOR(5,5,15));
fillellipse(xus,yus,3,3);}
};

void ruch(int left, int right, int top, int bottom){
if(exist==1){
if(x>=right||x<=left){rchx=-rchx;}
if(y>=bottom||y<=top){rchy=-rchy;}
usunstatek();
y=y+rchy;
x=x+rchx;
rysuj();
}
};

void rysuj(){
readimagefile("bos2.bmp",x-50,y-35,x+50,y+40);
    xlt=x-70;
    xpt=x+70;
    yt=y+10;
};

void usunstatek(){
        setfillstyle(SOLID_FILL,COLOR(5,5,15));
   bar(x-51,y-36,x+51,y+41);
    };

void init(int x_jed, int y_jed, int zycie_jed, int punkty_jed,int wsp_trud){
wsp=wsp_trud;
exist=1;
strzalpexist=1;
strzallexist=1;
zycie=zycie_jed;
punkty=punkty_jed+wsp_trud;
x=x_jed;
y=y_jed;
rysuj();
rchx=1+wsp_trud;
rchy=1+wsp_trud;
time=0;
ys=-10;
sti=0;
};

void mechanikastrzalur(){
if(exist==1){
if(time==90){
    time=0;
    strzalpexist=1;
    strzallexist=1;
    sti=0;
}
if((ys<0)&&(time==0)){
    xs=x;
    ys=y;
}
if(ys>600){
    ys=-10;
    strzalpexist=0;
    strzallexist=0;
}
if(ys>0){
    ys=ys+5+wsp;
    strzalr(xs+65,ys+47,strzalpexist);
    strzalr(xs-65,ys+47,strzallexist);
}
time++;
}
};

void mechanikastrzaluu(){
    strzalu(xs+40,ys+47,strzalpexist);
    strzalu(xs-40,ys+47,strzallexist);
};

int wsp; /** wspolczynnik poziomu trdnosci **/
int sti; /** detekcja istniejacych strzalow **/
int time; /** zmienna "czasu" **/
int rchy; /** szybkosc lotu na osi y **/
int rchx; /** szybkosc lotu na osi x **/
int punkty; /** ilosc punktow za zabicie **/
int zycie; /** ilosc zycia jednostki **/
int strzalpexist; /** czy strzal prawy istnieje **/
int strzallexist; /** czy strzal prawy istnieje **/
int xzlap; /** zlapana koordynata x **/
int xs; /** wsp x strzalu **/
int ys; /** wsp y strzalu **/
int exist; /** czy statek istnieje **/
int x; /** wsp poczatkowa statku **/
int y; /** wsp poczatkowa statku **/
int xlt; /** wsp x lewa trafienia **/
int xpt; /** wsp x prawa trafienia **/
int yt; /** wsp y trafienia **/

};

#endif
