// vytvorte objekt tuzka ktera bude mit datove slozky: material, cena, tvrdost

#include <iostream>

using namespace std;

class Tuzka{
private:
	float tvrdost;
	string material;
	string firma;
	int cena;

public:
	Tuzka(); // implicitni instruktor
	Tuzka(float itvrdost); // parametricke -//-
	Tuzka(float itvrdost,string imaterial);
	Tuzka(float itvrdost,string imaterial,int icena);
	
	float DejTvrdost(){
		return tvrdost;
	};
	
	string DejMaterial(){
		return material;
	};
	
	int DejCenu(){
		return cena;
	};
	
	void Vypis();
	void Nacti();
};

Tuzka::Tuzka()
{
	tvrdost=0;
	material="";
	cena=0;
}

Tuzka::Tuzka(float itvrdost)
{
	tvrdost=itvrdost;
	material="";
	cena=0;
}

Tuzka::Tuzka(float itvrdost, string imaterial)
{
	tvrdost=itvrdost;
	material=imaterial;
	cena=0;
}

Tuzka::Tuzka(float itvrdost, string imaterial,int icena)
{
	tvrdost=itvrdost;
	material=imaterial;
	cena=icena;
}

void Tuzka::Vypis()
{
	cout << "Material: " << material << " Tvrdost: " << tvrdost << " Cena: " << cena << endl;
}

void Tuzka::Nacti()
{
	cout << "Zadej material: " << endl;
	cin >> material;
	cout << "Zadej cenu: " << endl;
	cin >> cena;
	cout << "Zadej tvrdost: " << endl;
	cin >> tvrdost;
}

int main()
{
	Tuzka t,t1(0.5),t2(1,"drevo"),t3(0.7,"kov",10);
	
	Tuzka pole[20];
	int pocet,i;
	
	t.Vypis();
	t1.Vypis();
	t2.Vypis();
	t3.Vypis();
	
	t.Nacti();
	t.Vypis();
	
	return 0;
}
