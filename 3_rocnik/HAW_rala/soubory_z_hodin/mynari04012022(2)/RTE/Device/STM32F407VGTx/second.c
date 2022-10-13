#include "stm32f4xx.h"                  // Device header
uint8_t i,s,l,licha[5],suda[5],pole[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},pocet;

int main()
{
	while(1)
	{
		pocet=sizeof(pole) / sizeof(uint8_t);
		for(i=0,s=0,l=0;i<pocet;i++)
		{
			if(pole[i] %2 ==0)
			{
				suda[s]=pole[i];
				s++;
			}
			
			else
			{
				licha[l]=pole[i];
				l++;
			}
		}
	}
	


}
