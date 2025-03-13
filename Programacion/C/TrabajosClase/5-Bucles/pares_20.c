#include <stdio.h>
#include <stdlib.h>

int main(){

	for (int i = 2; i <= 20; i = i + 2){
		if (i < 20){
			printf("%d,",i);
		} else {
			printf("%d.",i);
		}
	}
	printf("\n");
	

	return 0;
}
