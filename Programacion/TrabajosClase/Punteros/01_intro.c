#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 10;
	int *p; //Esta variable es de tipo "int *", es decir, puntero a entero.
		//Esto quiere decir que va a almacenar la dirección de memoria
		//de una variable de tipo entero.
	p = &x;
	printf("Valor de x: %d\n", x);
	printf("Dirección de x: %p\n", &x);
	printf("Valor de p: %p\n", p);

	//¿Como accedo al contenido de uan direccion de memoria?
	
	printf("Contenido de p: %d\n", *p);

	//* declaración   acceder al contenido
	//& obtener la dirección de una variable
	
	printf("Direccion de memoria de la variable p: %p\n", &p);
	printf("Contenido de x: %d\n", *x);
	return 0;
}
