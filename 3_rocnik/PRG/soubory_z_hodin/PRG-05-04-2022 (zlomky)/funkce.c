#include "hlavicka.h"

Tzlomek nacteni(){
	
	Tzlomek x;
	printf("Zadej citatele zlomku: ");
	scanf("%d",&x.citatel);
	printf("Zadej jmenovatele zlomku: ");
	scanf("%d",&x.jmenovatel);
	return x;
}

void vypis(Tzlomek x){
	printf("%d/%d",x.citatel,x.jmenovatel);
}

Tzlomek secteni(Tzlomek x,Tzlomek y)
{
	Tzlomek soucet;
	soucet.jmenovatel=x.jmenovatel*y.jmenovatel;
	soucet.citatel=x.citatel*y.jmenovatel+y.citatel*x.jmenovatel;
	
	return soucet;
}

Tzlomek odcitani(Tzlomek x,Tzlomek y)
{
	Tzlomek odecet;
	odecet.jmenovatel=x.jmenovatel*y.jmenovatel;
	odecet.citatel=x.citatel*y.jmenovatel-y.citatel*x.jmenovatel;
	
	return odecet;
}
