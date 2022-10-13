#include "hlavicka.h"

Tkomplex nacistComplex1() {
	Tkomplex cx1;
	
	printf("Prvni komplexni cislo: \n");
	printf("Zadejte realnou cast: ");
	scanf("%f",&cx1.real);
	printf("Zadejte imaginarni cast: ");
	scanf("%f",&cx1.imag);
	
	return cx1;
}

Tkomplex nacistComplex2() {
	Tkomplex cx2;
	
	printf("Druhe komplexni cislo: \n");
	printf("Zadejte realnou cast: ");
	scanf("%f",&cx2.real);
	printf("Zadejte imaginarni cast: ");
	scanf("%f",&cx2.imag);
	
	return cx2;
}

Tkomplex plusComplex(Tkomplex cx1, Tkomplex cx2) {
	Tkomplex sumCpx;
	
	sumCpx.real = cx1.real + cx2.real;
	sumCpx.imag = cx1.imag + cx2.imag;
	
	return sumCpx;
}

Tkomplex minusComplex(Tkomplex cx1, Tkomplex cx2) {
	Tkomplex minusCx;
	
	minusCx.real = cx1.real - cx2.real;
	minusCx.imag = cx1.imag - cx2.imag;
	
	return minusCx;
}
