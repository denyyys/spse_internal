#include "hlavicka.h"

int main()
{
	Tzlomek x,y,z;
	
	// Nacteni //
	
	x=nacteni();
	printf("\nPrvni zlomek: ");
	vypis(x);
	printf("\n\n");
	
	y=nacteni();
	printf("\nDruhy zlomek: ");
	vypis(y);
	printf("\n\n");
	
	// Operace //
	
	z = secteni(x,y);
	printf("Vysledek souctu: ");
	vypis(z);
	printf("\n");
	
	z = odcitani(x,y);
	printf("Vysledek odectu: ");
	vypis(z);
	printf("\n");
	
	z = soucin(x,y);
	printf("Vysledek nasobeni: ");
	vypis(z);
	printf("\n");
	
	z = deleni(x,y);
	printf("Vysledek deleni: ");
	vypis(z);
	printf("\n");
	
	return 0;
}
