#include "hlavicka.h"

int main() {
	int volba;
	Tkomplex cpx1, cpx2, sumCpx, minusCpx;
	
	do {
		printf("\n-----------------------\n");
		printf("0. Konec\n");
		printf("1. Nacteni\n");
		printf("2. Vypis\n");
		printf("3. Soucet\n");
		printf("4. Odecet\n");
		printf("Zadej volbu: ");
		scanf("%d",&volba);
		printf("\n-----------------------\n");
		getchar();
		
		switch(volba) {
			case 1: {
				cpx1 = nacistComplex1();
				cpx2 = nacistComplex2();
				break;
			}
			
			case 2: {
				printf("Prvni cislo:\n");
				printf("realne: %.1f\n imaginarni: %.1f\n", cpx1.real, cpx1.imag);
			
				printf("Druhe cislo:\n");
				printf("realne: %.1f\n imaginarni: %.1f\n", cpx2.real, cpx2.imag);
				break;
			}
			
			case 3: {
				sumCpx = plusComplex(cpx1, cpx2);
				printf("\nSoucet cisel je: %.1f + %.1fi", sumCpx.real, sumCpx.imag);
				break;
			}
			
			case 4: {
				minusCpx = minusComplex(cpx1, cpx2);
				
				if(minusCpx.imag > 0) {
					printf("\nRozdil cisel je: %.1f - %.1fi", minusCpx.real, minusCpx.imag);	
				} else {
					printf("\nRozdil cisel je: %.1f  %.1fi", minusCpx.real, minusCpx.imag);	
				}
				
			}
		}
			
	}while(volba!=0);
	
	return 0;
}
