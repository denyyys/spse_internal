#ifndef KOMPLEX_H
#define KOMPLEX_H

#include <iostream>
#include <cmath>

using namespace std;

class Komplex {
public:
	Komplex();
	Komplex(float r, float i);
	
/*  void nacti();
	void vypis();
*/
	
	friend ostream &operator<<(ostream &vystup, Komplex x);
	friend istream &operator>>(istream &vstup, Komplex &x);
	
	float absolut();
	
	Komplex sdruzene();
	Komplex opacne();
	
	
private:
	float re, im;
};

#endif
