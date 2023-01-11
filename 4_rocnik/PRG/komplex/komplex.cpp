#include "komplex.h"

Komplex::Komplex(){
	re = 0;
	im = 1;
}

Komplex::Komplex(float r, float i){
	re = r;
	im = i;
}

/*void Komplex::nacti(){
	cout << "\n realna cast: ";
	cin >> this->re;
	cout << "imaginar cast: ";
	cin >> this->im;
}

void Komplex::vypis(){
	if(this->im >= 0){
		cout << re << "+" << im << "i" << endl;
	}else{
		cout << re << im << "i" << endl;
	}
}*/

float Komplex::absolut(){
	return sqrt(re *re + im *im);
}

Komplex Komplex::sdruzene(){
	return Komplex(re, -im);
}
Komplex Komplex::opacne(){
	return Komplex(-re, -im);
}

ostream &operator<<(ostream &vystup, Komplex x){
	if(x.im >= 0){
		cout << "----------" << endl;
		vystup << x.re << "+" << x.im << "i" <<endl;
		cout << "----------" << endl;
	}
	else{
		cout << "----------" << endl;
		vystup << x.re << x.im << "i" <<endl;
		cout << "----------" << endl;
	}
}
istream &operator>>(istream &vstup, Komplex &x){
	cout << endl << "realne: ";
	vstup >> x.re;
	cout << "imaginarni: ";
	vstup >> x.im;
	return vstup;
}	
