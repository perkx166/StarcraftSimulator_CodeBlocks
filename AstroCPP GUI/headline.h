#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include "libpq-fe.h"

#include "statekprzeciwnika.h"
#include "statekprzeciwnika2.h"
#include "mojstatek.h"
#include "bos1.h"
#include "bos2.h"

#define ESC 27
#define S 5
#define STR 20
#define F1 59

using namespace std;

class mojstatek;
class statekprzeciwnika;
class bos1;
class bos2;
class statekprzeciwnika2;

void misja1(void);
void misja1bos(void);
void misja2(void);
void misja2bos(void);

void ingr(void);

void help(void);

void wykryj(statekprzeciwnika& statek,mojstatek& wirek);
void wykryjb(bos1& statek,mojstatek& wirek);
void wykryj2(statekprzeciwnika2& statek,mojstatek& wirek);
void wykryjb2(bos2& statek,mojstatek& wirek);

void wykryjzm(statekprzeciwnika& statek,mojstatek& wirek);
void wykryjzmb1(bos1& statek,mojstatek& wirek);
void wykryjzm2(statekprzeciwnika2& statek,mojstatek& wirek);
void wykryjzmb2(bos2& statek,mojstatek& wirek);

void ruchbos1(bos1& bos,mojstatek& wirek);
void ruchbos2(bos2& bos,mojstatek& wirek);

void zyciebosa(bos1& statek);
void zyciebosa2(bos2& statek);
void zyciemoje(mojstatek& statek);

void strzal_int_b2(mojstatek& wirek,bos2& statek);

void statykazpunktami(mojstatek& wirek);
void przegrales(void);
void statyka1(void);
void statyka2(void);
void przygotuj(void);

void odczytzkl(void);

void zapism(mojstatek& wirek);
void zapis1(statekprzeciwnika& statek);
void zapis1b(bos1& statek);
void zapis2(statekprzeciwnika2& statek);
void zapis2b(bos2& statek);
void zapisp(void);

void odczytm(mojstatek& wirek);
void odczyt1(statekprzeciwnika& statek,int ktory_obiekt);
void odczyt1b(bos1& statek);
void odczyt2(statekprzeciwnika2& statek,int ktory_obiekt);
void odczyt2b(bos2& statek);
void odczytpoziom(void);

void mojakwerenda(PGconn *conn, const char *sqlCmd,string &mojstring);

void zapispBD(void);
void zapismBD(mojstatek& wirek);
void zapis1BD(statekprzeciwnika& statek,int number);
void zapis2BD(statekprzeciwnika2& statek,int number);
void zapis1bBD(bos1& statek);
void zapis2bBD(bos2& statek);

void odczytpoziomBD(void);
void odczytmBD(mojstatek& wirek);
void odczyt1BD(statekprzeciwnika& statek,int number);
void odczyt2BD(statekprzeciwnika2& statek,int number);
void odczyt1bBD(bos1& statek);
void odczyt2bBD(bos2& statek);

void zapisstat(mojstatek& wirek);
void odczytstat(void);
void sortownik(void);
void pokazstat(void);
