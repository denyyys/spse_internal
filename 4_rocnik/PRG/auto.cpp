// auta
// eviduj SPZ (char)
// typ auta
// cena auta


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Auto{
private:
	string SPZ;
	string typ;
	double cena;

public:
	Auto(string spz, string typ, double cena){
		this->SPZ = spz;
		this->typ = typ;
		this->cena = cena;
	}
	
	void pridej_auto(string spz, string typ, double cena){
		this->SPZ = spz;
		this->typ = typ;
		this->cena = cena;
	}
	
	void vypis_auto(){
		cout << this->SPZ << " " << this->typ << " " << this->cena << endl;
	}
	
	string get_spz(){
		return this->SPZ;
	}
	string get_typ(){
		return this->typ;
	}
	double get_cena(){
		return this->cena;
	}
	
	void nacti_soubor(string filename, Auto** auta, int& auta_num){
		ifstream file(filename);
		if (file.is_open()){
			auta_num = 0;
			while(file >> auta[auta_num]->SPZ >> auta[auta_num]->typ >> auta[auta_num]->cena){
				auta_num++;
			}
			file.close();
		}else{
			cout << "nepodarilo se otevrit soubor" << endl;
		}
	}
	
	void uloz_soubor(string filename, Auto** auta, int auta_num){
		ofstream file(filename);
		if (file.is_open()){
			for(int i=0;i<auta_num;i++){
				file << auta[i]->get_spz() << " " << auta[i]->get_typ() << " " << auta[i]->get_cena() << endl;
			}
			file.close();
		}else{
			cout << "nepodarilo se otevrit soubor" << endl;
		}
	}
};

int main(){
	Auto* auta[100];
	int auta_num = 0;
	
	while(true){
		cout << "1. pridej" << endl;
		cout << "2. vypis seznam" << endl;
		cout << "3. exit" << endl;
		cout << "volba: ";
		
		int volba;
		cin >> volba;
		
		if(volba == 1){
			string spz;
			cout << "Zadej SPZ: ";
			cin >> spz;
			
			string typ;
			cout << "Zadej typ: ";
			cin >> typ;
			
			double cena;
			cout << "Zadej cenu: ";
			cin >> cena;
			
			Auto* car = new Auto(spz,typ,cena);
			auta[auta_num] = car;
			auta_num++;
		}else if(volba == 2){
			for(int i = 0;i < auta_num; i++){
				auta[i]->vypis_auto();
			}
		}else if(volba == 5){
			break;
		}else if(volba == 3){
			string filename;
			cout << "Zadej nazev souboru: ";
			cin >> filename;
			
			// nacti_soubor(filename, auta, auta_num);
		}
		else{
			cout << "neplatna volba" << endl;
		}
	}
	return 0;
}
