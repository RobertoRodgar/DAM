#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
		printf("Introdcuce el numero que quieres calcular sus divisores: ");
		scanf("%d", &numero);	
	int i;
	printf("Los divisores son: ");
	for (i= 1; i < numero; i++){
		if (numero % i == 0){
			printf("%d, ", i);
		}
	}
	printf("%d.\n", i);
	return 0;

}
