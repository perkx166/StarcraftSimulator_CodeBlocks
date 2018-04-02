#include "headline.h"

void strzal_int_b2(mojstatek& wirek,bos2& statek){
if(statek.exist==1){
if(statek.time==90){
    statek.time=0;
    statek.strzalpexist=1;
    statek.strzallexist=1;
    statek.sti=0;
}
if((statek.ys<0)&&(statek.time==0)){
    statek.xs=statek.x;
    statek.ys=statek.y;
    statek.xzlap=wirek.x;
}
if(statek.ys>600){
    statek.ys=-10;
    statek.strzalpexist=0;
    statek.strzallexist=0;
}
if(statek.ys>0){
    statek.ys=statek.ys+5+statek.wsp;
    if(statek.xs<statek.xzlap){
    statek.xs=statek.xs+3;}
    if(statek.xs>statek.xzlap){
    statek.xs=statek.xs-3;}
    statek.strzalr(statek.xs+40,statek.ys+47,statek.strzalpexist);
    statek.strzalr(statek.xs-40,statek.ys+47,statek.strzallexist);
}
statek.time++;
}
}
