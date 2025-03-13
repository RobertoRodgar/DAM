#include <stdlib.h>
#include <stdio.h>

int main(){
int cantidad = 0;
float cantidad2 = 0;
float suma = 0;

printf("Introduce el tamaño deseado para el array: ");
scanf("%d", &cantidad);

float * arr = (float *)malloc (cantidad * sizeof(float *));
if (arr == NULL){
	printf("ERROR. No se pudo reservar la memoria.\n");
}
cantidad2 = cantidad;
suma = (1 / cantidad2);
for (int i = 0; i < cantidad; i++){
	arr[i] = suma * i;
}

printf("Resultado:\n");
for (int i = 0; i < cantidad; i ++){
	printf("Posicion %d: %d/%d = %0.1f\n", i, i, cantidad, arr[i]);
}


arr = (float * )realloc(arr, (cantidad / 2) * sizeof(float));

printf("Resultado reducido:\n");
for (int i = 0; i < cantidad / 2; i ++){
	printf("Posicion %d: %d/%d = %0.1f\n", i, i, cantidad, arr[i]);
}


free(arr);
return 0;
}