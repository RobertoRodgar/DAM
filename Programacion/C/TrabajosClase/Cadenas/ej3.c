#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[8] = "iguales";
	char str2[8] = "iguales";

if (str1 == str2){
		printf("Son iguales\n");
	} else {
		printf("Son distintas\n");
	}
	return 0;
if (str1 < str2){
		printf("str1 es menor\n");  //Esto se debe a que primero se guarda la variable str1 en la memoria por lo cual al ir antes lo que hace el comparador es ver el numero de la memoria correspondiente
					    //Haciendo así que str1 normalmente sea menor.
	} else {
		printf("str2 es menor\n");
	}
}
