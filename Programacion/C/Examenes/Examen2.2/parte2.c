#include <stdio.h>
#include <stdlib.h>

int main(){
	int tam1 = 0;
	int tam2 = 0;
	int opt = 0;

	printf("Introduce el tamaño del array: ");
	scanf("%d", &tam1);

	int * array1 = (int *)malloc(tam1 * sizeof(int));

	if(array1 == NULL){
		printf("Error, no se pudo reservar la memoria del primer array\n");
		return 0;
	}

	for(int i = 0; i < tam1; i++){
		array1[i] = i * 2;
	}

	for (int i = 0; i < tam1 ; i++){
			printf("%d\n",  array1[i]);
	}

	printf("Introduce el tamaño del segundo array: ");
	scanf("%d", &tam2);
	int * array2 = (int *)malloc(tam2 * sizeof(int));

	if(array2 == NULL){
		printf("Error, no se pudo reservar la memoria del segundo array\n");
		return 0;
	}

	for(int i = 0; i < tam2; i++){
		array2[i] = i * 3;
	}

	for (int i = 0; i < tam2 ; i++){
			printf("%d\n",  array2[i]);
	}

	printf("¿Quieres concatenar o sumar coordenada a coordenada?(1=concatenar, 2=coordenada a coordenada):");	
	scanf("%d", &opt);

	switch(opt){
		case 1:
			int tam3 = (tam1 + tam2);
			int * array3 = (int *)malloc(tam3 * sizeof(int));

			if(array3 == NULL){
				printf("Error, no se pudo reservar la memoria del tercer array\n");
				return 0;
			}

			for (int i = 0; i < tam1 ; i++){
				array3[i] = array1[i];
			}

			for (int i = 0; i < tam2 ; i++){
				array3[i + tam1] = array2[i];
			}

			printf("Tamaño del tercer array concatenado: %d\n", tam3);

			for (int i = 0; i < (tam1 + tam2) ; i++){
				printf("%d\n",  array3[i]);
			}
			break;

		case 2:
			int tam4 = 0;
			if(tam1 > tam2){
				array2 = (int *)realloc(array2, tam1 * sizeof(int));
				tam4 = tam1;
			}else if(tam1 < tam2){
				tam4 = tam2;
				array1 = (int *)realloc(array2, tam2 * sizeof(int));
			}else{
				tam4 = tam1;
			}
			
			int * array4 = (int *)malloc(tam4 * sizeof(int));

			if(array4 == NULL){
				printf("Error, no se pudo reservar la memoria del tercer array\n");
				return 0;
			}

			for (int i = 0; i < tam4 ; i++){
				array4[i] = (array1[i] + array2[i]);
			}

			printf("Tamaño del tercer array sumado: %d\n", tam4);

			for (int i = 0; i < tam4 ; i++){
				printf("%d\n",  array4[i]);
			}	
			break;

		default:
			printf("Introduce una opción válida\n");
			break;
	}
	

	free(array1);
	free(array2);
	return 0;
}