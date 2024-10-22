#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[50];
	int numero;
	char sustituto;

	printf("Introduce la palabra: ");
	scanf(" %s", str1);

	printf("Cuantos carácteres tiene tu palabra: ");
	scanf(" %d", &numero);

	printf("Que letra quieres introducir: ");
	scanf(" %c", &sustituto);

	str1[numero] = sustituto;

	printf("Tu palabra nueva es: %s\n", str1);
	return 0;
}
