/*
	Stopky
	- 3 tasky (button, time, lcd)
	- nahore furt bezi - dole zastaven cas
*/

#define KEYPAD_COLS   4                                           
#define KEYPAD_ROWS   4

#define LCD_COLS    8                                  
#define LCD_ROWS    2

#include <RTL.h>
#include <stdio.h>
#include <stdlib.h>
#include "stm32_kit.h"
#include "stm32_kit/led.h"
#include "stm32_kit/lcd.h"
#include "stm32_kit/keypad.h"

static uint8_t KeyPad_KeyMap[KEYPAD_ROWS][KEYPAD_COLS] = {      // Defaultni rozlozeni pro 4x4 KeyPad
                            '1', '2', '3', 'A',
                            '4', '5', '6', 'B',
                            '7', '8', '9', 'C',
                            '*', '0', '#', 'D'
};



OS_TID taskID1;
OS_TID taskID2;
OS_TID taskID3;

int sec=0,min=0,ms=0;
int stop=0;

__task void button(void) {
    for (;;) {
				
        //os_tsk_pass (); 
    }
}

__task void time(void){
    for (;;) {
				int i;
			
				do{
					delay_ms(1);
					ms += 1;
					if(ms >= 60){
						ms = 0;
						sec += 1;
					}
					if(sec >= 59){
						sec = 0;
						min += 1;
					}
				}while(stop!=1);
			

				/*do{
					sec += 1;
					delay(450);
						if(sec >= 59){
						sec = 0;
						min += 1;
						}
				}while(!stop); */
				
        //os_tsk_pass (); 
    }
}

__task void lcd(void){
    for (;;) {
				char sec_conv[2];
				char min_conv[2];
				char ms_conv[2];
				sprintf(sec_conv,"%02d",sec);
				sprintf(min_conv,"%02d",min);
				sprintf(ms_conv,"%02d",ms);
			
				LCD_set(LCD_CUR_NO_BLINK);
				LCD_set(LCD_LINE1);
				LCD_print(min_conv);
				LCD_print(":");
				LCD_print(sec_conv);
				LCD_print(":");
				LCD_print(ms_conv);
			
				
				
        //os_tsk_pass (); 
    }
}



__task void board_init(void) {
	
    LED_setup();
		LCD_setup();
    
    taskID1 = os_tsk_create(time, 0);
    taskID2 = os_tsk_create(button, 0);
		taskID3 = os_tsk_create(lcd, 0);

    os_tsk_delete_self (); // Delete the init(self) task
}

int main(void) {
    os_sys_init(board_init);
}