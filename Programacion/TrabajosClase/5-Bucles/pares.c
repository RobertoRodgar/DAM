#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;

	for (i = 0 ; i <= 100 ; i = i + 2){
		printf("%d, ", i);
	}
	printf("Terminado.\n");

	return 0;
}
