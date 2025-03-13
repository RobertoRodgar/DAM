#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 5;

	int *arr = (int *)calloc(n, sizeof(int));

	if (arr = NULL){
		printf("Error: No se puede asignar memoria.\n");
		return 0;
	}
	
	for(int i = 0; i < n; i++){
		printf("arr[%d] = %d\n",i, arr[i]);
	}

	free(arr);
	return 0;
}
