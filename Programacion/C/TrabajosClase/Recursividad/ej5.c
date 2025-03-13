#include <stdio.h>
#include <stdlib.h>


int prof(char * cadena, int balance){
	static int profundidad_max = 0;
	if(*cadena == '\0'){
		return profundidad_max;
	}
	profundidad_max = balance > profundidad_max ? balance : profundidad_max;
	if(*cadena == '('){
		
		return prof(cadena + 1, balance + 1);
	}else if(*cadena == ')'){
		
		return prof(cadena + 1, balance - 1);
	}else {
		return prof(cadena + 1, balance);
	}
}

int main(){
	int balance = 0;
	char cadena[20] = "((()()(()())))";

	balance = prof(cadena, balance);
	printf("%d\n", balance);
	return 0;
}
