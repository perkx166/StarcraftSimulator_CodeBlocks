#include "headline.h"
#include "str.h"

extern poziomgry poziom;

void zapispBD(void){
PGconn *conn;
string mojstring;
string poczatek="INSERT INTO s149764 values('poziom',",string1,string2,string3,koniec=")",calosc;
conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");
if(PQstatus(conn) == CONNECTION_OK) {

    mojakwerenda(conn, "DROP TABLE s149764",mojstring);
    mojakwerenda(conn, "CREATE TABLE s149764 (name  VARCHAR, name2 VARCHAR, value INTEGER, pomocniczy VARCHAR)",mojstring);
    sprintf((char*)string2.c_str(),"%d",poziom.poziom);
    string1="'ppoziom', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);
}

PQfinish(conn);
}

void zapismBD(mojstatek& wirek){
PGconn *conn;
string mojstring;
string poczatek="INSERT INTO s149764 values('mojstatek',",string1,string2,string3,koniec=")",calosc;

conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");

if(PQstatus(conn) == CONNECTION_OK) {

    sprintf((char*)string2.c_str(),"%d",0);
    string1="'pnazwa', ";
    string3=",'"+poziom.nazwa+"'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",poziom.trudnosc);
    string1="'ptrudnosc', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",poziom.kolor);
    string1="'pkolor', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.y);
    string1="'wy', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.x);
    string1="'wx', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.strzallexist);
    string1="'wstrzallexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.strzalpexist);
    string1="'wstrzalpexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.ys);
    string1="'wys', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.xls);
    string1="'wxls', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.xps);
    string1="'wxps', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.punkty);
    string1="'wpunkty', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.zycie);
    string1="'wzycie', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.ip);
    string1="'wip', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.pp);
    string1="'wpp', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",poziom.exist);
    string1="'pexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",wirek.kolor);
    string1="'wkolor', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);
}

PQfinish(conn);
}

void zapis2BD(statekprzeciwnika2& statek,int number){
PGconn *conn;
string mojstring,number_str;
sprintf((char*)number_str.c_str(),"%d",number);
string poczatek="INSERT INTO s149764 values('statekp2",stringpomoc="',",string1,string2,string3,koniec=")",calosc;

conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");

if(PQstatus(conn) == CONNECTION_OK) {

    sprintf((char*)string2.c_str(),"%d",statek.x);
    string1="'sx', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.y);
    string1="'sy', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.rchx);
    string1="'srchx', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.rchy);
    string1="'srchy', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.time);
    string1="'stime', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.ys);
    string1="'sys', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.xs);
    string1="'sxs', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.strzalexist);
    string1="'sstrzalexist', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.kolor);
    string1="'skolor', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.punkty);
    string1="'spunkty', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.zycie);
    string1="'szycie', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.exist);
    string1="'sexist', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.xrl);
    string1="'sxrl', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.xrp);
    string1="'sxrp', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.yrg);
    string1="'syrg', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.yrd);
    string1="'syrd', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.wsp);
    string1="'swsp', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.staticshot);
    string1="'sstaticshot', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);
}

PQfinish(conn);
}

void zapis1BD(statekprzeciwnika& statek,int number){
PGconn *conn;
string mojstring,number_str;
sprintf((char*)number_str.c_str(),"%d",number);
string poczatek="INSERT INTO s149764 values('statekp1",stringpomoc="',",string1,string2,string3,koniec=")",calosc;

conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");

if(PQstatus(conn) == CONNECTION_OK) {

    sprintf((char*)string2.c_str(),"%d",statek.x);
    string1="'sx', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.y);
    string1="'sy', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.rchx);
    string1="'srchx', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.rchy);
    string1="'srchy', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.time);
    string1="'stime', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.ys);
    string1="'sys', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.xs);
    string1="'sxs', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.strzalexist);
    string1="'sstrzalexist', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.kolor);
    string1="'skolor', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.punkty);
    string1="'spunkty', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.zycie);
    string1="'szycie', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.exist);
    string1="'sexist', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.xrl);
    string1="'sxrl', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.xrp);
    string1="'sxrp', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.yrg);
    string1="'syrg', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.yrd);
    string1="'syrd', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.wsp);
    string1="'swsp', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.staticshot);
    string1="'sstaticshot', ";
    string3=",'brak'";
    calosc=poczatek+(char*)number_str.c_str()+stringpomoc+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);
}

PQfinish(conn);
}

void zapis1bBD(bos1& statek){
PGconn *conn;
string mojstring;
string poczatek="INSERT INTO s149764 values('bos1',",string1,string2,string3,koniec=")",calosc;

conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");

if(PQstatus(conn) == CONNECTION_OK) {

    sprintf((char*)string2.c_str(),"%d",statek.x);
    string1="'sx', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.y);
    string1="'sy', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.sti);
    string1="'ssti', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.rchx);
    string1="'srchx', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.rchy);
    string1="'srchy', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.time);
    string1="'stime', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.ys);
    string1="'sys', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.xs);
    string1="'sxs', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.strzallexist);
    string1="'sstrzallexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.strzalpexist);
    string1="'sstrzalpexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.strzalsexist);
    string1="'sstrzalsexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.exist);
    string1="'sexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.punkty);
    string1="'spunkty', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.zycie);
    string1="'szycie', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.wsp);
    string1="'swsp', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);
}

PQfinish(conn);
}

void zapis2bBD(bos2& statek){
PGconn *conn;
string mojstring;
string poczatek="INSERT INTO s149764 values('bos2',",string1,string2,string3,koniec=")",calosc;

conn = PQconnectdb("hostaddr=153.19.44.97 port=5432 dbname=e2d user=e2d password=AiR.inF3");

if(PQstatus(conn) == CONNECTION_OK) {

    sprintf((char*)string2.c_str(),"%d",statek.x);
    string1="'sx', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.y);
    string1="'sy', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.sti);
    string1="'ssti', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.rchx);
    string1="'srchx', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.rchy);
    string1="'srchy', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.time);
    string1="'stime', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.ys);
    string1="'sys', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.xs);
    string1="'sxs', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.strzallexist);
    string1="'sstrzallexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.strzalpexist);
    string1="'sstrzalpexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.xzlap);
    string1="'sxzlap', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.exist);
    string1="'sexist', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.punkty);
    string1="'spunkty', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.zycie);
    string1="'szycie', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);

    sprintf((char*)string2.c_str(),"%d",statek.wsp);
    string1="'swsp', ";
    string3=",'brak'";
    calosc=poczatek+string1+(char*)string2.c_str()+string3+koniec;
    mojakwerenda(conn, calosc.c_str(),mojstring);
}

PQfinish(conn);
}
