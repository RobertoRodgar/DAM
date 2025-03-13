#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcion = 0;
	do{
		printf("Introduce una opción: (4 para salir)\n");
		scanf("%d", &opcion); 
	} while (opcion != 4);

	return EXIT_SUCCESS;
}
