#include <stdio.h>
#include <stdlib.h>

char capitalizar(char letra_minuscula){
	char letra_mayuscula;

	printf("Escribe una minúscula: ");
	scanf("%c", &letra_minuscula);
	letra_mayuscula = letra_minuscula - 'a' + 'A';
	printf("La mayúscula es: %c\n", letra_mayuscula);
}

int main(){
	char letra_minuscula;

	capitalizar(letra_minuscula);
	return 0;
}
