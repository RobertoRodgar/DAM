#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void imprimirVocales(char * palabra);

int main (){

	char * palabra = "murcielago";
	imprimirVocales(palabra);
	return EXIT_SUCCESS;
}

void imprimirVocales(char * palabra){
	if(palabra == '\0'){
		return;
	}
	char letra = tolower(palabra);
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		printf("%c", palabra);
	}
	imprimirVocales(palabra++);
	return;
}