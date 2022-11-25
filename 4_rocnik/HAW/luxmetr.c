/*
	Uloha - Luxmetr
	- uart.h + adc.h
*/

#include <stdlib.h>

#define LCD_COLS (8)
#define LCD_ROWS (2)

#include "stm32_kit.h"
#include "stm32_kit/led.h"
#include "stm32_kit/lcd.h"
#include "stm32_kit/adc.h" // A/D prevodnik
#include "stm32_kit/uart.h" //asynchronni seriovy prenos dat

BOARD_SETUP void setup(void){
	SystemCoreClockUpdate();
	SysTick_Config(SystemCoreClock / 10000);
	
	LED_setup();
	ADC_setup();
	LCD_setup();
	UART_setup();
}
int main(void){
	uint16_t adc_result; //16bit hodnota
	float mV, pom;
	char adc_conv[8];
	char mV_conv[3];
	
	while(1){
		
		adc_result = ADC_read(); //cteni z A/D
		mV = (adc_result / 4096.0f) * 3300.0f;   /* (output ADC / 2^12) * referencni napeti  
																									  result se podeli celkem (4096)       */
		
		sprintf(mV_conv,"%.0f",mV);
		
		LCD_set(LCD_CLR);
		LCD_set(LCD_LINE1);
		
		LCD_print(mV_conv);
		LCD_print(" mV");
		
		sprintf(adc_conv,"%u",adc_result);  // prevod na char
		LCD_set(LCD_LINE2);
		LCD_print(adc_conv);
		LCD_print(" lx");
		
		/* uz nevim pico
		
		int x = snprintf(line, 64,"{\"sample\": %4d, \"voltage\": %.0f}",adc_result,mV);
		UART_write(line,x); // odeslat pres UART sbernici
		
		*/
		
		
		delay_ms(400);
	}
}
