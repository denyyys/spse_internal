// vytvorte objekt tuzka ktera bude mit datove slozky: material, cena, tvrdost

#include <iostream>
#include <fstream>

using namespace std;

class Tuzka{
private:
	float tvrdost;
	string material;
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
	void Uloz();
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

void Hledat(int pocet)
{
	Tuzka p[10];
	int i, priznak=0;
	string matr;
	
	cout << "Hledej material"<< endl;
	cin >> matr;
	for(i=0;i<pocet;i++){
		if(matr==p[i].DejMaterial()){
			p[i].Vypis();
			priznak++;
		}
	}
	if(priznak==0){
		cout << "Nic nebylo nalezeno!" << endl;
	}
}

void Hledej_cislo(int pocet)
{
	Tuzka p[10];
	int i,priznak=0;
	int tvrd;
	
	cout <<"Hledej tvrdost"<<endl;
	cin>>tvrd;
	for(i=0;i<pocet;i++)
	{
		
		if(tvrd==p[i].DejTvrdost())
		{
			p[i].Vypis();
			priznak++;
		}
		
		
	}
	if(priznak == 0)
	{
		cout << "Nebylo nalezeno" << endl;
	}
}
void Tuzka::Uloz()
{
	ofstream out;
	out.open("temp.txt",ios::app);
		out<< material << 'x' <<tvrdost<<endl;
	out.close();
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
	
	t3.Uloz();
	
	Hledej_cislo(2);
	

	
	return 0;
}
