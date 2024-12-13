#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 3;
	int *arr = (int *)calloc(n, sizeof(int));
	if (arr == NULL){
		printf("Error: No se pudo reservar memoria\n");
		return 0;
	}
	for(int i = 0; i < n; i++){
		arr[i] = 2*i + 1;
	}
	for(int i = 0; i < n; i++){
		printf("arr[%d] = %d\n",i, arr[i]);
	}
	
	int *arrAmpliado = (int *)realloc(arr, 5*sizeof(int));
	
	if(arrAmpliado == NULL){
		free(arr);

		printf("Error: No se ha podido redimensionar\n");
		return EXIT_FAILURE;
	}
	arrAmpliado[3] = 7;
	arrAmpliado[4] = 9;

	for(int i = 0; i < 5; i++){
		printf("arr[%d]: %d\n", i, arrAmpliado[i]);
	}

	free(arr);
	free(arrAmpliado);
	return 0;
}	
