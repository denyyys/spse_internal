#include <stdio.h>                                  //Inicializace knihoven
#include <stdlib.h>         
#include <string.h> 

#define CSIZE 30                                    

typedef struct data {                               //Definovani vicepolozkove promenne
    char nazev[CSIZE];
    char autor[CSIZE];
    char zanr[CSIZE];
    int rok;
}Tdata;

typedef struct film {                               //Definovani vicepolozkove promenne
    Tdata data;                                     //Vlozeni vnorene promenne
    struct film *pred, *nasl;
}Tfilm;

Tfilm *prvni = NULL;                                //Globalni promenna

void pridaniDoSeznamu(char nazev[], char autor[], char zanr[], int rok) {       //Fuknce pro pridani zaznamu na zacatek seznamu
    Tfilm *novy;                                    //Deklarace
    novy = (Tfilm*) malloc(sizeof(Tfilm));          //Alokace pameti

    if(novy == NULL) {                              //Smycka pro kontrolu nedostatku pameti                      
		printf("Nedostatek pameti !\n");                                    
		system("pause");               
		exit (1);                        
	}   

    novy->pred = NULL;                              //Nastaveni parametru noveho na vychozi NULL
    novy->nasl = NULL;

    strcpy(novy->data.nazev, nazev);                //Vlozeni dat do nove promenne
	strcpy(novy->data.autor, autor); 
	strcpy(novy->data.zanr, zanr); 
	novy->data.rok = rok; 

    if (prvni != NULL) {                            //Podminka pokud se jiz v seznamu nachazi jiny zaznam
		prvni->pred = novy;                 
		novy->nasl = prvni;           
		prvni = novy;                  
	}                                               //Podminka pokud se v seznamu zatim nic nenachazi
	else {                       
		prvni = novy;        
	}  
}
void pridaniDoSeznamuNaKonec(char nazev[], char autor[], char zanr[], int rok) {//Funkce pro pridani zaznamu na konec seznamu
    Tfilm *novy, *posl;                             //Definovani vicepolozkovych promennych
    novy = (Tfilm*) malloc(sizeof(Tfilm));          //Alokace pameti

    if(novy == NULL) {                              //Smycka pro kontrolu nedostatku pameti                      
		printf("Nedostatek pameti !\n");                                    
		system("pause");               
		exit (1);                        
	}   

    novy->pred = NULL;                              //Nastaveni parametru noveho na vychozi NULL
    novy->nasl = NULL;

    strcpy(novy->data.nazev, nazev);                //Vlozeni dat do nove promenne
	strcpy(novy->data.autor, autor); 
	strcpy(novy->data.zanr, zanr); 
	novy->data.rok = rok; 

    
    if (prvni != NULL) {                            //Podminka pokud se jiz v seznamu nachazi jiny zaznam
        posl = prvni;
        while(posl->nasl != NULL) posl = posl->nasl;
        posl->nasl = novy;
    } else {                                        //Podminka pokud se v seznamu zatim nic nenachazi
        prvni = novy;
    }
}
void vypis() {                  //Funkce pro vypis vsech polozek/filmu
    Tfilm *test;                                    //Definovani vicepolozkove promenne

    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");  
        return;
    }

    for (test = prvni; test != NULL; test = test->nasl) {       //Vypis vsech zaznamu
        printf("Nazev: %s\n", test->data.nazev);
        printf("Autor: %s\n", test->data.autor);
        printf("Zanr : %s\n", test->data.zanr);
        printf("Rok  : %d\n", test->data.rok);
        printf("|======================|\n");
    }
}
void hledani() {                //Funkce pro hledani zadaneho nazvu filmu
    Tfilm *hled;
    int je=0;
    char hledany[CSIZE];

    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");
        return;
    }

    printf("Hledany film: ");                       //Zadavani hledaneho filmu
    fflush(stdin);
    gets(hledany);


    for (hled = prvni; hled != NULL; hled = hled->nasl) {   //Smycka ktera prohledne vsechny zaznamy v seznamu
        if (strcmp(hled->data.nazev, hledany) == 0)         //Podmika, ktera se uskutecni jen kdyz se hledany nazev shoduje s nazvem v seznamu
        {
        printf("|========Vysledek======|\n");
        printf("Nazev: %s\n", hled->data.nazev);            //Vypis vsech potrebnych dat
        printf("Autor: %s\n", hled->data.autor);
        printf("Zanr : %s\n", hled->data.zanr);
        printf("Rok  : %d\n", hled->data.rok);
        printf("|========Hledani=======|\n");
        je = 1;                                     //Kontrolni promenna
        break;
        }
    }

    if (je == 0)                                    //Promenna indikujici ze se hledany nazev v seznamu nenachazi
    {
        printf("Zadany film se v databazi nenachazi\n");    
    }
    
}
int min() {                     //Funkce pro zjisteni nejstarsiho filmu
    Tfilm *pom;                                     //Deklarace vicepolozkove promenne
    int minRok;                                 
    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");
        exit (1);
    }

    minRok = prvni->data.rok;

    for (pom = prvni; pom != NULL; pom = pom->nasl) {       //Smycka projizdejici cely seznam
        if (minRok > pom->data.rok)     
        {
            minRok = pom->data.rok;
        }   
    }
    return minRok;
}
int max() {                     //Funkce pro zjisteni nejnovejsiho filmu
    Tfilm *pom;
    int maxRok;
    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");
        exit (1);
    }

    maxRok = prvni->data.rok;

    for (pom = prvni; pom != NULL; pom = pom->nasl) {       //Smycka projizdejici cely seznam
        if (maxRok < pom->data.rok)
        {
            maxRok = pom->data.rok;
        }   
    }
    return maxRok;
}
void oprava() {                 //Funkce pro upravu jednotlivych atributu zaznamu
    Tfilm *hled;
    int je=0;
    char hledany[CSIZE];
    int naUpravu = 0;
    printf("Zadejet film na upravu: ");
    fflush(stdin);
    gets(hledany);

    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");
        return;
    }

    for (hled = prvni; hled != NULL; hled = hled->nasl) {       //Smycka prochazejici vsechny zaznamy
        if (strcmp(hled->data.nazev, hledany) == 0)             //Podminka vyhledavajici shodny nazev
        {
        printf("|========Vysledek======|\n");           //Vypis o ktery zaznam se jedna
        printf("Nazev: %s\n", hled->data.nazev);
        printf("Autor: %s\n", hled->data.autor);
        printf("Zanr : %s\n", hled->data.zanr);
        printf("Rok  : %d\n", hled->data.rok);
        printf("|========Hledani=======|\n");
        system("pause");
        do
        {
            system("cls");  
            printf("0 - EXIT\n");   
            printf("1 - Nazev (%s)\n", hled->data.nazev);
            printf("2 - Autor (%s)\n", hled->data.autor);
            printf("3 - Zanr (%s)\n", hled->data.zanr);
            printf("4 - Rok (%d)\n", hled->data.rok);
            printf("Jakou informaci chcete upravit: ");
            scanf("%d", &naUpravu);                     //Vyber jaky atribut upravit 
            switch (naUpravu)                           
            {
            case 0:
                return;

            case 1:
                system("cls");
                char novyNazev[CSIZE];
                printf("Novy nazev: ");
                fflush(stdin);
                gets(novyNazev);
                strcpy(hled->data.nazev, novyNazev);
                system("cls");
                printf("Nazev byl zmenen\n");
                system("pause");
                break;

            case 2:
                system("cls");
                char novyAutor[CSIZE];
                printf("Novy autor: ");
                fflush(stdin);
                gets(novyAutor);
                strcpy(hled->data.autor, novyAutor);
                system("cls");
                printf("Autor byl zmenen\n");
                system("pause");
                break;

            case 3:
                system("cls");
                char novyZanr[CSIZE];
                printf("Novy zanr: ");
                fflush(stdin);
                gets(novyZanr);
                strcpy(hled->data.zanr, novyZanr);
                system("cls");
                printf("Zanr byl zmenen\n");
                system("pause");
                break;

            case 4:
                system("cls");
                int novyRok;
                printf("Novy rok: ");
                scanf("%d", &novyRok);
                hled->data.rok = novyRok;
                system("cls");
                printf("Rok byl zmenen\n");
                system("pause");
                break;
            
            default:
                printf("Spatne zadana hodnota\n");
                system("pause");
                break;
            }

        } while (naUpravu != 0);
        
        je = 1;
        break;
        }
    }

    if (je == 0)
    {
        printf("Zadany film se v databazi nenachazi\n");
    }
}
void smazani() {                //Funkce pro smazani zaznamu
    Tfilm *hled;
    int je=0;
    char vybrany[CSIZE];

    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");
        return;
    }

    printf("Odstranit film: ");
    fflush(stdin);
    gets(vybrany);


    for (hled = prvni; hled != NULL; hled = hled->nasl) {
        if (strcmp(hled->data.nazev, vybrany) == 0)
        {
			if(hled->pred == NULL && hled->nasl == NULL){
				prvni = NULL;
				free(hled);
                printf("Zaznam smazan\n");
                je = 1;
				break;
			}
			else if(hled->pred == NULL){
				hled->nasl->pred = NULL;
				prvni = hled->nasl;
				free(hled);
                printf("Zaznam smazan\n");
                je = 1;
				break;
			}
			else if(hled->nasl == NULL){
				hled->pred->nasl = NULL;
				free(hled);
                printf("Zaznam smazan\n");
                je = 1;
				break;
				
			}
			else {
			hled->nasl->pred = hled->pred;
			hled->pred->nasl = hled->nasl;
			free(hled);
            printf("Zaznam smazan\n");
            je = 1;
			break;
            }
        }  
    }    
    
    if (je == 0)
    {
        printf("Zadany film se v databazi nenachazi\n");
    }     
}
int pocetZaz() {                //Funkce pro zjisteni poctu zaznamu
    int pocet = 0;
    Tfilm *pom;

    for (pom = prvni; pom != NULL; pom = pom->nasl)
    {
        pocet ++;
    }
    return pocet;
}
float prumernyRok() {           //Funkce pro vypocet prumerneho roku vydani filmu
    float prumer = 0;           //Deklarace
    float pocet = pocetZaz();
    float soucet = 0;
    Tfilm *pom;

    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");
        exit (1);
    }

    for (pom = prvni; pom != NULL; pom = pom->nasl) //Smycka prochazi vsechny zaznamy
    {
        soucet = soucet + pom->data.rok;            //Pricitani oznaceneho roku k predchozimu souctu
    }
    prumer = soucet/pocet;                          //Vypocet
    return prumer;
}
int pocetPodle() {              //Funkce pro zjisteni poctu zaznamu se stejnym (libovolnym) kriteriem
    int pocet = 0;
    Tfilm *pom;
    int kriterium;

    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");
        exit (1);
    }

    do
    {
        system("cls");
        printf("0 - EXIT\n");
        printf("1 - Nazev\n");
        printf("2 - Autor\n");
        printf("3 - Zanr\n");
        printf("4 - Rok\n");
        printf("Podle jakeho kriteria: ");
        
        scanf("%d", &kriterium);
        switch (kriterium)
        {
        case 0:
            exit (1);

        case 1:
            system("cls");
            printf("Vybral jste kriterium nazev\n\n");
            printf("Zadejte nazev: ");
            fflush(stdin);
            char nazev[CSIZE];
            gets(nazev);
            for (pom = prvni; pom != NULL; pom = pom->nasl)
            {
                if (strcmp(pom->data.nazev, nazev) == 0)
                {
                pocet ++;
                }
            }
            printf("Pocet filmu se stejnym nazvem: %d\n", pocet);
            system("pause");
            break;

        case 2:
            system("cls");
            printf("Vybral jste kriterium autor\n\n");
            printf("Zadejte autora: ");
            fflush(stdin);
            char autor[CSIZE];
            gets(autor);
            for (pom = prvni; pom != NULL; pom = pom->nasl)
            {
                if (strcmp(pom->data.autor, autor) == 0)
                {
                pocet ++;
                }
            }
            printf("Pocet filmu se stejnym autorem: %d\n", pocet);
            system("pause");
            break;

        case 3:
            system("cls");
            printf("Vybral jste kriterium zanr\n\n");
            printf("Zadejte zanr: ");
            fflush(stdin);
            char zanr[CSIZE];
            gets(zanr);
            for (pom = prvni; pom != NULL; pom = pom->nasl)
            {
                if (strcmp(pom->data.zanr, zanr) == 0)
                {
                pocet ++;
                }
            }
            printf("Pocet filmu se stejnym zanrem: %d\n", pocet);
            system("pause");
            break;

        case 4:
            system("cls");
            printf("Vybral jste kriterium rok vydani\n\n");
            printf("Zadejte rok vydani: ");
            int rok;
            scanf("%d", &rok);
            for (pom = prvni; pom != NULL; pom = pom->nasl)
            {
                if (pom->data.rok == rok)
                {
                pocet ++;
                }
            }
            printf("Pocet filmu se stejnym rokem vydani: %d\n", pocet);
            system("pause");
            break;
        
        default:
            printf("Spatne zadana hodnota\n");
            system("pause");
            break;
        }

    } while (kriterium != 0);
}
void zapisDoBinSoub() {         //Funkce pro zapis zaznamu do souboru
	FILE *f;
	Tfilm *pom;
	
    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");  
        return;
    }

	f = fopen("udaje.dat", "wb");
	
	for (pom = prvni; pom != NULL; pom = pom->nasl)
	{      
		fwrite(pom, sizeof(Tfilm), 1, f);
	} 
	
	fclose(f);
}
void nacteniZBinSoub() {        //Ja nevim proc to najednou nejede, predtim vse fungovalo a nyni to dela neco co muj mozek nepobira(Jeden zaznam nacte ale vice jiz shodi program)
	
	FILE *f;
    Tdata pom;
	Tfilm *novy;
    
	
	if((f = fopen("udaje.dat", "rb")) == NULL)
    {
        printf("Soubor se nepodarilo otevrit\n");
        return;
    }
	
	while(fread(&pom, sizeof(Tfilm), 1, f)){
	
		novy = (Tfilm*) malloc(sizeof(Tfilm));
	

        if (novy == NULL)
        {
            printf("Nedostatek pameti\n");
            system("pause");
            exit (1);
        }
		
		strcpy(novy->data.nazev, pom.nazev);
        strcpy(novy->data.autor, pom.autor);
        strcpy(novy->data.zanr, pom.zanr);
        novy->data.rok = pom.rok;
        
		novy->nasl = NULL;                       
        
		if (prvni != NULL)                            
		{                                              
			prvni->pred = novy;                 
			novy->nasl = prvni;           
			prvni = novy;                  
		}                                            
		else                   
		{                       
			prvni = novy;        
		} 
         
	}
    fclose(f);
}
void razeni() {                 //Razeni mi nejede, potreboval bych se doptat na nejake detaily ohledne funkcionality prepisovani tech jednotlivych zaznamu
    Tfilm *pom;
    Tdata pomocna;

    int zamena;
    if (prvni == NULL) {                            //Kontrolni smycka pro prazdnotu seznamu
        printf("Seznam je prazdny\n");
        return;
    }

    do
    {
        zamena = 0;
        for (pom = prvni; pom->nasl != NULL; pom = pom->nasl)
        {
            if (pom->data.rok > pom->nasl->data.rok)
            {
                pomocna = pom->data;
                pom->data = pom->nasl->data;
                pom->nasl->data = pomocna;
                zamena = 1;
            }
            
        }
        
    } while (zamena == 1);

}


