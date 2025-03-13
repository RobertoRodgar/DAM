#include <stdio.h>
#include <stdlib.h>


void modificar_elemento(int valor, int n);
void modificar_por_referencia(int * valor, int n);

int main(){
	int n;

	printf("Introduce el tamaño que quieres para tu array: ");
	scanf("%d", &n);
	if(n < 1){
		printf("Error. Introduce un número mas alto.\n");
		return 1;
	}

	int * array = (int *)malloc(n * sizeof(int));
	if (array == NULL){
		printf("Error al reservar memoria.\n");
		return 1;
	}
	printf("Introduce los valores del array:\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	modificar_elemento(*array + (n - 1), n);
	printf("Comprobar después de por valor:%d\n", array[n - 1]);
	modificar_por_referencia(array, n);
	printf("Comprobar después de por referencia:%d\n", array[n - 1]);
	
	free(array);
	return 0;
}

void modificar_elemento(int valor, int n){
	printf("Recibido:%d\n",valor);
	valor += 10;
	printf("Modificado:%d\n",valor);
	
}

void modificar_por_referencia(int * valor, int n){
	printf("Recibido:%d\n",valor[n - 1]);
	valor[n - 1]= (valor[n - 1]) + 10;
	printf("Modificado:%d\n",valor[n - 1]);
}



/*
Lo que pasa en el paso por referencia es que la función recibe un puntero de tipo int, al pasarle el array cuando llamamos a la funcion esta recibe una referencia 
del array original entonces cualquier cambio que realices estaras modificando la memoria del array original.

Lo que pasa en el paso por valor cuando una función recibe una copia del valor del array, en lugar del propio array, cualquier cambio que realices 
dentro de la función no afectará al valor original.
*/

/*
El espacio que ocupara será de el numero introducido multiplicado por el tamaño de un doule normal.
La forma de calcularlo sería poner (sizeof(double)).
*/
