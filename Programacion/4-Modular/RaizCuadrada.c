#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double raiz;
	int valor;

	double radio,area;
	
	printf("Introduzca un número para calcular su raiz: \n");

	scanf("%d", &valor);
	raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %lf\n", valor,raiz);

	printf("Introduzca el radio de un circulo para calcular su area\n");
	scanf("%lf" , &radio);
	area = radio * radio * M_PI; //M_PI es el valor de pi en la libreria math.h
	printf("El area del circulo es %lf\n", area);

	return 0;
}
