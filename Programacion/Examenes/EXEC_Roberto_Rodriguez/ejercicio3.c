#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	scanf("%d", &numero);
	
	(numero % 2 == 0) ? printf("El número %d es par.\n", numero):printf("El número %d es impar.\n", numero);
	return 0;
}
