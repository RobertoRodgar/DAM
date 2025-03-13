#include <stdio.h>
#include <stdlib.h>

int numeroTriangular(int numero, int total);

int main(){
	int numero = 0;
	int total = 0;

	printf("Introduce el numero que deseas:");
	scanf("%d", &numero);

	total = numeroTriangular(numero, total);
	printf("El numero de objetos que necesitas es: %d\n", total);
	return 0;
}

int numeroTriangular(int numero, int resultado){
	if(numero == 0){
		return resultado;
	}
	resultado += numero;
	resultado = numeroTriangular(numero - 1, resultado);
	return resultado;
}

int numeroTriangular_static(int numero){
	static int resultado = 0;
	if(numero == 0){
		return resultado;
	}
	resultado += numero;
	resultado = numeroTriangular_static(numero - 1);
	return resultado;
}

int numeroTriangular_2(int numero){
	if(numero == 0){
		return 0;
	}

	return numero + numeroTriangular_2(numero - 1); 
}