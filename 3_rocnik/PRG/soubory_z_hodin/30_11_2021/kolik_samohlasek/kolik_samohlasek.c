     /////////////////////////////////////////////////////////////
    //														   //
   // Naèti vìtu z klávesnice, zjisti kolik je tam samohlásek //
  //			 poèet ulož do TXT souboru                   //
 //															//
/////////////////////////////////////////////////////////////

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char retezec[30];
	int i,samohlasky=0;
	
	
	
	printf("Zadej vetu: ");
	gets(retezec);
	int delka = strlen(retezec);
	
	for(i=0; i<delka; i++)
	{
		retezec[i] = tolower(retezec[i]); // pøevede všechny písmena na malé aby se daly poèítat 
		switch (retezec[i])
		{
			case 'a':
			case 'e':
			case 'i':	
			case 'o':	
			case 'u': samohlasky++;
					  break;
				
				
	    }
		
	}
	printf("Pocet samohlasek ve vete je: %d", samohlasky);
	
	// Zápis dat do souboru //
	
	FILE *f;
	f = fopen("data.txt", "w");
	if (f == NULL)
	{
		printf("Chyba pri otevirani souboru!");
		return -1;
	}
	fprintf(f, "%d",samohlasky);
	
	if(fclose(f)==EOF) 
			{
			printf("soubor se nepodarilo zavrit");
   			}
		else 
				{	
				printf("\nData se ulozila do souboru");
				}	
	
	
	
	
	return 0;
}
