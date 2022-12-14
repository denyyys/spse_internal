/*
	Stopky
	- 3 tasky (button, time, lcd) -> button NEMOZNY bo mi nekdo ujebal vsechny tlactika
	- nahore furt bezi - dole zastaven cas -> NEFUNGUJE !
*/

#define KEYPAD_COLS   4                                           
#define KEYPAD_ROWS   4

#define LCD_COLS    8                                  
#define LCD_ROWS    2

#define KEY_DEBOUNCE (250)

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

OS_SEM guard;

int sec  = 0;
int min  = 0;
int ms   = 0;
int stop = 0;

__task void button(void) {
    for (;;) {
	    if (!io_read(USER_BUTTON) {
		    continue;
	    }
	    os_sem_wait(&guard, 0xFFFF); // 0xFFFF -> wait forever

	    	LCD_set(LCD_CUR_NO_BLINK);
	    	LCD_set(LCD_LINE1); 
		
		char line[9];
		snprintf(line, 9, "%02d:%02d:%02d", sec, min, ms);
		LCD_print(line);

	    os_sem_send(&guard);
	    delay_ms(KEY_DEBOUNCE);
    }
}

__task void time(void) {
    for (;;) {
	int i;
	do {
		delay_ms(1);
		ms += 1;
		if (ms >= 60) {
			ms = 0;
			sec += 1;
		}
		if (sec >= 59) {
			sec = 0;
			min += 1;
		}
	} while (stop != 1);
    }
}

__task void lcd(void) {
    for (;;) {
	    
	os_sem_wait(&guard, 0xFFFF); // 0xFFFF -> wait forever
	LCD_set(LCD_CUR_NO_BLINK);
	LCD_set(LCD_LINE1);
	    
	    
#ifdef NAIVE_IMPLEMENTATION
	char sec_conv[2];
	char min_conv[2];
	char ms_conv[2];
	sprintf(sec_conv,"%02d",sec);
	sprintf(min_conv,"%02d",min);
	sprintf(ms_conv,"%02d",ms);
	LCD_print(min_conv);
	LCD_print(":");
	LCD_print(sec_conv);
	LCD_print(":");
	LCD_print(ms_conv);
#else
	char line[9];
	snprintf(line, 9, "%02d:%02d:%02d", sec, min, ms);
	LCD_print(line);
#endif
	os_sem_send(&guard);
    }
}

__task void board_init(void) {
	LED_setup();
	LCD_setup();
    
    	taskID1 = os_tsk_create(time,   0);
    	taskID2 = os_tsk_create(button, 0);
	taskID3 = os_tsk_create(lcd,    0);
	
	os_sem_init(&guard, 1);
	os_sem_send(&guard);

	os_tsk_delete_self (); // Delete the init(self) task
}

int main(void) {
	os_sys_init(board_init);
}
