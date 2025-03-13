#include <stdio.h>
#include <stdlib.h>

int main(){
	for(int o = 0, e = 1, a = 1;a <= 5; a++, o = e + o){
		printf("%d ", o);

		e = e + o;
		printf("%d ", e);
	}
	printf("\n");
	return 0;
}
