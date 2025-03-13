#include <stdio.h>
#include <stdlib.h>

int busqueda_binaria(int * array, int tam, int a_buscar, int ini, int fin);
int main(){
	int array[10]={-5, 1, 9, 10, 11, 12, 17, 120, 560, 1500};
	int a_buscar = 120;
	int encontrado = busqueda_binaria(array, 10, a_buscar, 0, 9);

printf("Numero: %d\n", encontrado);


	return 0;
}
int busqueda_binaria(int * array, int tam, int a_buscar, int ini, int fin){
	tam = tam / 2;
	if(array[tam - 1]==a_buscar){
		printf("El número %d esta en la posición %d del array.\n",a_buscar, tam );
	}else if(array[tam - 1] > a_buscar){
		fin = tam;
		busqueda_binaria(array, tam, a_buscar, ini, fin);
	}else if(array[tam - 1] < a_buscar){
		ini = tam;
		busqueda_binaria(array, tam, a_buscar, ini, fin);
	}


	return array[tam - 1];
}