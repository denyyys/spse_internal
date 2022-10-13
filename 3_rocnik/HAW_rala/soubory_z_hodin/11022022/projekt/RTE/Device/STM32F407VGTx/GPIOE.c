// Rozsviceni a zhasnuti jedne LED na portu E
#include "stm32f4xx.h"                  // Device header

void rozsvititE()
{
	GPIOE->ODR &= ~(1 << 12);
}

void zhasnoutE()
{
	GPIOE->ODR |= (1 << 12);
}

void delay()
{
	int i;
	for(i=0;i<1000000U;i++);
}
int main(void)
{
	
	// Aktivace CLK na portu E
	RCC->AHB1ENR |= (1 << 0);	// Port E
	// Nastaveni modu (output)
	GPIOE->MODER |= (1 << 2*12);  

	
	//--- rozsviceni LED
		while(1)
		{
			rozsvititE();
			delay();			
			zhasnoutE();
			delay();				
		}	
}