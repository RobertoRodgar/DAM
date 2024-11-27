#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20
#define MAX_BUFFER 200

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
//Tiene que reciubir un puntero a estudiante porque tiene que modificar la variable que va a recibir. Si no no haria falta
void cumpleaños(Estudiante * cumpleaños){
	cumpleaños->edad++;
}
/*
Vamos a crear una funcion para imprimir un estudiante lo vamos a hacer de dos formas
*/

void imprimirEstudiante(const Estudiante * estudiante_a_imprimir){
	printf("Nombre: %s\n",estudiante_a_imprimir->nombre);
	printf("\tEdad: %d\n",estudiante_a_imprimir->edad);
	printf("\tNota: %f\n",estudiante_a_imprimir->nota);
}

/*
UNA FUNCION DE IMPRIMIR SIN LOS PRINTF
*/
//Convertir un estudiante a una cadena de texto
//Esta funcio da un warnig porque la variable retval deja de existir cuandoa caba la funcion
/*char * estudianteToString_warning(const Estudiante * datos){
	char retval[MAX_BUFFER];
	//snprintf (donde,cuanto, el qué [los que harias con printf])
	snprintf(retval,MAX_BUFFER,"El estudiante %s de %d años ha sacado un %f", datos->nombre, datos->edad, datos->nota);

	return retval;
}*/ //Quiero que sea una varible del main que aqui se utiliza y aqui se rellena
void estudianteToString(const Estudiante * datos,char * retval){

	//snprintf (donde,cuanto, el qué [los que harias con printf])
	snprintf(retval, MAX_BUFFER * sizeof(char),"El estudiante %s de %d años ha sacado un %f", datos->nombre, datos->edad, datos->nota);

}
void modificarNombreEstudiante(Estudiante * modificado){
	printf("Nombre antiguo: %s\n", modificado->nombre);
	printf("Introduce el nuevo nombre: ");
	scanf("%s", modificado->nombre);
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

	printf("Edad antigua de %s: %d\n",listado[0].nombre ,listado->edad);
	cumpleaños(&listado[0]/*Direccion de memoria del primer estudiante*/);
	//cumpleaños(listado);
	printf("Edad nueva: %d\n", listado[0].edad);
	
	imprimirEstudiante(&listado[0]);
	
	char StringARelenar[MAX_BUFFER];
	estudianteToString(&listado[0],StringARelenar);
	printf("%s\n",StringARelenar);

	modificarNombreEstudiante(&listado[0]);
	printf("Nombre nuevo: %s\n", listado[0].nombre);
	return 0;
}
