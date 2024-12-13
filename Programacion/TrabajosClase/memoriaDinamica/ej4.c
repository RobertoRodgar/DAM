#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;

	printf("Introduce cuantos número quieres para el array:\n");
	scanf("%d", &numero);

	int *arr = (int *)calloc(numero, sizeof(int));
	
	if(arr == NULL){
		printf("No se ha podido reservar memoria\n");
		return 0;
	}
	for(int i = 0; i < numero; i++){
		arr[i] = i*2;
	}
	for(int i = 0; i < numero; i++){
		printf("arr[%d]: %d\n",i , arr[i]);
	}

	printf("PARTE 2\n");
	arr = (int *)realloc(arr, 2*sizeof(arr));
	for(int i = 0; i < numero; i++){
		arr[numero + i] = 2*i + 1;
	}
	for(int i = 0; i < numero; i++){
		printf("arr[%d]: %d\n",numero + i, arr[numero + i]);
	}

	free(arr);
	return 0;
}
