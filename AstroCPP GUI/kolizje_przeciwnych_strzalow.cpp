#include "headline.h"

void wykryjzm(statekprzeciwnika& statek,mojstatek& wirek){
        if(statek.strzalexist==1){
        if(((statek.xs<=wirek.xpt)&&(statek.xs>=wirek.xlt))&&((wirek.ytt<=statek.ys)&&(wirek.ytb>=statek.ys)))
        {
                wirek.zycie--;
                statek.strzalexist=0;
                statek.ys=-10;
                if(wirek.zycie==0){
                    wirek.exist=0;

            }
        }}
}

void wykryjzm2(statekprzeciwnika2& statek,mojstatek& wirek){
        if(statek.strzalexist==1){
        if(((statek.xs<=wirek.xpt)&&(statek.xs>=wirek.xlt))&&((wirek.ytt<=statek.ys)&&(wirek.ytb>=statek.ys)))
        {
                wirek.zycie--;
                statek.strzalexist=0;
                statek.ys=-10;
                if(wirek.zycie==0){
                    wirek.exist=0;

            }
        }}
}

void wykryjzmb1(bos1& statek,mojstatek& wirek){

        if(statek.strzalpexist==1){
        if(((statek.xs+45<=wirek.xpt)&&(statek.xs+45>=wirek.xlt))&&((wirek.ytt<=statek.ys+47)&&(wirek.ytb>=statek.ys+47)))
        {
                wirek.zycie--;
                statek.strzalpexist=0;
                statek.sti=statek.sti+1;
                if(wirek.zycie==0){
                    wirek.exist=0;

            }
        }}
                if(statek.strzallexist==1){
        if(((statek.xs-45<=wirek.xpt)&&(statek.xs-45>=wirek.xlt))&&((wirek.ytt<=statek.ys+47)&&(wirek.ytb>=statek.ys+47)))
        {
                wirek.zycie--;
                statek.strzallexist=0;
                statek.sti=statek.sti+1;
                if(wirek.zycie==0){
                    wirek.exist=0;

            }
        }}
                if(statek.strzalsexist==1){
        if(((statek.xs<=wirek.xpt)&&(statek.xs>=wirek.xlt))&&((wirek.ytt<=statek.ys+47)&&(wirek.ytb>=statek.ys+47)))
        {
                wirek.zycie--;
                statek.strzalsexist=0;
                statek.sti=statek.sti+1;
                if(wirek.zycie==0){
                    wirek.exist=0;

            }
        }}
        if(statek.sti==3){
            statek.ys=-10;
        }
}

void wykryjzmb2(bos2& statek,mojstatek& wirek){

        if(statek.strzalpexist==1){
        if(((statek.xs+40<=wirek.xpt)&&(statek.xs+40>=wirek.xlt))&&((wirek.ytt<=statek.ys+47)&&(wirek.ytb>=statek.ys+47)))
        {
                wirek.zycie--;
                statek.strzalpexist=0;
                statek.sti=statek.sti+1;
                if(wirek.zycie==0){
                    wirek.exist=0;

            }
        }}
                if(statek.strzallexist==1){
        if(((statek.xs-40<=wirek.xpt)&&(statek.xs-40>=wirek.xlt))&&((wirek.ytt<=statek.ys+47)&&(wirek.ytb>=statek.ys+47)))
        {
                wirek.zycie--;
                statek.strzallexist=0;
                statek.sti=statek.sti+1;
                if(wirek.zycie==0){
                    wirek.exist=0;

            }
        }}
        if(statek.sti==2){
            statek.ys=-10;
        }
}
