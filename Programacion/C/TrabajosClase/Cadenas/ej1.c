#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[100];
	int numero;
	char reemplazo;

	printf("Introduzca una palabra: ");
	scanf("%s", str1);

	printf("Introduce que posición deseas cambiar: ");
	scanf(" %i", &numero);

	printf("Introduce el caracter que deseas cambiar: ");
	scanf(" %c", &reemplazo);
	
	str1[numero - 1] = reemplazo;

	printf("La nueva palabra es: %s\n", str1);

	return 0;
}
