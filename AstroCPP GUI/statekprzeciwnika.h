#ifndef statekprzeciwnika_H
#define statekprzeciwnika_H
#include "headline.h"

class statekprzeciwnika
{
protected: /** PROTECTED **/

private: /** PRIVATE **/

void strzalr(){
if(strzalexist==1){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
fillellipse(xs,ys,3,3);}
};

void strzalu(){
if(strzalexist==1){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(COLOR(5,5,15));
setfillstyle(SOLID_FILL,COLOR(5,5,15));
fillellipse(xs,ys,3,3);}
};

public: /** PUBLIC **/

void ruch(){
if(exist==1){
if(x>=xrp||x<=xrl){rchx=-rchx;}
if(y>=yrg||y<=yrd){rchy=-rchy;}
usunstatek();
y=y+rchy;
x=x+rchx;
rysuj();
}
};

void rysuj(){
    if(kolor==1){setfillstyle(SOLID_FILL,BLUE);}
    if(kolor==2){setfillstyle(SOLID_FILL,GREEN);}
    if(kolor==3){setfillstyle(SOLID_FILL,RED);}
    if(kolor==4){setfillstyle(SOLID_FILL,DARKGRAY);}
    if(kolor==5){setfillstyle(SOLID_FILL,WHITE);}
    bar(x-20,y-10,x+20,y+10);
    bar(x+20,y-5,x+25,y+5);
    bar(x+23,y-3,x+29,y+6);
    bar(x-25,y-5,x-20,y+5);
    bar(x-29,y-3,x-23,y+6);
    bar(x-5,y+10,x+5,y+18);
    bar(x-2,y+18,x+2,y+21);
    xlt=x-29;
    xpt=x+29;
    yt=y+10;
};

void usunstatek(){
    setfillstyle(SOLID_FILL,COLOR(5,5,15));
    bar(x-20,y-10,x+20,y+10);
    bar(x+20,y-5,x+25,y+5);
    bar(x+23,y-3,x+29,y+6);
    bar(x-25,y-5,x-20,y+5);
    bar(x-29,y-3,x-23,y+6);
    bar(x-5,y+10,x+5,y+18);
    bar(x-2,y+18,x+2,y+21);
    };

void init(int x_jed, int y_jed, int zycie_jed, int punkty_jed, int kolor_jed,int x_rlewy,int x_rprawy,int y_rdol,int y_rgora,int wsp_trud){
wsp=wsp_trud;
xrp=x_rprawy;
xrl=x_rlewy;
yrg=y_rgora;
yrd=y_rdol;
kolor=kolor_jed;
exist=1;
strzalexist=1;
zycie=zycie_jed;
punkty=punkty_jed+wsp_trud;
x=x_jed;
y=y_jed;
rysuj();
rchx=1+wsp_trud;
rchy=1+wsp_trud;
time=0;
ys=-10;
staticshot=0;
};

void mechanikastrzalur(){
if(exist==1){
if(time==120){
    time=0;
    strzalexist=1;
}
if((ys<0)&&(time==0)){
    xs=x;
    ys=y+18;
}
if(ys>600){
    ys=-10;
    strzalexist=0;
}
if(ys>0){
    ys=ys+5+wsp;
    strzalr();
}
time++;
}
};

void mechanikastrzaluu(){
strzalu();
};

int staticshot; /** zmienna strzalu statycznego **/
int wsp; /** wspolczynnik poziomu trdnosci **/
int xrp; /** granica ruchu prawa **/
int xrl; /** granica ruchu lewa **/
int yrg; /** granica ruchu gora **/
int yrd; /** granica ruchu dol **/
int time; /** zmienna "czasu" **/
int rchy; /** szybkosc lotu na osi y **/
int rchx; /** szybkosc lotu na osi x **/
int kolor; /** kolor statku **/
int punkty; /** ilosc punktow za zabicie **/
int zycie; /** ilosc zycia jednostki **/
int strzalexist; /** czy strzal prawy istnieje **/
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
