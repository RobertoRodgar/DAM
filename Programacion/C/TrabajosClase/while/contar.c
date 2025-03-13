#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int suma = 0;
	int digito;

	printf("Introduce un número: ");
	scanf("%d", &num);

	while(num > 0){
		digito = num % 10;
		suma += 1;
		num /= 10;
	}
	printf("Tu número tiene %d dígitos.\n", suma);
	return 0;
}
