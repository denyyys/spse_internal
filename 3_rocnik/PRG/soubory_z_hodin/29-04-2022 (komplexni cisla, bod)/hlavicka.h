#ifndef _HLAVIVCKA
#define	_HLAVICKA

#include <stdio.h>
#include <stdlib.h>

typedef struct Tkomplex {
	float real;
	float imag;
} Tkomplex;

Tkomplex nacistComplex1();
Tkomplex nacistComplex2();

Tkomplex plusComplex(Tkomplex cx1, Tkomplex cx2);
Tkomplex minusComplex(Tkomplex cx1, Tkomplex cx2);

#endif
