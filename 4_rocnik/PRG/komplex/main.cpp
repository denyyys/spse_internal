#include "komplex.h"

int main(){
	int volba;
	Komplex x;
	while(true){
		cout << endl << "1. nacti"<< endl;
		cout << "2. vypis"<< endl;
		cout << "3. absolut"<<endl;
		cout << "4. sdruzene" << endl;
		cout << "5. opacne" << endl;
		
		cin >> volba;
		switch (volba) {
		case 1:
			cin >> x;
			break;
		case 2:
			cout << x;
			break;
		case 3:
			cout << "----------" << endl;
			cout << x.absolut() << endl;
			cout << "----------" << endl;
			break;
		case 4:
			cout << "----------" << endl;
			cout << x.sdruzene() << endl;
			cout << "----------" << endl;
			break;
		case 5:
			cout << "----------" << endl;
			cout << x.opacne() << endl;
			cout << "----------" << endl;
			break;
		}
	};
}
