#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(){
FILE *f;
char radek[100];
int pocet=0, i, pismeno_e=0;
f=fopen("vstup.txt","r");
	
	while(fgets(radek,100,f)!=NULL)
	{
		printf("%s",radek);
		pocet++;
		for(i=0;i<strlen(radek);i++)
		{
			radek[i]=tolower(radek[i]);
			if(radek[i]=='e')
			{
				pismeno_e++;
			}
		}
	}
	
	
	printf("\n");
	
	
	fclose(f);
	printf("Pocet radku v souboru: %d\n",pocet);
	printf("Pocet Ecek je: %d.\n",pismeno_e);
	system("pause");
	return 0;
}
