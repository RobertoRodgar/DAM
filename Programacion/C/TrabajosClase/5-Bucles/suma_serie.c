#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	int i;
	int suma = 0;
	printf("Introdcuce el numero que quieres calcular su serie: ");
	scanf(" %d", &numero);	
	for (i = 0; i <= numero; i++){
		suma +=i;
	}
	printf("El resultado es: %d\n", suma);
	return 0;
}
