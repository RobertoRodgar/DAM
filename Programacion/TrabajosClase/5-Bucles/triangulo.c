#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Introduce el numero que quieres para el triangulo: ");
	scanf("%d", &num);

	for(int fila = 1; fila <= num; fila++){
		for(int col = 1; col<=fila; col++){
			printf("%d", col);
		}
		printf("\n");
	}
	return 0;
}