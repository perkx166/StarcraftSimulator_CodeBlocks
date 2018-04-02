#include "headline.h"
#include "str.h"

extern poziomgry poziom;

void wykryj(statekprzeciwnika& statek,mojstatek& wirek){
        if(wirek.strzalpexist==1){
        if(statek.exist==1){
        if((wirek.xps<=statek.xpt)&&(wirek.xps>=statek.xlt))
        {
            if(statek.yt>=wirek.ys)
            {
                statek.zycie--;
                statek.staticshot=1;
                wirek.strzalpexist=0;
                if(statek.zycie==0){
                    statek.usunstatek();
                    statek.exist=0;
                    poziom.exist=poziom.exist+1;
                    wirek.punkty=wirek.punkty+statek.punkty;
                }
            }
        }}}

        if(wirek.strzallexist==1){
        if(statek.exist==1){
        if((wirek.xls<=statek.xpt)&&(wirek.xls>=statek.xlt))
        {
            if(statek.yt>=wirek.ys)
            {
                statek.zycie--;
                statek.staticshot=1;
                wirek.strzallexist=0;
                if(statek.zycie==0){
                    statek.usunstatek();
                    statek.exist=0;
                    poziom.exist=poziom.exist+1;
                    wirek.punkty=wirek.punkty+statek.punkty;
                }
            }

        }}}
}

void wykryj2(statekprzeciwnika2& statek,mojstatek& wirek){
        if(wirek.strzalpexist==1){
        if(statek.exist==1){
        if((wirek.xps<=statek.xpt)&&(wirek.xps>=statek.xlt))
        {
            if(statek.yt>=wirek.ys)
            {
                statek.zycie--;
                statek.staticshot=1;
                wirek.strzalpexist=0;
                if(statek.zycie==0){
                    statek.usunstatek();
                    statek.exist=0;
                    poziom.exist=poziom.exist+1;
                    wirek.punkty=wirek.punkty+statek.punkty;
                }
            }
        }}}

        if(wirek.strzallexist==1){
        if(statek.exist==1){
        if((wirek.xls<=statek.xpt)&&(wirek.xls>=statek.xlt))
        {
            if(statek.yt>=wirek.ys)
            {
                statek.zycie--;
                statek.staticshot=1;
                wirek.strzallexist=0;
                if(statek.zycie==0){
                    statek.usunstatek();
                    statek.exist=0;
                    poziom.exist=poziom.exist+1;
                    wirek.punkty=wirek.punkty+statek.punkty;
                }
            }

        }}}
}

void wykryjb(bos1& statek,mojstatek& wirek){
        if(wirek.strzalpexist==1){
        if(statek.exist==1){
        if((wirek.xps<=statek.xpt)&&(wirek.xps>=statek.xlt))
        {
            if(statek.yt>=wirek.ys)
            {
                statek.zycie--;
                wirek.strzalpexist=0;
                if(statek.zycie==0){
                    statek.usunstatek();
                    statek.exist=0;
                    wirek.punkty=wirek.punkty+statek.punkty;
                }
            }
        }}}

        if(wirek.strzallexist==1){
        if(statek.exist==1){
        if((wirek.xls<=statek.xpt)&&(wirek.xls>=statek.xlt))
        {
            if(statek.yt>=wirek.ys)
            {
                statek.zycie--;
                wirek.strzallexist=0;
                if(statek.zycie==0){
                    statek.usunstatek();
                    statek.exist=0;
                    wirek.punkty=wirek.punkty+statek.punkty;
                }
            }

        }}}
}

void wykryjb2(bos2& statek,mojstatek& wirek){
        if(wirek.strzalpexist==1){
        if(statek.exist==1){
        if((wirek.xps<=statek.xpt)&&(wirek.xps>=statek.xlt))
        {
            if(statek.yt>=wirek.ys)
            {
                statek.zycie--;
                wirek.strzalpexist=0;
                if(statek.zycie==0){
                    statek.usunstatek();
                    statek.exist=0;
                    wirek.punkty=wirek.punkty+statek.punkty;
                }
            }
        }}}

        if(wirek.strzallexist==1){
        if(statek.exist==1){
        if((wirek.xls<=statek.xpt)&&(wirek.xls>=statek.xlt))
        {
            if(statek.yt>=wirek.ys)
            {
                statek.zycie--;
                wirek.strzallexist=0;
                if(statek.zycie==0){
                    statek.usunstatek();
                    statek.exist=0;
                    wirek.punkty=wirek.punkty+statek.punkty;
                }
            }

        }}}
}
