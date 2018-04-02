#include "headline.h"
#include "str.h"

extern poziomgry poziom;
extern mojstatek wirek;
extern okna okno;

void misja2bos(void){

int win=0;

statekprzeciwnika2 statekr1;
statekprzeciwnika2 statekr2;
bos2 bos;

statyka1();

if(poziom.wczytaj==3){
    wirek.rysujstatek();
statekr1.init(151,251,12+poziom.trudnosc,5,5,150,400,220,300,poziom.trudnosc);
statekr2.init(501,251,12+poziom.trudnosc,5,5,500,750,220,300,poziom.trudnosc);
bos.init(251,81,90*poziom.trudnosc,10,poziom.trudnosc);}

if(poziom.wczytaj==2){
settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(110,10,"Porsze czekac trwa wczytywanie..");

odczytmBD(wirek);
wirek.rysujstatek();

odczyt2bBD(bos);
bos.rysuj();

odczyt2BD(statekr1,0);
if(statekr1.exist==1){
statekr1.rysuj();}

odczyt2BD(statekr2,1);
if(statekr2.exist==1){
statekr2.rysuj();}

poziom.wczytaj=3;
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

if(poziom.wczytaj==1){
settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(110,10,"Porsze czekac trwa wczytywanie..");

odczytm(wirek);
wirek.rysujstatek();

odczyt2b(bos);
bos.rysuj();

odczyt2(statekr1,0);
if(statekr1.exist==1){
statekr1.rysuj();}

odczyt2(statekr2,1);
if(statekr2.exist==1){
statekr2.rysuj();}

poziom.wczytaj=3;
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

statyka2();

do{
wirek.ruch();
statekr1.ruch();
statekr2.ruch();
ruchbos2(bos,wirek);

delay(11);

statekr1.mechanikastrzaluu();
statekr2.mechanikastrzaluu();
bos.mechanikastrzaluu();
wirek.mechanikastrzaluu();

wykryjzm2(statekr1,wirek);
wykryjzm2(statekr2,wirek);
wykryjzmb2(bos,wirek);

wykryj2(statekr1,wirek);
wykryj2(statekr2,wirek);
wykryjb2(bos,wirek);

statekr1.mechanikastrzalur();
statekr2.mechanikastrzalur();
strzal_int_b2(wirek,bos);
wirek.mechanikastrzalur();

zyciemoje(wirek);
zyciebosa2(bos);

statykazpunktami(wirek);

wirek.mechanikaprzyspieszenia();

if(GetAsyncKeyState(VK_F5)){
outtextxy(110,10,"Porsze czekac trwa zapis..");
zapispBD();
zapismBD(wirek);
zapis2BD(statekr1,0);
zapis2BD(statekr2,1);
zapis2bBD(bos);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

if(GetAsyncKeyState(VK_F7)){
outtextxy(110,10,"Porsze czekac trwa zapis..");
zapisp();
zapism(wirek);
zapis2(statekr1);
zapis2(statekr2);
zapis2b(bos);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

odczytzkl();

if(wirek.zycie==0){
    win=-1;}

if(bos.exist==0){
    win=1;
    wirek.zycie=wirek.zycie+5;
    while(wirek.zycie!=0){
        wirek.zycie--;
        wirek.punkty++;}}

}while(win==0);

if(win==-1){
    delay(20);
    settextstyle(BOLD_FONT,HORIZ_DIR,7);
    outtextxy(200,200,"PRZEGRALES");
    delay(3000);
    zapisstat(wirek);
    sortownik();
    pokazstat();
    przegrales();}

if(win==1){
poziom.poziom=5;
setcolor(COLOR(192,192,192));
settextstyle(BOLD_FONT,HORIZ_DIR,5);
outtextxy(200,200,"Gratulacje!");
outtextxy(200,300,"Wygrales gre!");
delay(3000);
zapisstat(wirek);
sortownik();
pokazstat();
settextstyle(DEFAULT_FONT ,HORIZ_DIR,2);
outtextxy(300,500,"By wyjsc nacisnij ESC...");
do{
}while(!GetAsyncKeyState(VK_ESCAPE)); //ESC
closegraph(okno.wind);
exit(0);}

}
