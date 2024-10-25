#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int digito;
	int resultado = 0;

	printf("Introduce el numero: ");
	scanf("%d", &num);

	while (num > 0){
		digito = num % 10;
		resultado += digito;
		num /= 10;
	}
	printf("El resultado es: %d\n", resultado);
	return 0;
}
