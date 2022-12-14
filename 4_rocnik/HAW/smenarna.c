/*
	smenarna
		- prepsane z puvodniho do new kitu
		- zabugovane extrem -> asi problem s prioritou ci co, hazi to ty klikihaky pri zadavani castky, uz si nepamatuji jak to solvnout sri
		- lepsi pred kazdou novou smenou dat RESET jinak se objevuji na displeji hodnoty z predchozi smeny
		
		=> kdo se nudi muze fixnut
		
		=> NEDOPORUCUJI! pouzit v hodine, ledaze jsi uz mega zoufaly
*/
#define LCD_COLS      8                                          
#define LCD_ROWS      2

#define KEYPAD_COLS   4                                           
#define KEYPAD_ROWS   4

#include "stm32_kit.h"                                   
#include "stm32_kit/lcd.h"                                
#include "stm32_kit/keypad.h"

#include <stdio.h>
#include <stdlib.h>

static uint8_t KeyPad_KeyMap[KEYPAD_ROWS][KEYPAD_COLS] = {      
                            '1', '2', '3', 'A',
                            '4', '5', '6', 'B',
                            '7', '8', '9', 'C',
                            '.', '0', '#', 'D'
 };

BOARD_SETUP void setup(void){
	SystemCoreClockUpdate();
	SysTick_Config(SystemCoreClock / 10000);
	LCD_setup();
	KeyPad_setup();
}

int getKey(){
	uint8_t znak;
	do{
		znak = KeyPad_getKey();
	}while(!znak);
	return znak;
}

int main(void){
	int i=0,pocet=0;
	uint8_t znak;
	char castka[20],tisk[20];
	float puvodni,prevod;
	
	while(1){
		LCD_set(LCD_CLR);
		LCD_set(LCD_LINE1);
		LCD_print("Smenarna");
		delay_ms(1000);
		LCD_set(LCD_CLR);
		
		LCD_set(LCD_LINE1);
		LCD_print("Castka:");
		do{
			znak = getKey();
			castka[i] = znak;
			i++;
			if(znak == '.'){
				pocet++;
			}
			if(pocet>1){
				castka[i]='\0';
			}
			LCD_set(LCD_LINE2);
			LCD_print(castka);
		}while(znak != '#');
		
		LCD_set(LCD_CLR);
		LCD_set(LCD_LINE1);
		LCD_print("1.CZ-SH");
		LCD_set(LCD_LINE2);
		LCD_print("2.SH-CZ");
		znak = getKey();
		if(znak == '1'){
			do{
				znak = getKey();
				puvodni = atof(castka);
				prevod = puvodni*0.15;
				
				sprintf(tisk,"SH:%.2f ",prevod);
				LCD_set(LCD_CLR);
				LCD_set(LCD_LINE1);
				LCD_print(tisk);
				LCD_set(LCD_LINE2);
				LCD_print("# END");
			}while(znak != '#');
		}else{
			do{
				znak = getKey();
				puvodni = atof(castka);
				prevod = puvodni*6.70;
				
				sprintf(tisk,"CZ:%.2f ",prevod);
				LCD_set(LCD_CLR);
				LCD_set(LCD_LINE1);
				LCD_print(tisk);
				LCD_set(LCD_LINE2);
				LCD_print("# END");
			}while(znak != '#');
		}
		
		
		
	}
}
