#include "headline.h"
#include "str.h"

extern poziomgry poziom;
extern mojstatek wirek;

void misja2(void){

int win=0,i,x=getmaxx(),y=getmaxy();

statekprzeciwnika2 statekr1;
statekprzeciwnika2 statekr2;
statekprzeciwnika2 statek[26];

statyka1();

if(poziom.wczytaj==3){
wirek.rysujstatek();
poziom.exist=0;
statekr1.init(151,251,6+poziom.trudnosc,5,5,150,400,250,300,poziom.trudnosc);
statekr2.init(501,251,6+poziom.trudnosc,5,5,500,750,250,300,poziom.trudnosc);

x=150;
y=60;
for(i=0;i<=6;i++){
statek[i].init(x,y,5+poziom.trudnosc,4,4,0,0,0,0,poziom.trudnosc);
x=x+100;}

x=200;
y=100;
for(i=7;i<=12;i++){
statek[i].init(x,y,5+poziom.trudnosc,3,3,0,0,0,0,poziom.trudnosc);
x=x+100;}

x=150;
y=140;
for(i=13;i<=19;i++){
statek[i].init(x,y,3+poziom.trudnosc,2,2,0,0,0,0,poziom.trudnosc);
x=x+100;}

x=200;
y=180;
for(i=20;i<=25;i++){
statek[i].init(x,y,2+poziom.trudnosc,1,1,0,0,0,0,poziom.trudnosc);
x=x+100;}}

if(poziom.wczytaj==2){
settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(110,10,"Porsze czekac trwa wczytywanie..");

odczytmBD(wirek);
wirek.rysujstatek();

for(i=0;i<=25;i++){
odczyt2BD(statek[i],i);
if(statek[i].exist==1){
statek[i].rysuj();}
}

odczyt2BD(statekr1,26);
if(statekr1.exist==1){
statekr1.rysuj();}

odczyt2BD(statekr2,27);
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

for(i=0;i<=25;i++){
odczyt2(statek[i],i);
if(statek[i].exist==1){
statek[i].rysuj();}
}

odczyt2(statekr1,26);
if(statekr1.exist==1){
statekr1.rysuj();}

odczyt2(statekr2,27);
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

delay(11);

for(i=0;i<=12;i++){
if(statek[i].staticshot==1){
statek[i].mechanikastrzaluu();}}
statekr1.mechanikastrzaluu();
statekr2.mechanikastrzaluu();
wirek.mechanikastrzaluu();

wykryjzm2(statekr1,wirek);
wykryjzm2(statekr2,wirek);
for(i=0;i<=12;i++){
if(statek[i].staticshot==1){
wykryjzm2(statek[i],wirek);}}

wykryj2(statekr1,wirek);
wykryj2(statekr2,wirek);
for(i=0;i<=25;i++){
wykryj2(statek[i],wirek);}

for(i=0;i<=12;i++){
if(statek[i].staticshot==1){
statek[i].mechanikastrzalur();}}
wirek.mechanikastrzalur();
statekr1.mechanikastrzalur();
statekr2.mechanikastrzalur();

zyciemoje(wirek);

statykazpunktami(wirek);

wirek.mechanikaprzyspieszenia();

if(GetAsyncKeyState(VK_F5)){
outtextxy(110,10,"Porsze czekac trwa zapis..");
zapispBD();
zapismBD(wirek);
for(i=0;i<=25;i++){
    zapis2BD(statek[i],i);
}
zapis2BD(statekr1,26);
zapis2BD(statekr2,27);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

if(GetAsyncKeyState(VK_F7)){
outtextxy(110,10,"Porsze czekac trwa zapis..");
zapisp();
zapism(wirek);
for(i=0;i<=25;i++){
    zapis2(statek[i]);
}
zapis2(statekr1);
zapis2(statekr2);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

odczytzkl();

if(wirek.zycie==0){
    win=-1;}

if(poziom.exist==28){
    win=1;}

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
poziom.poziom=4;}

}
