/* 
Ulozte text do souboru, ale pouze neprazdne radky 
*/
													
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	char text[100], i=0;
	
	f = fopen("data.txt","w");
	if(f == NULL)
	{
		printf("Soubor se nepodarilo nacist!");
		return -1;
	}
	
	do{
		gets(text);
		fputs(text,f);
		fputs("\n",f);
	}while(text[i]='\0');
	
	if(fclose(f)==EOF)
	{
		printf("Soubor se nepodarilo zavrit!");
	}
	
	
	
	
	
	system("pause");
	return 0;
}
