#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	int suma = 0;	
	while(numero % 2 == 0){
		scanf("%d", &numero);
		suma += numero;
	}
	printf("La suma de los números ingresados es %d.\n", suma);
	return 0;
}
