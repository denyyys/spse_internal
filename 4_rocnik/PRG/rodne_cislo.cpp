// rodne cislo 05-09-31/1871
// autor: ja + atro
// bug: blbe vypisuje mesic

#include <iostream>
#include <string>

using namespace std;


int main()
{
	string r_cislo;
	string pohlavi;
	
	cout << "Zadej rodne cislo: ";
	cin >> r_cislo;
	
	if((r_cislo.size()==10) && (stoll(r_cislo)%11)==0){
		cout << "Platne rodne cislo" << endl;
	}else{
		cout << "Neplatne rodne cislo" << endl;
		exit(1);
	}
	
	if ((r_cislo[2] >= 6)){
		pohlavi = "zena";
		}else{
		pohlavi = "muz";
	}
	
	
	
	cout << "Rok: " << r_cislo[0] << r_cislo[1] << endl;
	cout << "Mesic: " << r_cislo[2] << r_cislo[3] << endl;
	cout << "Den: " << r_cislo[4] << r_cislo[5] << endl;
	cout << "Pohlavi: " << pohlavi << endl;
	
	
	return 0;
}
