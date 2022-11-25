#define DELAY_STEP    750                                         // Krok v ms pro pozdrzeni programu

#define LCD_COLS      8                                          // Pocet sloupcu pouziteho displeje
#define LCD_ROWS      2                                           // Pocet radku pouziteho displeje

#define LCD_8x2 (((LCD_COLS) == 8) && ((LCD_ROWS) == 2))
#define LCD_16x2 (((LCD_COLS) == 16) && ((LCD_ROWS) == 2))

#define KEYPAD_COLS   4                                          // Pocet sloupcu pouziteho KeyPad
#define KEYPAD_ROWS   4                                           // Pocet radku pouziteho KeyPad
//#define KEYPAD_STYLE  2                                           // Vyber znaku pro keypad, mozno uzivatelsky rozsirit/menit. Pokud bude zakomnentovano, nastavi se defaultni rozlozeni

#include "stm32_kit.h"                                     // Pripojeni globalniho konfiguracniho souboru pro praci s pripravkem.                          
#include "stm32_kit/lcd.h"                                 // Pripojeni konfiguracniho souboru pro praci s LCD.
#include "stm32_kit/keypad.h" 
#include <stdio.h>// Pripojeni konfiguracniho souboru pro praci s KeyPad.
#include <stdlib.h>

#ifndef KEYPAD_STYLE
  static uint8_t KeyPad_KeyMap[KEYPAD_ROWS][KEYPAD_COLS] = {      // Defaultni rozlozeni pro 4x4 KeyPad
                            '1', '2', '3', 'A',
                            '4', '5', '6', 'B',
                            '7', '8', '9', 'C',
                            '.', '0', '#', 'D'
  };
#elif (KEYPAD_STYLE == 1)
  static uint8_t KeyPad_KeyMap[KEYPAD_ROWS][KEYPAD_COLS] = {      // Alternativni rozlozeni pro 4x4 KeyPad
                            'a', 'b', 'c', 'd',
                            'e', 'f', 'g', 'h',
                            'i', 'j', 'k', 'l',
                            'm', 'n', 'o', 'p'
  };
#elif (KEYPAD_STYLE == 2)
  static uint8_t KeyPad_KeyMap[KEYPAD_ROWS][KEYPAD_COLS] = {      // Alternativni rozlozeni pro 4x4 KeyPad
                            'q', 'r', 's', 't',
                            'u', 'v', 'w', 'x',
                            'y', 'z', '[', ']',
                            '.', ',', '-', '='
  };
#endif
	
	BOARD_SETUP void setup(void) {
  SystemCoreClockUpdate();                                      // Do SystemCoreClock se nahraje frekvence jadra.
  SysTick_Config(SystemCoreClock / 10000);                      // Konfigurace SysTick timeru.
  LCD_setup();                                                  // Pocatecni inicializace LCD, nutne pro dalsi praci s LCD.
  KeyPad_setup();                                               // Pocatecni inicializace keypadu, nutne pro dalsi praci s keypad.
}
	
