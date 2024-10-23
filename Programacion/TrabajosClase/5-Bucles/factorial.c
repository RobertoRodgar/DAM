#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	int i;
	int suma = 1;
	printf("Introdcuce el numero que quieres calcular su factorial: ");
	scanf(" %d", &numero);	
	for (i = 1; i <= numero; i++){
		suma *=i;
	}
	printf("El resultado es: %d\n", suma);
	return 0;
}
