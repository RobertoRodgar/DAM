#include <stdlib.h>
#include <stdio.h>

int main(){
	char str1[5] = "hola";
	printf("%s\n", str1);
	printf("%c\n", str1[3]);

	str1[4] = '$';
	printf("%s\n", str1);
	return EXIT_SUCCESS;
}
