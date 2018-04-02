#include "headline.h"
#include "str.h"

extern poziomgry poziom;
extern mojstatek wirek;

void misja1bos(void){

int win=0;
poziom.poziom=2;

statekprzeciwnika statekr1;
statekprzeciwnika statekr2;
bos1 bos;

statyka1();

if(poziom.wczytaj==3){
    wirek.rysujstatek();
statekr1.init(151,251,8+poziom.trudnosc,5,5,150,400,220,300,poziom.trudnosc);
statekr2.init(501,251,8+poziom.trudnosc,5,5,500,750,220,300,poziom.trudnosc);
bos.init(251,81,45*poziom.trudnosc,10,poziom.trudnosc);}

if(poziom.wczytaj==2){

settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(110,10,"Porsze czekac trwa wczytywanie..");

odczytmBD(wirek);
wirek.rysujstatek();

odczyt1bBD(bos);
bos.rysuj();

odczyt1BD(statekr1,0);
if(statekr1.exist==1){
statekr1.rysuj();}

odczyt1BD(statekr2,1);
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

odczyt1b(bos);
bos.rysuj();

odczyt1(statekr1,0);
if(statekr1.exist==1){
statekr1.rysuj();}

odczyt1(statekr2,1);
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
ruchbos1(bos,wirek);

delay(11);

statekr1.mechanikastrzaluu();
statekr2.mechanikastrzaluu();
bos.mechanikastrzaluu();
wirek.mechanikastrzaluu();

wykryjzm(statekr1,wirek);
wykryjzm(statekr2,wirek);
wykryjzmb1(bos,wirek);

wykryj(statekr1,wirek);
wykryj(statekr2,wirek);
wykryjb(bos,wirek);

statekr1.mechanikastrzalur();
statekr2.mechanikastrzalur();
bos.mechanikastrzalur();
wirek.mechanikastrzalur();

zyciemoje(wirek);
zyciebosa(bos);

statykazpunktami(wirek);

wirek.mechanikaprzyspieszenia();

if(GetAsyncKeyState(VK_F5)){
outtextxy(110,10,"Porsze czekac trwa zapis..");
zapispBD();
zapismBD(wirek);
zapis1BD(statekr1,0);
zapis1BD(statekr2,1);
zapis1bBD(bos);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

if(GetAsyncKeyState(VK_F7)){
outtextxy(110,10,"Porsze czekac trwa zapis..");
zapisp();
zapism(wirek);
zapis1(statekr1);
zapis1(statekr2);
zapis1b(bos);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

odczytzkl();

if(wirek.zycie==0){
    win=-1;}

if(bos.exist==0){
    win=1;
    wirek.zycie=wirek.zycie+5;
        while(wirek.zycie>10){
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
poziom.poziom=3;}

}
