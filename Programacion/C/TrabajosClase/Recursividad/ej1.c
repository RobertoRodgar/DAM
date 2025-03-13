#include <stdio.h>
#include <stdlib.h>

int contar_consonantes(char * string, int tam, int contador, int posicion);

int main(){
	int tam = 0;
	int contador = 0;
	int posicion = 0;

	printf("Introduce el tamaño de la cadena: \n");
	scanf("%d", &tam);

	char * string = (char *)malloc(tam + 1 * sizeof(char));
	if(string == NULL){
		printf("Error, no se pudo reservar memoria\n");
		return 0;
	}

	printf("Introce una palabra del mismo tamaño: ");
	scanf("%s", string);

	int resultado = contar_consonantes(string, tam, contador, posicion);
	printf("Hay un total de %d consonantes.\n", resultado);
	free(string);
	return 0;
}
int contar_consonantes(char * string, int tam, int contador, int posicion){
	if (posicion >= tam){
		return contador;
	}
	if (string[posicion] == '\0'){
		return contador;
	}

	if(string[posicion] != 'A' && string[posicion] != 'E' && string[posicion] != 'I' && string[posicion] != 'O' && string[posicion] != 'U' && string[posicion] != 'a' && string[posicion] != 'e' && string[posicion] != 'i' && string[posicion] != 'o' && string[posicion] != 'u'){
		posicion += 1;
		contador += 1;
		contador = contar_consonantes(string, tam, contador, posicion);
	}else{
		posicion += 1;
		contador = contar_consonantes(string, tam, contador, posicion);	
	}

	return contador;
}