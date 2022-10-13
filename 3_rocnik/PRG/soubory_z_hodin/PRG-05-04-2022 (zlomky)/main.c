#include "hlavicka.h"

int main()
{
	Tzlomek x,y,z;
	x=nacteni();
	vypis(x);
	y=nacteni();
	vypis(y);
	z = secteni(x,y);
	vypis(z);
	
	return 0;
}
