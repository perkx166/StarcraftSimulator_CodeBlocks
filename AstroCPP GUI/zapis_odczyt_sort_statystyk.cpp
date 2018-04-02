#include "headline.h"
#include "str.h"

extern poziomgry poziom;
extern okna okno;

void zapisstat(mojstatek& wirek){
fstream plik;
plik.open("statystyki.txt",ios::out | ios::app);
plik<<poziom.nazwa<<endl;
plik<<wirek.punkty<<endl;
plik.close();
}

void odczytstat(void){
fstream plik;
plik.open("statystyki.txt",ios::in);
if(plik.good()==false){
    outtextxy(10,10,"Brak statystyk.");
}else{
outtextxy(10,10,"Statystyki:");
string mojstring;
char *litery;
int i=1,y=30;
while(getline(plik,mojstring)){
switch(i){
case 1:
    litery=new char[mojstring.size()+1];
    strcpy(litery, mojstring.c_str());
    outtextxy(20,y,litery);
    delete[] litery;
    break;
case 2:
    litery=new char[mojstring.size()+1];
    strcpy(litery, mojstring.c_str());
    outtextxy(100,y,litery);
    delete[] litery;
    break;
    }
    i++;
if(i==3){
    i=1;
    y=y+20;
}}
}
plik.close();
}

void pokazstat(void){
int windh;
windh=initwindow(300,500,"Statystyki",30,30,false,false);
settextstyle(DEFAULT_FONT ,HORIZ_DIR,1);
setcurrentwindow(windh);
odczytstat();
outtextxy(20,470,"Nacisnij X by wyjsc....");
do{
}while(!GetAsyncKeyState(0x58)); //X
fflush(stdin);
closegraph(windh);
setcurrentwindow(okno.wind);
}

void sortownik(void){
    fstream plik;

    struct sort{
    string imie;
    int wynik;
    }sortuj[100],poprawka;

    int i=0,x=1,y;
    string mojstring;

    plik.open("statystyki.txt", ios::in);
    if(plik.good()==false)
    {
    outtextxy(10,10,"Blad.");
    exit(0);
    }else{
    while(getline(plik,mojstring))
    {
        switch(x){
        case 1:
            sortuj[i].imie=mojstring;
        break;
        case 2:
            sortuj[i].wynik=atoi(mojstring.c_str());
            i++;
        break;}
        x++;
        if(x==3){
            x=1;
        }
    }}
    plik.close();
    plik.clear();
if(i>1){
      for(y=0; y<i; y++){
        for(x=1; x<i; x++)
            if(sortuj[x-1].wynik<sortuj[x].wynik)
            {
                poprawka=sortuj[x-1];
                sortuj[x-1]=sortuj[x];
                sortuj[x]=poprawka;
            }}}

plik.open("statystyki.txt",ios::out);
for(x=0;x<i;x++){
plik<<sortuj[x].imie<<endl;
plik<<sortuj[x].wynik<<endl;
}
plik.close();
}
