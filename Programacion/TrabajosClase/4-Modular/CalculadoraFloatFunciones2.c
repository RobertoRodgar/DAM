#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular_suma(float numero1,float numero2){
	float resultado_Suma;
	resultado_Suma = numero1 + numero2;
	printf("El resultado de la suma es: %f\n", resultado_Suma);
}
int calcular_resta(float numero1,float numero2){
	float resultado_Resta;
	resultado_Resta = numero1 - numero2;
	printf("El resultado de la resta es: %f\n", resultado_Resta);
}
int calcular_multiplicacion(float numero1,float numero2){
	float resultado_Multiplicación;
	resultado_Multiplicación = numero1 * numero2;
	printf("El resultado de la multiplicación es: %f\n", resultado_Multiplicación);
}
int calcular_division(float numero1,float numero2){
	float resultado_División;
	resultado_División = numero1 / numero2;
	printf("El resultado de la división es: %f\n", resultado_División);
}
int main(){

	char pregunta;
	float numero1;
	printf("Escribe el primer número:");
	scanf("%f", &numero1);

	float numero2;
	printf("Escribe el segundo número:");
	scanf("%f", &numero2);

	printf("Que operacion deseas hacer?(s=sumar, r=restar, m=multiplicar y d=dividir)\n");
	scanf(" %c", &pregunta);
	
	if (pregunta == 's'){
		calcular_suma(numero1, numero2);
	} else if (pregunta == 'r'){
		calcular_resta(numero1, numero2);
	} else if (pregunta == 'm'){
		calcular_multiplicacion(numero1, numero2);
	} else if (pregunta == 'd'){
		calcular_division(numero1, numero2);
	} else {
		printf("Escribe una de las opciones");
	}

	return 0;
}
