#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int respuesta = 72;

	printf("Introduce un número: ");
	scanf("%d", &num);

	while(respuesta != num){
		printf("Fallaste...\n");
		printf("Intentalo de nuevo: ");
		scanf("%d", &num);
	}
	printf("LO ADIVINASTE!\n");
	return 0;
}
