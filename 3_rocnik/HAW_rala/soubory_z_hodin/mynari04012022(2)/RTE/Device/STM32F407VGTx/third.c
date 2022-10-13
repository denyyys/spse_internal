#include "stm32f4xx.h"   
uint8_t i,d,j,s,pom,pole[]={1,2,3,4,5,6,7,8,9,10}

int main()
{
	while(1)
	{
		pocet=sizeof(pole) / sizeof(uint_8_t);
		for(i=0;i<pocet;i++)
		{
			s=pole[i]/100;
			pom=pole[i]%100;
			d=pole[i]/10;
			j=pole[i]%10;
		}
	}

}
