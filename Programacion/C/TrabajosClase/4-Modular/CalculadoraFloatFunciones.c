#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular_suma(float numero1,float numero2){
	float resultado_Suma;
	resultado_Suma = numero1 + numero2;
	printf("El resultado de la suma es: %f\n", resultado_Suma);
	return 0;
}
int calcular_resta(float numero1,float numero2){
	float resultado_Resta;
	resultado_Resta = numero1 - numero2;
	printf("El resultado de la resta es: %f\n", resultado_Resta);
	return 0;
}
int calcular_multiplicacion(float numero1,float numero2){
	float resultado_Multiplicación;
	resultado_Multiplicación = numero1 * numero2;
	printf("El resultado de la multiplicación es: %f\n", resultado_Multiplicación);
	return 0;
}
int calcular_division(float numero1,float numero2){
	float resultado_División;
	resultado_División = numero1 / numero2;
	printf("El resultado de la división es: %f\n", resultado_División);
	return 0;
}
int main(){
	float numero1;
	printf("Escribe el primer número:");
	scanf("%f", &numero1);

	float numero2;
	printf("Escribe el segundo número:");
	scanf("%f", &numero2);

	calcular_suma(numero1, numero2);
	calcular_resta(numero1,numero2);
	calcular_multiplicacion(numero1,numero2);
	calcular_division(numero1,numero2);

	return 0;
}
