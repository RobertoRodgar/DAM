#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	printf("Introdcuce el numero de asteriscos que quieres: ");
	scanf("%d", &numero);	
	for (int i = 1; i <= numero; i++){
		for (int o = 1; o<=numero; o++){
			printf("* ");
		}
	printf("\n");
	}
	return 0;
}
