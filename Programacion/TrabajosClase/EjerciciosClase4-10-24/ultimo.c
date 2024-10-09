#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int vocal(){
	char letra;
	printf("Introduce una letra:\n");
	scanf(" %c", &letra);
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'U' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
			printf("La letra %c SI es vocal\n",letra);
	} else {
		printf("La letra %c NO es vocal\n",letra);
	}
}
int calcular_area(){
	float area;
	float radio;
	float lado;
	int figura;
	printf("¿Que figura quieres calcular? (cuadrado=1 circulo=2)\n");
	scanf(" %i", &figura);
	if (figura ==  1){
		printf("Introduce el lado del cuadrado: ");
		scanf(" %f", &lado);
		area = lado * lado;
		printf("El area del cuadrado con lado %.0lf es: %f\n",lado, area);
	} else if (figura == 2){
		printf("Introduce el radio del circulo: ");
		scanf(" %f", &radio);
		area = M_PI * (radio * radio);
		printf("El area del circulo con radio %.0lf es: %f\n",radio, area);
	}
}
double calcular_promedio_tres(double num1, double num2, double num3){
	double promedio;
	printf("Introduzca el primer número: ");
	scanf("%lf", &num1);
	
	printf("Introduzca el segundo número: ");
	scanf("%lf", &num2);

	printf("Introduzca el tercer número: ");
	scanf("%lf", &num3);

	promedio = (num1 + num2 + num3) / 3;

	printf("El promedio de %.0lf, %.0lf y %.0lf es: %.2lf.\n",num1, num2, num3, promedio);
	return 0;
}
double calcular_promedio_cuatro(double num1, double num2, double num3, double num4){
	double promedio;
	printf("Introduzca el primer número: ");
	scanf("%lf", &num1);
	
	printf("Introduzca el segundo número: ");
	scanf("%lf", &num2);

	printf("Introduzca el tercer número: ");
	scanf("%lf", &num3);

	printf("Introduzca el cuarto número: ");
	scanf("%lf", &num4);

	promedio = (num1 + num2 + num3 + num4) / 4;

	printf("El promedio de %.0lf, %.0lf, %.0lf y %.0lf es: %.2lf.\n",num1, num2, num3, num4, promedio);
	return 0;
}
float calcular_promedio(){
	int num;

	printf("¿De cuantos número quieres hacer el promedio? (3 o 4))\n");
	scanf("%i", &num);

	if (num == 3){
		calcular_promedio_tres(0, 0, 0);
	} else {
		calcular_promedio_cuatro(0, 0, 0, 0);
	}
	return 0;
}
int formato_hora(){
	int hora;
	printf("Introduce tu hora en formato 24h: ");
	scanf(" %i", &hora);

	if (hora >=0 && hora <=12){
		printf("La hora en formato de 12 hora es %i AM.\n", hora);
	} else if (hora >=13 && hora <=24){
		hora = hora - 12;
		printf("La hora en formato de 12 horas es %i PM.\n", hora);
	} else {
		printf("La hora no es válida\n");
	}
}
int primos(){
	int numero;
	printf("Introduce el número: ");
	scanf("%i", &numero);

	if (numero == 1 || numero == 4 || numero == 6 || numero == 8 || numero == 9){
		printf("El número %i no es primo.\n", numero);
	} else if (numero == 2 || numero == 3 || numero == 5 || numero == 7){
		printf("El número %i si es primo.\n", numero);
	} else {
	       printf("Introduce un número menor a 10\n");
	}
}
int comparar_numeros(){
	int num1, num2, num3;

	printf("Introduce el primer número: ");
	scanf("%i", &num1);
	
	printf("Introduce el segundo número: ");
	scanf("%i", &num2);

	printf("Introduce el tercer número: ");
	scanf("%i", &num3);

	if (num1 > num2 && num1 > num3){
		printf("El mayor número es: %i\n", num1);
	} else if (num2 > num1 && num2 > num3){
		printf("El mayor número es: %i\n", num2);
	} else if (num3 > num1 && num3 > num2){
		printf("El mayor número es: %i\n", num3);
	} else if (num1 == num2 && num1 != num3 || num1 == num3 && num1 != num2 || num2 == num3 && num2 != num1){
		printf("Hay dos números iguales.\n");
	} else {
		printf("Los números son iguales.\n");
	}
}

int main(){
	int ejercicio;

	printf("Selecciona una opción:\n1. Verificar si una letra es una vocal.\n2. Calcular el área de una figura (círculo o cuadrado).\n3. Calcular el promedio de 3 o 4 números.\n4. Convertir una hora en formato de 24 horas a 12 horas.\n5. Verificar si un número menor de 10 es primo.\n6. Comparar tres números.\n7. Salir.\nOpcion: ");
	scanf(" %i", &ejercicio);

	if (ejercicio == 1){
		vocal();
	} else if (ejercicio == 2){
		calcular_area();
	} else if (ejercicio == 3){
		calcular_promedio();
	} else if (ejercicio == 4){
		formato_hora();
	} else if (ejercicio == 5){
		primos();
	} else if (ejercicio == 6){
		comparar_numeros();
	} else if (ejercicio == 7){
		printf("Has decidido salir.\n");
	} else {
		printf("Elije un número valido.\n");
	}
	return 0;
}
