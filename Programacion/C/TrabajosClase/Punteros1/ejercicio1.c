#include <stdio.h>
#include <stdlib.h>

int main (){
	float x = 1.5;
	float *p;

	p = &x;
	printf("Valor de la variable x: %0.1f\n", x);
	printf("Direccion de la variable x: %p\n", p);
	printf("Valor del puntero: %0.1f\n", *p);

	return 0;
}
