#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[5] = {1, 2, 3, 4, 5};
	int *p = array;
	int suma = 0;
	
	for(int i = 0; i < 5; i++){
		suma += *(p + i);
	}
	printf("La suma es: %d\n", suma);
	return 0;
	}	
