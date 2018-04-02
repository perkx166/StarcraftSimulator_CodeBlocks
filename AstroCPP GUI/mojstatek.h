#ifndef mojstatek_H
#define mojstatek_H

#include "headline.h"

class mojstatek
{
protected: /** PROTECTED **/

private: /**PRIVATE**/

void usunstatek(){ /** usuwanie statku **/
int statekzm[28]={x,y, x-43,y-13, x-40,y-40, x-33,y-43,
x-31,y-20, x-13,y-26, x-6,y-60, x+6,y-60, x+13,
y-26,x+31,y-20, x+33,y-43, x+40,y-40, x+43,y-13, x,y};

setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(COLOR(5,5,15));
setfillstyle(SOLID_FILL,COLOR(5,5,15));
fillpoly(14, statekzm);
};

void strzallr(){ /** rysowanie strzalu lewego **/
if(strzallexist==1){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
fillellipse(xls,ys,3,3);}
};

void strzalpr(){ /** rysowanie strzalu prawego **/
    if(strzalpexist==1){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
fillellipse(xps,ys,3,3);}
};

void strzallu(){ /** usuwanie strzalu lewego **/
    if(strzallexist==1){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(COLOR(5,5,15));
setfillstyle(SOLID_FILL,COLOR(5,5,15));
fillellipse(xls,ys,3,3);}
};

void strzalpu(){ /** usuwanie strzalu prawego **/
    if(strzalpexist==1){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(COLOR(5,5,15));
setfillstyle(SOLID_FILL,COLOR(5,5,15));
fillellipse(xps,ys,3,3);}
};

public: /** PUBLIC **/

void rysujstatek(){ /** rysowanie statku **/
int statekzm[28]={x,y, x-43,y-13, x-40,y-40, x-33,y-43,
x-31,y-20, x-13,y-26, x-6,y-60, x+6,y-60, x+13,
y-26,x+31,y-20, x+33,y-43, x+40,y-40, x+43,y-13, x,y};

if(kolor==1){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(RED);
setfillstyle(SOLID_FILL,BLACK);}

if(kolor==2){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);}

if(kolor==3){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);}

if(kolor==4){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);}

fillpoly(14, statekzm);
                ytt=y-20;
                ytb=y+20;
                xpt=x+37;
                xlt=x-37;
};

void ruch(){ /** ruch i strzelanie statkiem odczyt z klawiatury **/
if(GetAsyncKeyState(0x46))//F
{
if((pp==0)&&(ip>0)){
pp=5;}
}

if(GetAsyncKeyState(0x20))//SPACJA
{
            if(ys<0)
            {
                ys=y-43;
                xps=x+37;
                xls=x-37;
                strzallexist=1;
                strzalpexist=1;
            }
}

if(GetAsyncKeyState(0x57))//W
{
            if(y>390)
            {
                usunstatek();
                y=y-S-pp;
                readimagefile("tlo.bmp",680,490,780,590);
                rysujstatek();
            }
}

if(GetAsyncKeyState(0x53))//S
{
            if(y<585)
            {
                usunstatek();
                y=y+S+pp;
                readimagefile("tlo.bmp",680,490,780,590);
                rysujstatek();
            }
}

if(GetAsyncKeyState(0x44))//D
{
if(x<=735)
            {
                usunstatek();
                x=x+S+pp;
                readimagefile("tlo.bmp",680,490,780,590);
                rysujstatek();
            }
}

if(GetAsyncKeyState(0x41))//A
{
            if(x>=165)
            {
                usunstatek();
                x=x-S-pp;
                readimagefile("tlo.bmp",680,490,780,590);
                rysujstatek();
            }
}

};

void mechanikastrzalur(){ /** mechanika rysowania strzalu **/
if(ys>0){
ys=ys-STR;
strzallr();
strzalpr();
}
else
if(ys<45){
ys=-10;
}
};

void mechanikastrzaluu(){ /** mechanika usuwania strzalu **/
strzallu();
strzalpu();
};

void mechanikaprzyspieszenia(){ /** mechanika zalaczenia przyspieszenia **/

if((pp==0)&&(ip<1000)){
ip++;
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
bar(10,580-ip/10,20,580);}

if(pp==5){
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(10,580-ip/10,20,580);
ip=ip-10;
setlinestyle(SOLID_LINE,0,NORM_WIDTH);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
bar(10,580-ip/10,20,580);}

if(ip<=0){pp=0;}
};

void init(int x_jed,int y_jed,int zycie_jed,int kolor_jed){ /** inicjacjia zmiennych statku **/
strzallexist=1;
strzalpexist=1;
exist=1;
kolor=kolor_jed;
zycie=zycie_jed;
x=x_jed;
y=y_jed;
ytt=y-20;
ytb=y+20;
xpt=x+20;
xlt=x-20;
punkty=0;
rysujstatek();
ys=-10;
ip=1;
pp=0;
};

int kolor; /** KOLOR **/
int pp; /** czy przyspieszenie **/
int ip; /** ilosc przyspieszenia **/
int x; /** wspolrzedna x statku **/
int y; /** wspolrzedna y statku **/
int zycie; /** ilosc zycia jednostki **/
int exist; /** czy statek istnieje **/
int ys; /** wsp y strzalu lewego i prawego **/
int xps; /** wsp x prawego strzalu **/
int xls; /** wsp x lewego strzalu **/
int ytt; /** wsp y do trafienia statku **/
int ytb; /** wsp y do trafienia statku **/
int xpt; /** wsp x prawa do traf statku **/
int xlt; /** wsp x lewa do traf statku **/
int punkty; /** punktacja statku **/
int strzalpexist; /** czy strzal prawy istnieje **/
int strzallexist; /** czy strzal lewy istnieje **/

};

#endif
