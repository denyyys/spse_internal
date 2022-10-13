// Rozsviceni jedne LED na portu D 
#include "stm32f4xx.h"                  // Device header

void delay()
{
	int i;
	for(i=0;i<1000000U;i++);
}
int main(void)
{
	
	// Aktivace CLK na portu D 
	RCC->AHB1ENR |= (1UL << 3);	// Port D
	// Nastaveni modu (output)
	GPIOD->MODER |= (1UL << 2*12);

	
	//--- rozsviceni LED
		while(1)
		{
			GPIOD->ODR |= (1UL << 12) ;	// roznuti zelené LED na portu D  
			delay();			
			GPIOD->ODR &=~ (1UL << 12);	// zhasnuti zelené  LED na portu D
			delay();				
		}	
}