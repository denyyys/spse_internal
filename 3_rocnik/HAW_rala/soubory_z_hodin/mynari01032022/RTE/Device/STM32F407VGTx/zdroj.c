#include "stm32f4xx.h"                  // Device header


void delay(int cas){

	int i;
	for(i=0;i<cas;i++);

}


int main()
{
	// Zapnuti portu atd.
	int i;
	RCC->AHB1ENR |=(1UL << 3); // aktivace bar. led port D
	
	for(i=12;i<16;i++)
	{
		GPIOD->MODER |= (1<<(2*i));
	}
	
	// Main program
	
	while(1){
	
		
		GPIOD->BSRR = (1<<12); // zelena
		GPIOD->BSRR = (1<<13); // oranzova
		GPIOD->BSRR = (1<<14); // cervena
		
		
		int zmack;
		
		GPIOD->BSRR = (1<<14);
		delay(10000000);
		GPIOD->BSRR = (1<<13);
		delay(10000000);
		GPIOD->BSRR = (1<<30); // vypnuti cervene
		GPIOD->BSRR = (1<<29); // vypnuti oranzove
		GPIOD->BSRR = (1<<12);
		delay(1000000000);
		
		
	}
	
	return 0;
}

