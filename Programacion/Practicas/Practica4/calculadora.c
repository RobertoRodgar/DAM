#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1, num2, resultado; 
	char operador;
	printf("Introduce el primer número:\n");
	scanf("%i", &num1);
	
	printf("Introduce el segundo número:\n");
	scanf("%i", &num2);
	
	printf("Introduce el operador:\n");
	scanf(" %c", &operador);

	switch (operador){

		case '+':
		resultado= num1 + num2;
		printf("La suma es: %i\n", resultado);
		break;
	
		case '-':
		resultado= num1 - num2;
		printf("La resta es: %i\n", resultado);
		break;	
		
		case '*':
		resultado= num1 * num2;
		printf("La multiplicación es: %i\n", resultado);
		break;

		case '/':
		resultado= num1 / num2;
		printf("La división es es: %i\n", resultado);
		break;
		default:
		printf("Operador no válido");
	}
}
