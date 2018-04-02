#include "headline.h"
#include "str.h"

extern poziomgry poziom;

void zapisp(void){
fstream plik;
plik.open("zapis.txt",ios::out);
plik<<"poziom"<<endl;
plik<<poziom.poziom<<endl;
plik.close();
}

void zapism(mojstatek& wirek){
fstream plik;
plik.open("zapis.txt",ios::out | ios::app);
plik<<"mojstatek"<<endl;
plik<<poziom.nazwa<<endl;
plik<<poziom.trudnosc<<endl;
plik<<poziom.kolor<<endl;
plik<<wirek.y<<endl;
plik<<wirek.x<<endl;
plik<<wirek.strzallexist<<endl;
plik<<wirek.strzalpexist<<endl;
plik<<wirek.ys<<endl;
plik<<wirek.xls<<endl;
plik<<wirek.xps<<endl;
plik<<wirek.punkty<<endl;
plik<<wirek.zycie<<endl;
plik<<wirek.ip<<endl;
plik<<wirek.pp<<endl;
plik<<poziom.exist<<endl;
plik<<wirek.kolor<<endl;
plik.close();
}

void zapis1(statekprzeciwnika& statek){
fstream plik;
plik.open("zapis.txt",ios::out | ios::app);
plik<<"statekp1"<<endl;
plik<<statek.x<<endl;
plik<<statek.y<<endl;
plik<<statek.rchx<<endl;
plik<<statek.rchy<<endl;
plik<<statek.time<<endl;
plik<<statek.ys<<endl;
plik<<statek.xs<<endl;
plik<<statek.strzalexist<<endl;
plik<<statek.kolor<<endl;
plik<<statek.punkty<<endl;
plik<<statek.zycie<<endl;
plik<<statek.exist<<endl;
plik<<statek.xrl<<endl;
plik<<statek.xrp<<endl;
plik<<statek.yrg<<endl;
plik<<statek.yrd<<endl;
plik<<statek.wsp<<endl;
plik<<statek.staticshot<<endl;
plik.close();
}

void zapis1b(bos1& statek){
fstream plik;
plik.open("zapis.txt",ios::out | ios::app);
plik<<"bos1"<<endl;
plik<<statek.x<<endl;
plik<<statek.y<<endl;
plik<<statek.sti<<endl;
plik<<statek.rchx<<endl;
plik<<statek.rchy<<endl;
plik<<statek.time<<endl;
plik<<statek.ys<<endl;
plik<<statek.xs<<endl;
plik<<statek.strzallexist<<endl;
plik<<statek.strzalpexist<<endl;
plik<<statek.strzalsexist<<endl;
plik<<statek.exist<<endl;
plik<<statek.punkty<<endl;
plik<<statek.zycie<<endl;
plik<<statek.wsp<<endl;
plik.close();
}

void zapis2(statekprzeciwnika2& statek){
fstream plik;
plik.open("zapis.txt",ios::out | ios::app);
plik<<"statekp2"<<endl;
plik<<statek.x<<endl;
plik<<statek.y<<endl;
plik<<statek.rchx<<endl;
plik<<statek.rchy<<endl;
plik<<statek.time<<endl;
plik<<statek.ys<<endl;
plik<<statek.xs<<endl;
plik<<statek.strzalexist<<endl;
plik<<statek.kolor<<endl;
plik<<statek.punkty<<endl;
plik<<statek.zycie<<endl;
plik<<statek.exist<<endl;
plik<<statek.xrl<<endl;
plik<<statek.xrp<<endl;
plik<<statek.yrg<<endl;
plik<<statek.yrd<<endl;
plik<<statek.wsp<<endl;
plik<<statek.staticshot<<endl;
plik.close();
}

void zapis2b(bos2& statek){
fstream plik;
plik.open("zapis.txt",ios::out | ios::app);
plik<<"bos2"<<endl;
plik<<statek.x<<endl;
plik<<statek.y<<endl;
plik<<statek.sti<<endl;
plik<<statek.rchx<<endl;
plik<<statek.rchy<<endl;
plik<<statek.time<<endl;
plik<<statek.ys<<endl;
plik<<statek.xs<<endl;
plik<<statek.strzallexist<<endl;
plik<<statek.strzalpexist<<endl;
plik<<statek.xzlap<<endl;
plik<<statek.exist<<endl;
plik<<statek.punkty<<endl;
plik<<statek.zycie<<endl;
plik<<statek.wsp<<endl;
plik.close();
}

