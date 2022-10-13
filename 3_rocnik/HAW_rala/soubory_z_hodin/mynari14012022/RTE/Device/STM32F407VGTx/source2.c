/*
	v logickem analyzatoru zobraz obdelnik
*/

#include "stm32f4xx.h"                  // Device header

uint8_t i,j,out1;

void delay()
{
	for(i=0;i<50;i++);
}
int main()
{
	while(1)
	{
		for(j=0;j<10;j++)
		{
			out1=0xff; // 0xFF = 255
			delay();
			out1=0; // 0 = 0
			delay();
		}
	}
}