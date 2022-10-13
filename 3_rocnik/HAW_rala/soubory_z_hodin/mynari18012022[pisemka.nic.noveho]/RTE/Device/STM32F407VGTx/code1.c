#include "stm32f4xx.h"                  // Device header

uint8_t i,JED,DES,STO,pom,pole[]={170,255,187};


int main()
{
	while(1)
	{
		pom=sizeof(pole) / sizeof(uint8_t);
		for(i=0;i<pom;i++)
		{
			STO=pole[i]/100;
			pom=pole[i]%100;
			DES=pole[i]/10;
			JED=pole[i]%10;
		}
	}

}
