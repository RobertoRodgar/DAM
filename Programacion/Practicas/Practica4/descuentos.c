#include <stdio.h>
#include <stdlib.h>

int main(){
	int valor_compra;
	printf("Escirbe el valor de tu compra:\n");
	scanf("%i", &valor_compra);

	int precio_estudiante;
	int precio_profesor;
	precio_estudiante = valor_compra - (valor_compra * 0,15);
	precio_profesor = valor_compra - (valor_compra * 0,10);
	
	char rol;
	printf("¿Que eres?(E=Estudiante, P=Profesor o O=Otro)\n");
	scanf(" %c", &rol);

	if (rol == 'E'){ 
		printf("Tu precio es:%i\n", precio_estudiante);
	}else if (rol == 'P') { 
		printf("Tu precio es:%i\n", precio_profesor);
	} else {
		printf("Tu precio es:%i\n", valor_compra);
	}
	return EXIT_SUCCESS;
}
