#include <stdio.h>
#include <stdlib.h>

int main(){
	int dia;
	printf("Introduce el número: \n");
	scanf("%i", &dia);

	switch (dia){
		case 1:
			printf("Es Lunes \n");
		break;

		case 2:
			printf("Es Martes\n");
		break;

		case 3:
			printf("Es Miércoles\n");
		break;

		case 4:
			printf("Es Jueves\n");
		break;

		case 5:
			printf("Es Viernes\n");
		break;

		case 6:
			printf("Es Sábado\n");
		break;

		case 7:
			printf("Es Domingo\n");
		break;
		default:
		printf("Número no valido\n");
	}
}

