#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50

void nacteniPole(int pole[N], int pocet);
void vypisPole(int pole[N], int pocet);
void razeniVzestupne(int pole[N], int pocet);

int volba;
int main(){
	int p[N], pocet;
 	do
 	{
 		printf("0 - Konec\n");
 		printf("1 - Nacteni pole\n");
 		printf("2 - Vypis pole\n");
 		scanf("%d", &volba);
 		switch(volba)
 		{
 			case 1:
 				printf("Zadejte pocet (max. %d): ", N);
				scanf("%d", &pocet);	
 				nacteniPole(p,pocet);
 				break;
 			
 			case 2:
 				vypisPole(p, pocet);
 				break;
		 }
	 }while(volba!=0);
 	
 	
 	
	system("pause");		
 	return 0;
 }
 
void nacteniPole(int pole[N], int pocet)
{
	int i;
	srand( (unsigned) time(NULL) );
	for (i=0; i<pocet; i++)
	 {
		pole[i] = rand() % 21;
	 }
 } 


void vypisPole(int pole[N], int pocet)
{
	int i;
	printf("Vygenerovane pole:\n");
	 for (i=0; i<pocet; i++)
	 {
		printf("%d ", pole [i]);
	 }
	 
	printf("\n\n");
}

void razeniVzestupne()
{
	
}









