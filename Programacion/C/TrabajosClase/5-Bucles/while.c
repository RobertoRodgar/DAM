#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcion;
	while (opcion != 4){
		printf("Introduce una opción: (4 para salir)\n");
		scanf("%d", &opcion); 
	}

	return EXIT_SUCCESS;
}
