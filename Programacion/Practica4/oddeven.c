#include <stdio.h>
#include <stdlib.h>

	int main(){
		int numero;

		printf("Escribe tu número:\n");
		scanf("%i", &numero);

		if (numero % 2 == 0){
			printf("Tu número es par.\n");
		} else { 
			printf("Tu número es impar.\n");
		}
	
	}
