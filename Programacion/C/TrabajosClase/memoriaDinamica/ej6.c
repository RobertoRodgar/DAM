#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	int valor;

	printf("Introduce el tamaño que quieres que tenga:\n");
	scanf("%d", &numero);

	int *arr = (int *)malloc(numero*sizeof(int));

	if(arr == NULL){
		printf("No se ha podido reservar memoria.\n");
		return 0;
	}
	for(int i = 0; i < numero; i++){
		printf("Introduce el valor que desees:\n");
		scanf("%d", &valor);
		arr[i] = valor;
	}
	for(int i = 0; i < numero; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	free(arr);
	return 0;
}
