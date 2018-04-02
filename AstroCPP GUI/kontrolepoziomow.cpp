#include "headline.h"
#include "str.h"

extern poziomgry poziom;

void winminus(int win){
if(win==-1){
    delay(20);
    settextstyle(BOLD_FONT,HORIZ_DIR,7);
    outtextxy(200,200,"PRZEGRALES");
    delay(3000);
    zapisstat(wirek);
    sortownik();
    pokazstat();
    przegrales();
}
}
