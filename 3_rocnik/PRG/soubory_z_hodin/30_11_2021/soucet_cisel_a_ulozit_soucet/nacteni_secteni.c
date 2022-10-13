#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int i=0,pocet=0;
	float pole[50],soucet=0;
	FILE *f;
	f = fopen("vstup.txt", "r");
	
	if (f == NULL)
	{
		printf ("Chyba pri otevirani souboru");
		return -1;
	}

	while ( fscanf(f,"%f", &pole[i]) != EOF)
	{
		soucet+=pole[i];
		i++;
	}
	
	pocet=i;
	printf("Soucet cisel je %f", soucet);
	fclose(f);
	
	// Zápis do souboru //
	
	f = fopen("vystup.txt", "w");
	if (f == NULL)
	{
		printf("Chyba pri otevirani souboru!");
		return -1;
	}
	fprintf(f, "%f",soucet);

	
	
	
	
	
	
	
	return 0;
}
