#include <stdio.h>
#include <stdlib.h>

int main(){
	int tamaño;
	int nuevoTam;

	printf("Introduce el tamaño deseado:\n");
	scanf("%d", &tamaño);

	int *arr = (int *)malloc(tamaño*sizeof(int));
	
	if(arr == NULL){
		printf("No se ha podido reservar la memoria.\n");
	}
	
	for(int i = 0; i < 5; i++){
		

	printf("Introduce el nuevo tamaño para la cadena:\n");
	scanf("%d", &nuevoTam);

	arr = (int *)realloc(arr, nuevoTam*sizeof(int));

	if(arr == NULL){
		printf("No se ha podido reservar la memoria\n");
	}
	free(arr);
	return 0;
}
