#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20

typedef struct {
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;
} Estudiante;
/*Estudiantes inicializar(char * nombre, int edad, float nota){
	//Creo una variable de tipo Estudiante
	Estudiantes estudiante_nuevo;
	//Inicializo el estudiante e.edad = edad, e....
	return estudiante_nuevo;
	//Las funciones que se crean locales solo funcionan locales
}*/
/* Estudiante * inicializar (char * nombre, int edad, float nota){
	Estudiante * estudiante_nuevo = malloc; //Memoria dinamica

	//Inicializacion
	//No me sirve pq no es una direccion de memoria reservada no tiene donde meter nuevos datps
	return estudiante_nuevo;
}*/ //Valida pero no sabemos como se hace todavia
void inicializacion(Estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota){
	// esto no compila: estudiantes_a_rellenar.edad = edad; porque estudiante_a_rellenar es un
	// puntero no un estudiante habria que hacer (*estudiante_a_rellenar).edad es decir, 
	// acceder al contenido del puntero para poder así acceder al campo "edad" del Estudiante
	// en lugar de hacer eso, lo que C permite es utilizar el operador "->".
	estudiante_a_rellenar->edad = edad;
	estudiante_a_rellenar->nota = nota;
	//estudiantes_a_rellenar.nombre = nombre; es incorrecto porque lo que hace es igualar las cosas y no ver ambos contenidos 
	strcpy(estudiante_a_rellenar->nombre, nombre);


}

int main (){
	Estudiante listado[MAX_ESTUDIANTES];//Aqui se reserva la memoria para los estudiantes. Los 560 bytes (de 20 que es el maximo)
	int num_estudiantes;
	int edad;
	float nota;
	char nombre[MAX_NOMBRE];

	printf("%p\n", listado);
	printf("Sizeof listado:%lu\n", sizeof(listado));
	printf("Sizeof Estudiante:%lu\n", sizeof(Estudiante));
	
	printf("¿Cuantos estudiantes desea iniciar? ");
	scanf("%d", &num_estudiantes);
	
	for(int i = 0; i < num_estudiantes; i++){

	printf("Introduce la edad: ");
	scanf("%d", &edad);
	
	printf("Introduce la nota: ");
	scanf("%f", &nota);	
	
	printf("Introduce el nombre: ");
	scanf("%s", nombre);

	//inicializacion(listado (+ i para sumar posicion), nombre, edad, nota);
	inicializacion(&listado[i], nombre, edad, nota);
	}

	
	return 0;
}
