#include "headline.h"
#include "str.h"

extern poziomgry poziom;/**DODANIE G£OWNEJ, ISTNIEJACEJ JUZ STRUKTURY**/
extern mojstatek wirek;/**DODANIE ISTNIEJACEGO JUZ OBIEKTU**/

void misja1(void){/**POCZATEK FUNKCJI**/
int win=0,i,x=getmaxx(),y=getmaxy();/**ZMIENNE W FUNKCJI**/

statekprzeciwnika statekr1;/**STWORZENIE RUCHOMEGO STATKU PRZECINIKA 1**/
statekprzeciwnika statekr2;/**STWORZENIE RUCHOMEGO STATKU PRZECIWNIKA 2**/
statekprzeciwnika statek[26];/**STWORZENIE 26 STATKOW PRZECIWNIKA STATYCZNYCH**/

statyka1();/**PIERWSZE STATYCZNE ELEMENTY MENU**/

if(poziom.wczytaj==3){/**GDY NIE WCZYTUJEMY GRY**/
    wirek.rysujstatek();
poziom.exist=0;
wirek.init(x/2+56,y-36,11-poziom.trudnosc,poziom.kolor);

statekr1.init(151,221,5+poziom.trudnosc,5,5,150,400,220,300,poziom.trudnosc);
statekr2.init(501,221,5+poziom.trudnosc,5,5,500,750,220,300,poziom.trudnosc);

x=150;
y=60;
for(i=0;i<=6;i++){
statek[i].init(x,y,4+poziom.trudnosc,4,4,0,0,0,0,poziom.trudnosc);
x=x+100;}

x=200;
y=100;
for(i=7;i<=12;i++){
statek[i].init(x,y,3+poziom.trudnosc,3,3,0,0,0,0,poziom.trudnosc);
x=x+100;}

x=150;
y=140;
for(i=13;i<=19;i++){
statek[i].init(x,y,2+poziom.trudnosc,2,2,0,0,0,0,poziom.trudnosc);
x=x+100;}

x=200;
y=180;
for(i=20;i<=25;i++){
statek[i].init(x,y,1+poziom.trudnosc,1,1,0,0,0,0,poziom.trudnosc);
x=x+100;}}

if(poziom.wczytaj==2){/**GDY WCZYTUJEMY GRE z bd**/
settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(110,10,"Porsze czekac trwa wczytywanie..");

odczytmBD(wirek);
wirek.rysujstatek();

for(i=0;i<=25;i++){
odczyt1BD(statek[i],i);
if(statek[i].exist==1){
statek[i].rysuj();}
}

odczyt1BD(statekr1,26);
if(statekr1.exist==1){
statekr1.rysuj();}

odczyt1BD(statekr2,27);
if(statekr2.exist==1){
statekr2.rysuj();}

poziom.wczytaj=3;
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);
}

if(poziom.wczytaj==1){/**GDY WCZYTUJEMY GRE z pliku**/
settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(110,10,"Porsze czekac trwa wczytywanie..");

odczytm(wirek);
wirek.rysujstatek();

for(i=0;i<=25;i++){
odczyt1(statek[i],i);
if(statek[i].exist==1){
statek[i].rysuj();}
}

odczyt1(statekr1,26);
if(statekr1.exist==1){
statekr1.rysuj();}

odczyt1(statekr2,27);
if(statekr2.exist==1){
statekr2.rysuj();}

poziom.wczytaj=3;
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);
}

statyka2();/**DRUGIE STATYCZNE ELEMENTY MENU**/

do{/**POCZATEK PETLI GLOWNEJ**/
wirek.ruch();/**FUNKCJE RUCHU OBIEKTOW**/
statekr1.ruch();
statekr2.ruch();

delay(11);/**OPUZNIENIE**/

for(i=0;i<=12;i++){/**USUWANIE STRZALU I JEGO MECHANIKA**/
if(statek[i].staticshot==1){
statek[i].mechanikastrzaluu();}}
statekr1.mechanikastrzaluu();
statekr2.mechanikastrzaluu();
wirek.mechanikastrzaluu();

wykryjzm(statekr1,wirek);/**WYKRYWANIE CZY STATEK PRZECIWNIKA TRAFIL WE MNIE**/
wykryjzm(statekr2,wirek);
for(i=0;i<=12;i++){
if(statek[i].staticshot==1){
wykryjzm(statek[i],wirek);}}

wykryj(statekr1,wirek);/**WYKRYWANIE CZY TRAFILEM W STATEK**/
wykryj(statekr2,wirek);
for(i=0;i<=25;i++){
wykryj(statek[i],wirek);}

for(i=0;i<=12;i++){/**RYSOWANIE STRZALU I JEGO MECHANIKA**/
if(statek[i].staticshot==1){
statek[i].mechanikastrzalur();}}
wirek.mechanikastrzalur();
statekr1.mechanikastrzalur();
statekr2.mechanikastrzalur();

zyciemoje(wirek);/**ZYCIE OBIEKTOW**/

statykazpunktami(wirek);/**ELEMENTY STATYCZNE I DYNAMICZNE PUNKTY**/

wirek.mechanikaprzyspieszenia();/**ZARZADZANIE PRZYSPIESZENIEM STATKU**/

odczytzkl();/**PODSTAWOWE PRZYCISKI**/

if(GetAsyncKeyState(VK_F5)){/**PRZYCISK ZAPISU do bd**/
outtextxy(110,10,"Porsze czekac trwa zapis..");
zapispBD();
zapismBD(wirek);
for(i=0;i<=25;i++){
    zapis1BD(statek[i],i);}
zapis1BD(statekr1,26);
zapis1BD(statekr2,27);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

if(GetAsyncKeyState(VK_F7)){/**PRZYCISK ZAPISU do pliku**/
outtextxy(110,10,"Porsze czekac trwa zapis..");
zapisp();
zapism(wirek);
for(i=0;i<=25;i++){
    zapis1(statek[i]);}
zapis1(statekr1);
zapis1(statekr2);
setfillstyle(SOLID_FILL,COLOR(5,5,15));
bar(110,10,500,40);}

if(wirek.zycie==0){/**SPRAWDZANIE CZY PRZEGRANA**/
    win=-1;}

if(poziom.exist==28){/**SPRAWDZANIE CZY WYGRANA**/
    win=1;}

}while(win==0);/**KONIEC GLOWNEJ PETLI**/

if(win==-1){/**JESLI PRZEGRALES**/
    delay(20);
    settextstyle(BOLD_FONT,HORIZ_DIR,7);
    outtextxy(200,200,"PRZEGRALES");
    delay(3000);
    zapisstat(wirek);
    sortownik();
    pokazstat();
    przegrales();}

if(win==1){/**JESLI WYGRALES**/
poziom.poziom=2;}

}/**KONIEC FUNKCJI**/
