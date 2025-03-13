#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	int sumar = 0;

	scanf("%d", &numero);
	for(int i = 1; i <= numero; i++){
			sumar += i;

	}

	printf("La suma de los primeros %d números es %d.\n", numero, sumar);
	return 0;
}
