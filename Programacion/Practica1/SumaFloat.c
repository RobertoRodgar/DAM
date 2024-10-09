#include <stdio.h>
#include <stdlib.h>

int main(){
	float numero1;
	printf("Escribe el primer número:");
	scanf("%f", &numero1);

        float numero2;
        printf("Escribe el segundo número:");
        scanf("%f", &numero2);

        float resultado_Suma;
        float resultado_Resta;
        float resultado_Multiplicación;
        float resultado_División;

        resultado_Suma = numero1 + numero2;
	resultado_Resta = numero1 - numero2;
	resultado_Multiplicación = numero1 * numero2;
	resultado_División = numero1 / numero2;

	printf("El resultado de la suma es: %f\n", resultado_Suma);
	printf("El resultado de la resta es: %f\n", resultado_Resta);
	printf("El resultado de la multiplicación es: %f\n", resultado_Multiplicación);
	printf("El resultado de la división es: %f\n", resultado_División);

	return 0;
}
