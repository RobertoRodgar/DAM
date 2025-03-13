#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;

	printf("Introduce el tamaño de la cadena:\n");
	scanf("%d", &numero);

	char *arr = (char *)malloc(numero*sizeof(char));
	
	if(arr == NULL){
		printf("No se ha podido reservar la memoria\n");
	}

	printf("Introduce la cadena: ");
	
	scanf("%d", &numero);
	fgets(arr, numero+1, stdin);

	printf("Tu cadena es: %s\n", arr);

	free(arr);
	return 0;
}
