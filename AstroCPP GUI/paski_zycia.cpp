#include "headline.h"
#include "str.h"

extern poziomgry poziom;

void zyciebosa(bos1& statek){
setfillstyle(SOLID_FILL,BLACK);
bar(70,350,80,305);
setfillstyle(SOLID_FILL,RED);
bar(70,350,80,350-(statek.zycie/poziom.trudnosc));
}

void zyciebosa2(bos2& statek){
setfillstyle(SOLID_FILL,BLACK);
bar(70,350,80,305);
setfillstyle(SOLID_FILL,RED);
bar(70,350,80,350-(statek.zycie/2/poziom.trudnosc));
}

void zyciemoje(mojstatek& statek){
setfillstyle(SOLID_FILL,BLACK);
bar(60,480,70,580);
setfillstyle(SOLID_FILL,RED);
bar(60,580-(statek.zycie*10),70,580);
}
