#include "stm32_kit.h"

#define KEYPAD_COLS		4
#define KEYPAD_ROWS 	4

#include "stm32_kit/lcd.h"
#include "stm32_kit/keypad.h"

static uint8_t KeyPad_KeyMap[KEYPAD_ROWS][KEYPAD_COLS] = {      // Defaultni rozlozeni pro 4x4 KeyPad
                            '1', '2', '3', 'A',
                            '4', '5', '6', 'B',
                            '7', '8', '9', 'C',
                            '*', '0', '#', 'D'
  };

uint8_t getkey(void){
		uint8_t znak;
		do{
			znak = KeyPad_getKey();
		}while(!znak);
		return znak;
	}
	
char menu[][9] = {		//dvourozmerne pole
	"1 PNEU  ",
	"2 DIAG  ",
	"3 CHIP  ",
	"4 BALANC"
};

char menu2[][9] = {
	"SKODA   ",
	"BMW     ",
	"RENAULT ",
	"AUDI    "
};

BOARD_SETUP void setup(void) {
  SystemCoreClockUpdate();                                      // Do SystemCoreClock se nahraje frekvence jadra.
  SysTick_Config(SystemCoreClock / 10000);                      // Konfigurace SysTick timeru.
  LCD_setup();                                                  // Pocatecni inicializace LCD, nutne pro dalsi praci s LCD.
  KeyPad_setup();                                               // Pocatecni inicializace keypadu, nutne pro dalsi praci s keypad.
}

int main(void) {
	uint8_t znak;
	int i = 0;
	int i2 = 0;
    while(1){
			LCD_set(LCD_LINE1);
			LCD_print(" SERVIS");
					//switchovani v nabidce
			LCD_set(LCD_LINE2);
			LCD_print(menu[i]);
			
			znak = getkey();
			
			if(znak == '6'){
				if(i == 3){
					i = 0;
				}else{
				i++;
				}
			}else if(znak == '5'){
				if(i == 0){
					i = 3;
				}else{
				i--;
				}
			}
			
			uint8_t volba;
			volba = getkey();
			
			switch(volba){
				case '1':
						LCD_set(LCD_LINE2);
						LCD_print("potvrd");
						znak = getkey();
						if(znak == '0'){
							do{
							LCD_set(LCD_CLR);
							LCD_set(LCD_LINE2);
							LCD_print("  OK!");
							znak = getkey();
							}while(znak != '#');
						}
						break;
							
				case '3':
						LCD_set(LCD_CLR);
						LCD_set(LCD_LINE1);
						LCD_print(" tuning");
						LCD_set(LCD_LINE2);
						
						LCD_print(menu2[i2]);
						znak = getkey();
						
						if (znak == '6'){
							if(i2 == 3){
								i2 = 0;
							}else{
								i2++;
							}
						}else if(znak == '5'){
							if(i2 == 0){
								i2 = 3;
							}else{
								i2--;
							}
						}
						break;
				}
			}
		}
