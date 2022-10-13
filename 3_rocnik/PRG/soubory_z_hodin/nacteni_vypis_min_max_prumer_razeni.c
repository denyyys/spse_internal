#include <stdio.h>
#include <stdlib.h>

void nacti_pole(int pole[], int pocet);
void vypis_pole(int pole[], int pocet);
int min(int pole[], int pocet);
int max(int pole[], int pocet);
int pridani(int pole[], int pocet);
int zruseni(int pole[], int pocet, int pozice);
float prumer(int pole[], int pocet);
void razeni_vz(int pole[], int pocet);

int main(){

int volba, pocet, pole[50], pozice;

do{
	printf("\n\n------\n");
	printf("0-Konec\n");
	printf("------\n");
	printf("1-Nacteni pole\n");
	printf("2-Vypis pole\n");
	printf("3-Minimum pole\n");
	printf("4-Maximum pole\n");
	printf("5-Pridani prvku\n");
	printf("6-Zruseni prvku\n");
	printf("7-Prumerna hodnota\n");
	printf("8-Vzestupne serazeni");
	printf("------\n");
	printf("VOLBA: ");

	scanf("%d", &volba);
	
	switch(volba){
		case 1:
			printf("Zadej pocet prvku: ");
			scanf("%d", &pocet);
			nacti_pole(pole,pocet);
			break;
		case 2:
			vypis_pole(pole,pocet);
			break;
		case 3:
			printf("Nejmensi prvek pole: %d\n", min(pole,pocet));
			break;
		case 4:

			printf("Nejvetsi prvek pole: %d\n", max(pole,pocet));
			break;
		case 5:
			pocet=pridani(pole,pocet);
			vypis_pole(pole,pocet);
			break;
		case 6:
			printf("Zadej pozici prvku: ");
			scanf("%d", &pozice);
			pocet=zruseni(pole,pocet, pozice);
			vypis_pole(pole,pocet);
			break;
		case 7:
		
			printf("Prumerna hodnota: %.2f\n", prumer(pole,pocet));
			break;
		case 8:
			printf("Serazeni\n");
			razeni_vz(pole, pocet);
			vypis_pole(pole, pocet);
			break;
	}
}while(volba!=0);

return 0;
}

void nacti_pole(int pole[], int pocet){
	int i;
	for(i=0; i<pocet; i++){
		printf("Zadejte hodnotu: ");
		scanf("%d", &pole[i]);
	}
}

void vypis_pole(int pole[], int pocet){
	int i;
	for(i=0; i<pocet;i++){
		printf("%5d", pole[i]);
	}
}

int min(int pole[], int pocet){
 	int min_pole, i;
 	
 	min_pole=pole[0];
	for(i=1;i<pocet;i++){
		if(pole[i]<min_pole){
			min_pole=pole[i];
		}
	}
	return min_pole;
}

int max(int pole[], int pocet){
	int max_pole, i;
 
 	max_pole=pole[0];
	for(i=1;i<pocet;i++){
		if(pole[i]>max_pole){
			max_pole=pole[i];
		}
	}
	return max_pole;
}

int pridani(int pole[], int pocet){
	int i, hodnota;
	
	printf("Zadej hodotu pro pridani: ");
	scanf("%d", &hodnota);
	pole[pocet]=hodnota;
	pocet+=1;
	return pocet;
}
int zruseni(int pole[], int pocet, int pozice){
	pole[pozice]=pole[pocet-1];
	pocet-=1;
	return pocet;
}
float prumer(int pole[], int pocet){
	int i;
	float soucet=0;
	for(i=0; i<pocet;i++){
		soucet+=pole[i];
	}
	return soucet/pocet; //pokud delim cele cislo celym cislem, musim pretypovat na float.
}
void razeni_vz(int pole[], int pocet)
{
	int i,pom,zamena=1;
	do{
		zamena=0;
		for(i=0;i<pocet-1;i++)
		{
			if(pole[i]>pole[i+1])
			{
				zamena=1;
				pom=pole[i];
				pole[i]=pole[i+1];
				pole[i+1]=pom;
			}
		}
		
	}while(zamena==1);
}


















