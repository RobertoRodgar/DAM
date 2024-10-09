#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CalcularRaiz(){
	// Parte del calculi de una raiz cuadrada
	int valor;
	double raiz;	
	printf("Introduzca un número para calcular su raiz: \n");

	scanf("%d", &valor);
	raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %lf\n", valor,raiz);

}

int CalcularArea(){
	 double radio,area;

	 printf("Introduzca el radio de un circulo para calcular su area\n");
	 scanf("%lf", &radio);
	 area = radio * radio * M_PI; //M_PI es el valor de pi en math.h
	 printf("El area del circulo es %lf\n", area);

}

int main(){

	double radio,area;

	CalcularRaiz();

	CalcularArea();

	return 0;
}
