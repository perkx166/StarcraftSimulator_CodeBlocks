#include "headline.h"
#include "str.h"

okna okno;

void ingr(void){
int error;
okno.wind=initwindow(800,600,"astroCPP",0,0,false,false);
error=graphresult();
if(error!=grOk){
printf("Blad BGI!\n");
grapherrormsg(error);
printf("Wcisnij dowolny klawisz by zamknac program.");
getch();
exit(-1);
}
}
