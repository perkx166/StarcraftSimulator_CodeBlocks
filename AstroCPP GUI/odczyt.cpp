#include "headline.h"
#include "str.h"

extern poziomgry poziom;

void odczytm(mojstatek& wirek){
fstream plik;
plik.open("zapis.txt",ios::in);
if(plik.good()==false){
    outtextxy(10,10,"Brak odczytu.");
    exit(0);
}else{
string mojstring;
int i=0;
bool id=false;
while(getline(plik,mojstring)){
if(mojstring=="mojstatek"){
    id=true;
}
if(id==true){
    switch(i){
case 0:
break;
case 1:
    poziom.nazwa=mojstring;
break;
case 2:
    poziom.trudnosc=atoi(mojstring.c_str());
break;
case 3:
    poziom.kolor=atoi(mojstring.c_str());
break;
case 4:
    wirek.y=atoi(mojstring.c_str());
break;
case 5:
    wirek.x=atoi(mojstring.c_str());
break;
case 6:
    wirek.strzallexist=atoi(mojstring.c_str());
break;
case 7:
    wirek.strzalpexist=atoi(mojstring.c_str());
break;
case 8:
    wirek.ys=atoi(mojstring.c_str());
break;
case 9:
    wirek.xls=atoi(mojstring.c_str());
break;
case 10:
    wirek.xps=atoi(mojstring.c_str());
break;
case 11:
    wirek.punkty=atoi(mojstring.c_str());
break;
case 12:
    wirek.zycie=atoi(mojstring.c_str());
break;
case 13:
    wirek.ip=atoi(mojstring.c_str());
break;
case 14:
    wirek.pp=atoi(mojstring.c_str());
break;
case 15:
    poziom.exist=atoi(mojstring.c_str());
break;
case 16:
    wirek.kolor=atoi(mojstring.c_str());
break;
    }
    i++;
    if(i==17){
        id=false;
    }
}}}
plik.close();
}

void odczyt1(statekprzeciwnika& statek,int ktory_obiekt){
fstream plik;
plik.open("zapis.txt",ios::in);
if(plik.good()==false){
    outtextxy(10,10,"Blad odczytu.");
    exit(0);
}else{
string mojstring;
int i=0,d=0;
bool id=false;
while(getline(plik,mojstring)){
if(mojstring=="statekp1"){
    if(d==ktory_obiekt){
        id=true;
    }
    d++;
}
if(id==true){
    switch(i){
case 0:
break;
case 1:
    statek.x=atoi(mojstring.c_str());
break;
case 2:
    statek.y=atoi(mojstring.c_str());
break;
case 3:
    statek.rchx=atoi(mojstring.c_str());
break;
case 4:
    statek.rchy=atoi(mojstring.c_str());
break;
case 5:
    statek.time=atoi(mojstring.c_str());
break;
case 6:
    statek.ys=atoi(mojstring.c_str());
break;
case 7:
    statek.xs=atoi(mojstring.c_str());
break;
case 8:
    statek.strzalexist=atoi(mojstring.c_str());
break;
case 9:
    statek.kolor=atoi(mojstring.c_str());
break;
case 10:
    statek.punkty=atoi(mojstring.c_str());
break;
case 11:
    statek.zycie=atoi(mojstring.c_str());
break;
case 12:
    statek.exist=atoi(mojstring.c_str());
break;
case 13:
    statek.xrl=atoi(mojstring.c_str());
break;
case 14:
    statek.xrp=atoi(mojstring.c_str());
break;
case 15:
    statek.yrg=atoi(mojstring.c_str());
break;
case 16:
    statek.yrd=atoi(mojstring.c_str());
break;
case 17:
    statek.wsp=atoi(mojstring.c_str());
break;
case 18:
    statek.staticshot=atoi(mojstring.c_str());
break;
    }
    i++;
    if(i==19){
        id=false;
    }
}}}
plik.close();
}