int main (void){
			int i,t=0;
			float cena_on,cena_95,cena,tank,vysl_cena; 
			char pom[20],vypis1[20],vypis2[20];
			uint8_t znak;
	
while(1)
{
	/*Zadavani ceny nafty*/
	LCD_set(LCD_LINE1);
	LCD_print("CENA ON:");
	
	LCD_set(LCD_LINE2);
	i=0;
	
		while(znak!= '#'){
		 do{
        znak = KeyPad_getKey();
      } while(!znak);
		 
		 /*osetreni desetinne tecky */
		 if(znak=='.'){
			 t++;
		 }
		 /*zapis do pomocneho pole*/
		 
		 if(t<=1){
			 if(znak!= '#'){
					LCD_symbol(znak);
					pom[i]=znak;
					i++;
				}
			 else{
				 pom[i]='\0';
		 } 
	 }
	}
	/*prevedeni pomocneho pole na cislo*/
	cena_on=atof(pom);
	delay(1000);
	
	/*smazani LCD*/
	LCD_set(LCD_LINE1);
	delay(200);
	LCD_set(LCD_CLR);
	delay(200);
	LCD_set(LCD_LINE2);
	delay(200);
	LCD_set(LCD_CLR);
	delay(200);
	
	/*vycisteni pomocneho pole*/
	for(i=0;i<8;i++){
		pom[i]=' ';
	}
	
	/*vycisteni znaku*/
	znak=' ';
	
	
	/*Zadavani ceny benzinu*/
	LCD_set(LCD_LINE1);
	LCD_print("CENA 95:");
	
	LCD_set(LCD_LINE2);
	i=0;
	t=0;
	
		while(znak!= '#'){
		 do{
        znak = KeyPad_getKey();
      } while(!znak);
		 
		 /*osetreni desetinne tecky */
		 if(znak=='.'){
			 t++;
		 }
		 /*zapis do pomocneho pole*/
		 
		 if(t<=1){
			 if(znak!= '#'){
					LCD_symbol(znak);
					pom[i]=znak;
					i++;
				}
			 else{
				 pom[i]='\0';
		 } 
	 }
	}
		
	/*prevedeni pomocneho pole na cislo*/
	cena_95=atof(pom);
	delay(500);
	
	/*smazani LCD*/
	LCD_set(LCD_LINE1);
	delay(200);
	LCD_set(LCD_CLR);
	delay(200);
	LCD_set(LCD_LINE2);
	delay(200);
	LCD_set(LCD_CLR);
	delay(200);
	
	/*vycisteni znaku*/
	znak=' ';
	
	/*vyber paliva*/
	LCD_set(LCD_LINE1);
	LCD_print("1. PB95");
	LCD_set(LCD_LINE2);
	LCD_print("2. ON");
	
	do{
        znak = KeyPad_getKey();
      } while(!znak);
	
	/*urceni ceny kterou budeme pouzivat*/
	if(znak=='1'){
		cena=cena_95;
	}
	else if(znak=='2'){
		cena=cena_on;
	}
	
	/*vycisteni znaku*/
	znak=' ';
	
	/*smazani LCD*/
	LCD_set(LCD_LINE1);
	delay(200);
	LCD_set(LCD_CLR);
	delay(200);
	LCD_set(LCD_LINE2);
	delay(200);
	LCD_set(LCD_CLR);
	delay(200);
		
		LCD_set(LCD_LINE1);
		LCD_print("START 4");
		LCD_set(LCD_LINE2);
		LCD_print("STOP  5");
	/*tankovani*/
	do{
        znak = KeyPad_getKey();
      } while(znak != '4');
	if(znak=='4'){
		tank=0;
			/*vycisteni znaku*/
				znak=' ';
			/*smazani LCD*/
			LCD_set(LCD_LINE1);
			delay(200);
			LCD_set(LCD_CLR);
			delay(200);
			LCD_set(LCD_LINE2);
			delay(200);
			LCD_set(LCD_CLR);
			delay(200);
		/*smycka pro tankovani*/
		do{
			tank=tank+0.1;
			LCD_set(LCD_LINE1);
			sprintf(pom,"  %.2f",tank);
			LCD_print(pom);
			delay(1000);
			znak=KeyPad_getKey();
		}while(znak != '5');
		
	/*vycisteni pomocneho pole*/
	for(i=0;i<8;i++){
		pom[i]=' ';
	}
	/*vycisteni pomocneho pole*/
	for(i=0;i<8;i++){
		vypis1[i]=' ';
	}
	/*vycisteni pomocneho pole*/
	for(i=0;i<8;i++){
		vypis2[i]=' ';
	}
	
		
	/*smazani LCD*/
	LCD_set(LCD_LINE1);
	delay(200);
	LCD_set(LCD_CLR);
	delay(200);
	LCD_set(LCD_LINE2);
	delay(200);
	LCD_set(LCD_CLR);
	delay(200);
	
	/*vypis litru*/
	LCD_set(LCD_LINE1);
	sprintf(vypis1,"  %.2f",tank);
	LCD_print(vypis1);
	LCD_set(LCD_LINE2);
	vysl_cena=tank*cena;
	sprintf(vypis2,"  %.2f",vysl_cena);
	LCD_print(vypis2);
		
	}
	
		
	delay(2000);
	/*smazani LCD*/
			LCD_set(LCD_LINE1);
			delay(200);
			LCD_set(LCD_CLR);
			delay(200);
			LCD_set(LCD_LINE2);
			delay(200);
			LCD_set(LCD_CLR);
			delay(200);
}
}