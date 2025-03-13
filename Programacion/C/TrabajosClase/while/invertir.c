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
		suma += digito;
		printf("%d", suma);
		num /= 10;
		suma = 0;
	}
	printf("\n");
	return 0;
}
