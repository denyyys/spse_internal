// do promenne v postupne uloz hodnoty z pole

#include "stm32f4xx.h"                  // Device header
uint8_t i,v,pole[]={100,25,3,255},pocet;

int main()
{
	while(1)
	{
		pocet=sizeof(pole)/sizeof(uint8_t);
		for(i=0;i<pocet;i++)
		{
			v=pole[i];
		}
	}


}
