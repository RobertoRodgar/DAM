#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;

	for (/*valor inicial*/ i = 0 ; i < 5 /*Condición*/ ; i = i + 1/*Codigo a ejecutar entre vueltas*/){
		printf("%d\n", i);
	}
	printf("Terminado.\n");

	return 0;
}
