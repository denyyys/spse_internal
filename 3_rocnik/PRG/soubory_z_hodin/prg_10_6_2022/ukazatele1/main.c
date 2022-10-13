#include <stdlib.h>
#include <stdio.h>
#define N 10

int main(){
	int *p_cislo = NULL;
	int i;
	p_cislo = (int *)malloc(sizeof(int) * N);

	for (i = 0; i< N; i++){
		p_cislo[i] = i + 1;
		printf("%d", p_cislo[i]);
	}
	
	free(p_cislo);

	
}