int main () {                   //Uzivatelska nabidka a volani jednotlivych funkci
    int volba = 0;              //Deklarace promennych
    char nazevFil[CSIZE];
    char autorFil[CSIZE];
    char zanrFil[CSIZE];
    int rokFil;
    int rok;

    //Uzivatelska nabidka
    do
    {
        system("cls");
        printf("0 - EXIT\n");
        printf("1 - Pridani na zacatek seznamu\n");
        printf("2 - Pridani na konec seznamu\n");
        printf("3 - Vypis\n");
        printf("4 - Vyhledavani\n");
        printf("5 - Nejnovejsi film(max)\n");
        printf("6 - Nejstarsi film(min)\n");
        printf("7 - Uprava dat\n");
        printf("8 - Odstraneni\n");
        printf("9 - Pocet filmu v seznamu\n");
        printf("10 - Prumerny rok vydani\n");
        printf("11 - Pocet podle kriteria\n");
        printf("12 - Zapis do bin. souboru\n");
        printf("13 - Nacteni z bin. souboru\n");
        printf("14 - Serazeni seznamu podle roku vydani\n");

        printf("Zadejte vasi volbu: ");
        scanf("%d", &volba);

        switch (volba)
        {
        case 0:
            break;
        case 1:
            system("cls");
            printf("----------------\n");
            printf("Nazev: ");
            fflush(stdin);
            gets(nazevFil);
            printf("Autor: ");
            fflush(stdin);
            gets(autorFil);
            printf("Zanr: ");
            fflush(stdin);
            gets(zanrFil);
            printf("Rok natoceni: ");
            scanf("%d", &rokFil);

            pridaniDoSeznamu(nazevFil, autorFil, zanrFil, rokFil);

            system("pause");
            break;
        case 2:
            system("cls");
            printf("----------------\n");
            printf("Nazev: ");
            fflush(stdin);
            gets(nazevFil);
            printf("Autor: ");
            fflush(stdin);
            gets(autorFil);
            printf("Zanr: ");
            fflush(stdin);
            gets(zanrFil);
            printf("Rok natoceni: ");
            scanf("%d", &rokFil);

            pridaniDoSeznamuNaKonec(nazevFil, autorFil, zanrFil, rokFil);

            system("pause");
            break;

        case 3:
            system("cls");
            printf("----------------\n");
            vypis();
            system("pause");
            break;

        case 4:
            system("cls");
            printf("----------------\n");
            hledani();
            system("pause");
            break;

        case 5:
            system("cls");
            printf("----------------\n");
            rok = max();
            printf("Nejnovejsi film je z roku: %d\n", rok);
            system("pause");
            break;

        case 6:
            system("cls");
            printf("----------------\n");
            rok = min();
            printf("Nejstarsi film je z roku: %d\n", rok);
            system("pause");
            break;

        case 7:
            system("cls");
            printf("----------------\n");
            oprava();
            system("pause");
            break;

        case 8:
            system("cls");
            printf("----------------\n");
            smazani();
            system("pause");
            break;

        case 9:
            system("cls");
            printf("----------------\n");
            int pocet = pocetZaz();
            printf("Pocet filmu je: %d\n", pocet);
            system("pause");
            break;

        case 10:
            system("cls");
            printf("----------------\n");
            float prumer = prumernyRok();
            printf("Prumerny rok vydani filmu: %.2f\n", prumer);
            system("pause");
            break;

        case 11:
            system("cls");
            printf("----------------\n");
            pocetPodle();
            system("pause");
            break;

        case 12:
            system("cls");
            printf("----------------\n");
            zapisDoBinSoub();
            printf("Seznam byl ulozen do bin. souboru\n");
            system("pause");
            break;

        case 13:
            system("cls");
            printf("----------------\n");
            nacteniZBinSoub();
            printf("Nacteni ze souboru probehlo uspesne\n");
            system("pause");
            break;

        case 14:
            system("cls");
            printf("----------------\n");
            razeni();
            printf("Serazeni probehlo uspesne\n");
            system("pause");
            break;

        default:
            printf("Spatne zadana volba\n");
            system("pause");
            break;
        }
        
    } while (volba != 0);

    system("pause");
    return 0;
}