#include "stm32f4xx.h"                  // Device header

int leds[4]={0,0,0,0};

void prevod(int c)
{
	leds[0] = (c &(1 << 0)) >> 0;
	leds[1] = (c &(1 << 0)) >> 0;
	leds[2] = (c &(1 << 0)) >> 0;
	leds[3] = (c &(1 << 0)) >> 0;
}

void zobraz()
{
	int i;
	for (i=0; i<4; i++)
	{
		if (leds[i] == 1)
		{
			GPIOD->ODR |= (1UL << (12 + i));
		}
		else{
			GPIOD->ODR &=~ (1UL << (12 + 1));
		}
	}
}

void delay()
{
	int i;
	for(i=0;i<1000000;i++);
}

int main()
{
	
	// Aktivace CLK na portu D 
	RCC->AHB1ENR |= (1UL << 3);	// Port D
	// Nastaveni modu (output)
	GPIOD->MODER |= (1UL << 2*12);
	GPIOD->MODER |= (1UL << 2*13);
	GPIOD->MODER |= (1UL << 2*14);
	GPIOD->MODER |= (1UL << 2*15);

	
	//--- rozsviceni LED
		while(1)
		{
			prevod(0);
			zobraz();
			delay();
			
			prevod(15);
			zobraz();
			delay();
		}	

	
	return 0;
}
