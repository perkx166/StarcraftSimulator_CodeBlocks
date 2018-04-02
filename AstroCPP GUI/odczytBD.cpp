#include "headline.h"
#include "str.h"

extern poziomgry poziom;

void odczytmBD(mojstatek& wirek){
PGconn *conn;
string mojstring;

conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");
if(PQstatus(conn) == CONNECTION_OK) {

    mojakwerenda(conn, "SELECT pomocniczy FROM s149764 WHERE name = 'mojstatek' AND name2 = 'pnazwa'",mojstring);
    poziom.nazwa=mojstring;

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'ptrudnosc'",mojstring);
    poziom.trudnosc=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'pkolor'",mojstring);
    poziom.kolor=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wy'",mojstring);
    wirek.y=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wx'",mojstring);
    wirek.x=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wstrzallexist'",mojstring);
    wirek.strzallexist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wstrzalpexist'",mojstring);
    wirek.strzalpexist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wys'",mojstring);
    wirek.ys=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wxls'",mojstring);
    wirek.xls=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wxps'",mojstring);
    wirek.xps=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wpunkty'",mojstring);
    wirek.punkty=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wzycie'",mojstring);
    wirek.zycie=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wip'",mojstring);
    wirek.ip=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wpp'",mojstring);
    wirek.pp=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'pexist'",mojstring);
    poziom.exist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'mojstatek' AND name2 = 'wkolor'",mojstring);
    wirek.kolor=atoi(mojstring.c_str());
}

PQfinish(conn);
}

void odczytpoziomBD(void){
PGconn *conn;
string mojstring;
conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");
if(PQstatus(conn) == CONNECTION_OK) {

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'poziom' AND name2 = 'ppoziom'",mojstring);
    poziom.poziom=atoi(mojstring.c_str());

}

PQfinish(conn);
}

void odczyt1BD(statekprzeciwnika& statek,int number){
PGconn *conn;
string mojstring,number_str,laczenie,poczatek="SELECT value FROM s149764 WHERE name = 'statekp1",koniec;
sprintf((char*)number_str.c_str(),"%d",number);
conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");
fstream plik;
plik.open("zapis.txt",ios::out | ios::app);
if(PQstatus(conn) == CONNECTION_OK) {

    koniec="' AND name2 = 'sx'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.x=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sy'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.y=atoi(mojstring.c_str());

    koniec="' AND name2 = 'srchx'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.rchx=atoi(mojstring.c_str());

    koniec="' AND name2 = 'srchy'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.rchy=atoi(mojstring.c_str());

    koniec="' AND name2 = 'stime'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.time=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sys'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.ys=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sxs'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.xs=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sstrzalexist'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.strzalexist=atoi(mojstring.c_str());

    koniec="' AND name2 = 'skolor'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.kolor=atoi(mojstring.c_str());

    koniec="' AND name2 = 'spunkty'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.punkty=atoi(mojstring.c_str());

    koniec="' AND name2 = 'szycie'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.zycie=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sexist'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.exist=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sxrl'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.xrl=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sxrp'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.xrp=atoi(mojstring.c_str());

    koniec="' AND name2 = 'syrg'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.yrg=atoi(mojstring.c_str());

    koniec="' AND name2 = 'syrd'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.yrd=atoi(mojstring.c_str());

    koniec="' AND name2 = 'swsp'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.wsp=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sstaticshot'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.staticshot=atoi(mojstring.c_str());

}
plik.close();
PQfinish(conn);
}

void odczyt2BD(statekprzeciwnika2& statek,int number){
PGconn *conn;
string mojstring,number_str,laczenie,poczatek="SELECT value FROM s149764 WHERE name = 'statekp2",koniec;
sprintf((char*)number_str.c_str(),"%d",number);
conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");
if(PQstatus(conn) == CONNECTION_OK) {


    koniec="' AND name2 = 'sx'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.x=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sy'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.y=atoi(mojstring.c_str());

    koniec="' AND name2 = 'srchx'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.rchx=atoi(mojstring.c_str());

    koniec="' AND name2 = 'srchy'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.rchy=atoi(mojstring.c_str());

    koniec="' AND name2 = 'stime'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.time=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sys'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.ys=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sxs'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.xs=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sstrzalexist'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.strzalexist=atoi(mojstring.c_str());

    koniec="' AND name2 = 'skolor'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.kolor=atoi(mojstring.c_str());

    koniec="' AND name2 = 'spunkty'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.punkty=atoi(mojstring.c_str());

    koniec="' AND name2 = 'szycie'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.zycie=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sexist'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.exist=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sxrl'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.xrl=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sxrp'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.xrp=atoi(mojstring.c_str());

    koniec="' AND name2 = 'syrg'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.yrg=atoi(mojstring.c_str());

    koniec="' AND name2 = 'syrd'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.yrd=atoi(mojstring.c_str());

    koniec="' AND name2 = 'swsp'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.wsp=atoi(mojstring.c_str());

    koniec="' AND name2 = 'sstaticshot'";
    laczenie=poczatek+(char*)number_str.c_str()+koniec;
    mojakwerenda(conn,laczenie.c_str(),mojstring);
    statek.staticshot=atoi(mojstring.c_str());

}

PQfinish(conn);
}

void odczyt1bBD(bos1& statek){
PGconn *conn;
string mojstring;
conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");
if(PQstatus(conn) == CONNECTION_OK) {

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'sx'",mojstring);
    statek.x=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'sy'",mojstring);
    statek.y=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'ssti'",mojstring);
    statek.sti=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'srchx'",mojstring);
    statek.rchx=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'srchy'",mojstring);
    statek.rchy=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'stime'",mojstring);
    statek.time=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'sys'",mojstring);
    statek.ys=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'sxs'",mojstring);
    statek.xs=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'sstrzallexist'",mojstring);
    statek.strzallexist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'sstrzalpexist'",mojstring);
    statek.strzalpexist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'sstrzalsexist'",mojstring);
    statek.strzalsexist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'sexist'",mojstring);
    statek.exist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'spunkty'",mojstring);
    statek.punkty=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'szycie'",mojstring);
    statek.zycie=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos1' AND name2 = 'swsp'",mojstring);
    statek.wsp=atoi(mojstring.c_str());
}

PQfinish(conn);
}

void odczyt2bBD(bos2& statek){
PGconn *conn;
string mojstring;
conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");
if(PQstatus(conn) == CONNECTION_OK) {

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'sx'",mojstring);
    statek.x=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'sy'",mojstring);
    statek.y=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'ssti'",mojstring);
    statek.sti=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'srchx'",mojstring);
    statek.rchx=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'srchy'",mojstring);
    statek.rchy=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'stime'",mojstring);
    statek.time=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'sys'",mojstring);
    statek.ys=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'sxs'",mojstring);
    statek.xs=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'sstrzallexist'",mojstring);
    statek.strzallexist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'sstrzalpexist'",mojstring);
    statek.strzalpexist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'sxzlap'",mojstring);
    statek.xzlap=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'sexist'",mojstring);
    statek.exist=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'spunkty'",mojstring);
    statek.punkty=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'szycie'",mojstring);
    statek.zycie=atoi(mojstring.c_str());

    mojakwerenda(conn, "SELECT value FROM s149764 WHERE name = 'bos2' AND name2 = 'swsp'",mojstring);
    statek.wsp=atoi(mojstring.c_str());
}
PQfinish(conn);
}
