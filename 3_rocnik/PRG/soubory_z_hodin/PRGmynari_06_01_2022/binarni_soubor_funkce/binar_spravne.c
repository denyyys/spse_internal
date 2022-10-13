/* Funkce pro naètení hodnot do pole,
   uložení do binárního souboru
   pøeètení z binárního souboru
   maximum pole uložte do TXT     */
   
   
#include <stdio.h>
#include <stdlib.h>

void nacteni(int pocet, int pole[]);
void uloz_b_s(int pocet, int pole[]);
void vypis_pole(int pocet, int pole[]);
int cteni_b_s(int pole[]);

int main()
{
	int p[20],volba,n;
	//nabidka ? //
	
	
	printf("Zadej pocet prvku v poli\n");
	scanf("%d",&n);
	nacteni(n,p);
	uloz_b_s(n,p);
	
	
	printf("Vypis\n");
	printf("------------------\n");
	n=cteni_b_s(p);
	printf("\n----------------\n");
	system("pause");
	
	
	
	
	return 0;
}


void nacteni(int pocet, int pole[])
{
	int i;
	for(i=0;i<pocet;i++)
	{
		printf("Zadej prvek pole\n");
		scanf("%d",&pole[i]);
	}
}

void uloz_b_s(int pocet,int pole[])
{
	FILE *f;
	int i;
	f = fopen("numbers.dat","wb");
	// Osetreni
		for(i=0;i<pocet;i++)
		{
			fwrite(&pole[i],sizeof(int),1,f);
		}
		fclose(f);
}

int cteni_b_s(int pole[])
{
	FILE *f;
	int i=0;
	f=fopen("numbers.dat","rb");
	// Osetreni
	while(fread(&pole[i],sizeof(int),1,f) == 1);
	{
		printf("%d",pole[i]);
		i++;
	}
	fclose(f);
	return i;
	
}










