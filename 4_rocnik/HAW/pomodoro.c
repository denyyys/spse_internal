/**
  ********************************************************************************************************************************************
  * @file     pomodoro.c
  * @author   denyyys + atro
  * @version  1.0
  * @date     13-January-2023
  * @brief    Pomodoro stopky s naivni implementaci
  *
  ********************************************************************************************************************************************
  * @attention
  *
  *	 								p. uciteli pls dont blame us for this solution ;)
  * 								chybi -> interrupt pro button a skipnuti roboty / prestavky
  *									delay set on 1ms because of testing in school
	*
  ********************************************************************************************************************************************
*/
#define LCD_COLS 8
#define LCD_ROWS 2

#include <RTL.h>
#include "stm32_kit.h"
#include "stm32_kit/led.h"
#include "stm32_kit/lcd.h"

OS_TID taskID1;
OS_TID taskID2;
OS_TID taskID3;
OS_TID taskID4;

int min=6,sec=0,prestavka=0,counter=0,robota_counter = 1;

__task void Pomodoro(void){
	for (;;){
		//os_tsk_pass ();
		if(prestavka == 0){								// Check  prestavka index (0) = Work (1)
			min = 6;
			sec = 0;
		do{
			delay_ms(1);
			sec -= 1;
			
			if(sec <= 0){
				sec = 59;
				min -= 1;
			}
		}while(min >= 0);
		prestavka = 1;
		min = 5;
		sec = 0;
		if(counter == 3){									// Check counter index (3) = Longer break (1)
			min = 25;
			sec = 0;
		}
	}
	}
}

__task void Pomodoro_prestavka(void){
	for (;;){
		if(prestavka == 1){								// Check prestavka index (1) = Break (1)
		do{
			delay_ms(1);
			sec -= 1;
			
			if(sec <= 0){
				sec = 59;
				min -= 1;
			}
		}while(min > 0);
		prestavka = 0;
		counter++;												// Sets counter +1 after every robota done
		robota_counter++;									// Sets robota counter +1 after every robota done
	}
	}
}

__task void Pomodoro_prestavka_long(void){
	for (;;){
		if(prestavka == 1 && counter == 3){	// Check prestavka and counter index (1) & (3) = Longer break (1)
			do{
			delay_ms(1);
			sec -= 1;
			
			if(sec <= 0){
				sec = 59;
				min -= 1;
			}
		}while(min > 0);
		prestavka = 0;
		counter = 0;												// Sets prestavka_counter back to 0
		robota_counter++;
		}
	}
}

__task void LCD(void){
	for(;;){
	LCD_set(LCD_CUR_NO_BLINK);						// Turns off blink on LCD Display
	LCD_set(LCD_CUR_OFF);									// Turns off cursor on LCD Display
	LCD_set(LCD_LINE1);
	
	
	char line[9];
	snprintf(line,9,"%02d:%02d|%d",min,sec,robota_counter);
	LCD_print(line);
	LCD_set(LCD_LINE2);
		
	if(prestavka == 0){										// Classic if prestavka = 0 => Robota
	LCD_print("robota  ");
	}
	
	if(prestavka == 1 && counter == 3){		// Classic if prestavka = 1 and counter = 3 => Poo time
		LCD_set(LCD_LINE2);
		LCD_print("poo time");
	}
	
	if(prestavka == 1 && counter != 3){		// Classic if prestavka = 1 but counter != 3 => Only kurpauza
		LCD_set(LCD_LINE2);
		LCD_print("kurpauza");
	}
	}
}

__task void board_init(void){
	LCD_setup();
	
	taskID1 = os_tsk_create(Pomodoro,0);
	taskID2 = os_tsk_create(Pomodoro_prestavka,0);
	taskID3 = os_tsk_create(LCD,0);
	
	os_tsk_delete_self();
}

int main(void){
	os_sys_init(board_init);
}