void odczyt2(statekprzeciwnika2& statek,int ktory_obiekt){
fstream plik;
plik.open("zapis.txt",ios::in);
if(plik.good()==false){
    outtextxy(10,10,"Blad odczytu.");
    exit(0);
}else{
string mojstring;
int i=0,d=0;
bool id=false;
while(getline(plik,mojstring)){
if(mojstring=="statekp2"){
    if(d==ktory_obiekt){
        id=true;
    }
d++;
}
if(id==true){
    switch(i){
case 0:
break;
case 1:
    statek.x=atoi(mojstring.c_str());
break;
case 2:
    statek.y=atoi(mojstring.c_str());
break;
case 3:
    statek.rchx=atoi(mojstring.c_str());
break;
case 4:
    statek.rchy=atoi(mojstring.c_str());
break;
case 5:
    statek.time=atoi(mojstring.c_str());
break;
case 6:
    statek.ys=atoi(mojstring.c_str());
break;
case 7:
    statek.xs=atoi(mojstring.c_str());
break;
case 8:
    statek.strzalexist=atoi(mojstring.c_str());
break;
case 9:
    statek.kolor=atoi(mojstring.c_str());
break;
case 10:
    statek.punkty=atoi(mojstring.c_str());
break;
case 11:
    statek.zycie=atoi(mojstring.c_str());
break;
case 12:
    statek.exist=atoi(mojstring.c_str());
break;
case 13:
    statek.xrl=atoi(mojstring.c_str());
break;
case 14:
    statek.xrp=atoi(mojstring.c_str());
break;
case 15:
    statek.yrg=atoi(mojstring.c_str());
break;
case 16:
    statek.yrd=atoi(mojstring.c_str());
break;
case 17:
    statek.wsp=atoi(mojstring.c_str());
break;
case 18:
    statek.staticshot=atoi(mojstring.c_str());
break;
    }
    i++;
    if(i==19){
        id=false;
    }
}}}
plik.close();
}

void odczyt1b(bos1& statek){
fstream plik;
plik.open("zapis.txt",ios::in);
if(plik.good()==false){
    outtextxy(10,10,"Blad odczytu.");
    exit(0);
}else{
string mojstring;
int i=0;
bool id=false;
while(getline(plik,mojstring)){
if(mojstring=="bos1"){
    id=true;
}
if(id==true){
    switch(i){
case 0:
break;
case 1:
    statek.x=atoi(mojstring.c_str());
break;
case 2:
    statek.y=atoi(mojstring.c_str());
break;
case 3:
    statek.sti=atoi(mojstring.c_str());
break;
case 4:
    statek.rchx=atoi(mojstring.c_str());
break;
case 5:
    statek.rchy=atoi(mojstring.c_str());
break;
case 6:
    statek.time=atoi(mojstring.c_str());
break;
case 7:
    statek.ys=atoi(mojstring.c_str());
break;
case 8:
    statek.xs=atoi(mojstring.c_str());
break;
case 9:
    statek.strzallexist=atoi(mojstring.c_str());
break;
case 10:
    statek.strzalpexist=atoi(mojstring.c_str());
break;
case 11:
    statek.strzalsexist=atoi(mojstring.c_str());
break;
case 12:
    statek.exist=atoi(mojstring.c_str());
break;
case 13:
    statek.punkty=atoi(mojstring.c_str());
break;
case 14:
    statek.zycie=atoi(mojstring.c_str());
case 15:
    statek.wsp=atoi(mojstring.c_str());
break;
    }
    i++;
    if(i==16){
        id=false;
    }
}}
plik.close();
}
}

void odczyt2b(bos2& statek){
fstream plik;
plik.open("zapis.txt",ios::in);
if(plik.good()==false){
    outtextxy(10,10,"Blad odczytu.");
    exit(0);
}else{
string mojstring;
int i=0;
bool id=false;
while(getline(plik,mojstring)){
if(mojstring=="bos2"){
    id=true;
}
if(id==true){
    switch(i){
case 0:
break;
case 1:
    statek.x=atoi(mojstring.c_str());
break;
case 2:
    statek.y=atoi(mojstring.c_str());
break;
case 3:
    statek.sti=atoi(mojstring.c_str());
break;
case 4:
    statek.rchx=atoi(mojstring.c_str());
break;
case 5:
    statek.rchy=atoi(mojstring.c_str());
break;
case 6:
    statek.time=atoi(mojstring.c_str());
break;
case 7:
    statek.ys=atoi(mojstring.c_str());
break;
case 8:
    statek.xs=atoi(mojstring.c_str());
break;
case 9:
    statek.strzallexist=atoi(mojstring.c_str());
break;
case 10:
    statek.strzalpexist=atoi(mojstring.c_str());
break;
case 11:
    statek.xzlap=atoi(mojstring.c_str());
break;
case 12:
    statek.exist=atoi(mojstring.c_str());
break;
case 13:
    statek.punkty=atoi(mojstring.c_str());
break;
case 14:
    statek.zycie=atoi(mojstring.c_str());
break;
case 15:
    statek.wsp=atoi(mojstring.c_str());
break;
    }
    i++;
    if(i==16){
        id=false;
    }
}}
plik.close();
}
}

void odczytpoziom(void){
fstream plik;
plik.open("zapis.txt",ios::in);
if(plik.good()==false){
    exit(0);
}else{
string mojstring;
int i=0;
bool id=false;
while(getline(plik,mojstring)){
if(mojstring=="poziom"){
    id=true;
}
if(id==true){
    switch(i){
case 0:
break;
case 1:
    poziom.poziom=atoi(mojstring.c_str());
break;
    }
    i++;
    if(i==15){
        id=false;
    }
}}
plik.close();
}
}

