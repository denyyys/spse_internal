// Do pole ulozte, suda cisla z intervalu <20;50> vcetne + zobraz licha z toho pole //

#include "stm32f4xx.h"                  // Device header
#include <stdlib.h>
#include <stdio.h>

uint8_t i,j=0,pocet;

int main()
{
	while(1)
	{
		uint8_t pole_sudych[50],pole_lichych[50];
		for(i=20;i<=50;i=i+2)
		{
			pole_sudych[j]=i;
			j++;
		}
		pocet=j;
		for(j=0;j<pocet;j++)
		{
			pole_lichych[j]|=1<<pole_lichych[j];
		}
		
	
		
	
	}	
	
}