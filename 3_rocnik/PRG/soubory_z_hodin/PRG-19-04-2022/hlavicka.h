#ifndef _HLAVICKA
#define _HLAVICKA

#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int citatel, jmenovatel;
	
}Tzlomek;

Tzlomek nacteni();
void vypis(Tzlomek x);
Tzlomek secteni(Tzlomek x,Tzlomek y);
Tzlomek odcitani(Tzlomek x,Tzlomek y);
Tzlomek soucin(Tzlomek x,Tzlomek y);
Tzlomek deleni(Tzlomek x,Tzlomek y);

#endif
