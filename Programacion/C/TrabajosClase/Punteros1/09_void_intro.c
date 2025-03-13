#include <stdio.h>
#include <stdlib.h>

void printvalor(void * ptr, char tipo){
	switch(tipo){
		case 'd':
			printf("Double %lf\n", *((double *)ptr));
			break;
		default:
			printf("Error");
	}
}

int main(){
	double num = 10;

	void * dir = &num;

	printvalor(dir, 'd');

	return EXIT_SUCCESS;
}
