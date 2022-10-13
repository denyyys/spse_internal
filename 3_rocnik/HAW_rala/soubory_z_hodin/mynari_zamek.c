// Poznamka - BUG
// - pred dalsim pokusem zadavani hesla se musi pred tim zmacknout 1x # !!
//   jinak se zacnou cisla psat do prvniho radku


#include "stm32f4xx.h"                  // Device header
#include <stdlib.h>
#include <stdio.h>

void SysTick_Handler(void);
uint8_t getkey();
void Delay (uint32_t ms);
void LCD_config(void);
void LCD_ctrlWR(uint16_t cmd);
void LCD_dataWR(uint16_t cmd);
void LCD_ini (void);
void puts_LCD(int radek, char* ukaz);
void klavesnice_config(void);

int main(){
	
	// Promenne //
	uint8_t klavesa, pwd[] = "             ", vstup[] = "             ";
	int i = 0, pwd_pocet = 0;
	int password, vstup_uzivatele, pocet_chyb = 0, servis_mozny = 0;
	char vysledek[8], hvezdicky[8], hvezdicky1[8];
	
	SystemCoreClockUpdate();
	SysTick_Config(SystemCoreClock/10000);
	LCD_config();
	LCD_ini();
	klavesnice_config();
	
	
while(1){
		
		do{  									// Nastavovani hesla, jako spravce
			klavesa = getkey();
			if(klavesa == '#'){
				break;
			}
			else 
			{
				pwd[i] = klavesa;
				puts_LCD(1, pwd);
				
				pwd_pocet++;
				i++;		
			}
		}while(klavesa != '#');
		
		for(i = 0; i < pwd_pocet; i++) // nahrazovani cisel na hvezdicky (delay 1000ms)
		{
			hvezdicky[i] = '*';
		}
		
		Delay(1000);
		puts_LCD(1, hvezdicky);
		Delay(1000);
		i = 0;
		 
		do{										// Uzivatel zadava heslo, bud bude spravne nebo spatne
			klavesa = getkey();
			if(klavesa == '#') 
			{
				break;
			} 
			else 
			{
				vstup[i] = klavesa;
				hvezdicky1[i] = '*';
				puts_LCD(2, vstup);
				Delay(10000);
				puts_LCD(2, hvezdicky1);
				i++;		
			}
		}while(klavesa != '#');
		
		password = atoi(pwd);
		vstup_uzivatele = atoi(vstup);
		
		if (password == vstup_uzivatele) 	// Pri spravnem heslu, se zpristupni servisni rezim
		{
			strcpy(vysledek, "Vstupte");
			servis_mozny = 1;				// servisni rezim povolen/mozny	
			
			klavesa = getkey(); 		// vstup do servisniho rezimu
			if(klavesa == '*')
			{
				puts_LCD(1,"SERVIS  ");
				
			}
		} 
		else if(pocet_chyb == 3)					// 3 spatny pokus => alarm
		{
			puts_LCD(1,"ALARM!  ");
			puts_LCD(2,"ALARM!  ");
		}
		
		else 
		{
			strcpy(vysledek, "Chyba");
			pocet_chyb++;
		}
		puts_LCD(2, vysledek);
	}
	
	
	
	return 0;
}
