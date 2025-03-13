#include <stdlib.h>
#include <stdio.h>

int main(){
	char str1[100];
	char str2[100];
	printf("Introduce una palabra:");
	scanf("%s", str1); // No hace falta & porque marca la dirección donde empieza la cadena
	scanf("%s", str2);

	printf("%s%s\n", str1, str2);
	return EXIT_SUCCESS;
}
