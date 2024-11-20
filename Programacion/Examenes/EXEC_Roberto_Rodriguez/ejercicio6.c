#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	
	do {
		scanf("%d", &numero);
		if (numero >= 1 && numero <= 10){
			printf("Has ingresado el número %d.\n", numero);
			break;
		} else{
			printf("Número no válido.\n");
		}

	}while (numero <=1 || numero >=10);
	
	return 0;
}
