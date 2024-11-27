#include <stdio.h>
#include <stdlib.h>

int intercambiar(int *num1, int *num2){
	int auxilio;
	auxilio = *num1;
	*num1 = *num2;
	*num2 = auxilio;
}

int main(){
	int n1 = 10;
	int n2 = 5;
	printf("Valor de n1: %d\n", n1);
	printf("Valor de n2: %d\n", n2);
	intercambiar(&n1, &n2);
	printf("Valor de n1 cambiado: %d\n", n1);
	printf("Valor de n2 cambiado: %d\n", n2);

	return 0;
}
