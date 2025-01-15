#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITULO  80  //Defino el maximo que podrá tener el titulo
#define MAX_AUTOR 50    //Defino el maximo que podrá tener el autor
int MAX_CATALOGO = 40; //Defino el maximo de libros que tendré 

typedef enum{ //Genero un enum que se llame Libro para que la proxima variable que cree tenga los parametros de este.
    FICCION,
    NO_FICCION,
    POESIA,
    TEATRO,
    ENSAYO
} Genero;

typedef struct{ //Genero un struct que se llame Libro para que la proxima variable que cree tenga los parametros de este.
    int id;
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    float precio;
    Genero genero;
    int cantidad;
} Libro;

    

    const char* convertirGenero(Genero gen){ //Hago un función que reciba de parametro algo de tipo "Genero" y con un switch hacemos que nos devuelva el valor pero en texto 
        switch(gen){
            case FICCION: return "Ficcion";
            case NO_FICCION: return "No ficcion";
            case POESIA: return "Poesia";
            case TEATRO: return "Teatro";
            case ENSAYO: return "Ensayo";
            default: return 0;
        }
    }
    void mostrarLibro(const Libro* libro) { //Es una funcion la cual imprime los libros para no usar printf repetidamente en la cual uso convertir genero
        printf("El libro con ID %i de título %s cuyo autor es %s, su precio es %0.2f€, genero %s quedan actualmente %d unidades.\n",
           libro->id, libro->titulo, libro->autor, libro->precio, convertirGenero(libro->genero), libro->cantidad);
}
    void mostrarLibros(Libro * libros){ //Un bucle para mostrar todos los libros
        for(int i = 0; i < 40; i++){
            mostrarLibro(&libros[i]);//De argumento se le da libros que es la funcion que se le dio como parametro la cual es la biblioteca realmente 
        }
    }


    void mostrarIdLibro(Libro * libros){ //Un bucle que recorre todos los libros hasta encontrar el ID indicado
        
        int busqueda;
        printf("Introduce el ID que quieres buscar: ");
        scanf("%d", &busqueda);

        if (busqueda <= 0 || busqueda > 40){
            printf("Introduce un ID válido\n");
        }else{
           for(int i = 0; i < 40; i++){
               if(i + 1 == busqueda ){
                    mostrarLibro(&libros[i]);
                }
            }
        }
    }

    void buscarIdLibro(Libro * libros, int busqueda){ //El mismo bucle para buscar id pero recibiendo un id a buscar a la vez que se ejecuta el codigo.

        if (busqueda <= 0 || busqueda > 40){
            printf("Introduce un ID válido\n");
        }else{
           for(int i = 0; i < 40; i++){
               if(i + 1 == busqueda ){
                    mostrarLibro(&libros[i]);
                }
            }
        }
    }

    void añadirLibros(Libro * libros){ //Añadir una cantidad a un libro a traves de una busqueda que hacen con su ID
        int busquita;
        int añadido;
        char opcion;
        while(1){
            printf("Quieres añadir alguna unidad a un libro?(s=si, n=no)\n");
            scanf(" %c", &opcion);
            if(opcion == 's'){
            printf("Escribe el ID del libro que quieres añadir mas unidades: ");
            scanf("%d", &busquita);
            for(int i = 0; i < 40 ; i++){
              if(busquita == libros[i].id){
                printf("¿Cuantas unidades quieres añadir?\n");
                scanf("%d", &añadido);
                libros[i].cantidad += añadido;
                printf("El libro con id %i ahora tiene %d unidades.\n", libros[i].id, libros[i].cantidad);
                }
            }
            }else if(opcion == 'n'){
                printf("No se añadiran mas libros.\n");
                break;
            }else {
                printf("Introduce una opcion válida.\n");
            }
        }
    }

    void añadirStockLibros(Libro * libros, int busquita, int añadido){ //Añade también una cantidad de libro pero con un ID introducido al ejecutar el comando
        for(int i = 0; i < 40; i++){
            if(busquita == libros[i].id){
                libros[i].cantidad += añadido;
                printf("El libro con id %i ahora tiene %d unidades.\n", libros[i].id, libros[i].cantidad);
            }
        }
    }

    void mostarCat(Libro * libros){ //Funcion que muestra todos los libros que sean de la misma categoria que la deseada
       int buscarCat;

       printf("Introduce la categoria de los libros que quieres mostrar (1=Ficcion, 2=No ficción, 3=Poesía, 4=Teatro, 5=Ensayo):\n");
       scanf("%d", &buscarCat);
       if (buscarCat < 1 || buscarCat > 5){
        printf("Introduce una categoria válida");
       }else {
            for (int i = 0; i < 40; i++){
            if (libros[i].genero == buscarCat-1){
                mostrarLibro(&libros[i]);
            }
                }
       }
    }
    void mostarCat2(Libro * libros,Genero gen){ //Funcion que muestra los libros con la misma categoria que la introducida al ejecutar el codigo
        for (int i = 0; i < 40; i++){
            if (libros[i].genero == gen){
                mostrarLibro(&libros[i]);
            }
        }
    }
    void mostrarAutor(Libro * libros,const char* autor){ //Funcion que busca los libros con el autor dado a traves de la linea de comandos
        for(int i = 0; i < 40; i++){
            if (strcmp(libros[i].autor, autor) == 0){ //strcmp es un comparador de dos str en este caso entre el autor de un libro y el autor que se busca
                mostrarLibro(&libros[i]);
            }
        }
    }
    
    void añadirLibro (Libro ** biblioteca){  //Funcion para añadir un libro nuevo a la biblioteca
        int añadido;
        int cat;
        printf("Introduce la cantidad de libros que quieres añadir: \n");
        scanf("%d", &añadido);

        int cantidadLibros = MAX_CATALOGO + añadido;
        Libro * biblioteca2 = (Libro *) realloc(*biblioteca,cantidadLibros * sizeof(Libro));//Hacemos un realloc con ayuda de de otra función para aumentar el tamaño de la memoria
        if (biblioteca2 == NULL){
            printf("ERROR. No se pudo reservar la memoria.\n");
            return;
        }

        *biblioteca = biblioteca2; //Igualamos ambas para poder seguir usando la principal
        //free(biblioteca2); Esto es un error porque  estoy liberando el contenido de biblioteca2 y al igualar bibliteca y biblioteca2, biblioteca apunta  a la misma direccion la cual ahora está liberada.

        for(int i = 40; i < cantidadLibros; i++){
            (*biblioteca)[i].id = i + 1;

            printf("Introduce el titulo del libro: \n");
            //scanf(" %[^\n]", &(*(biblioteca[i]->titulo)));//El "%[^\n] lo que hace es que lee una cadena de caracteres respetando los espacios hasta que haya un /n"
            
            scanf(" %[^\n]", ((*biblioteca)[i]).titulo   );//El "%[^\n] lo que hace es que lee una cadena de caracteres respetando los espacios hasta que haya un /n"
             
            printf("Introduce el autor del libro: \n");
            scanf(" %[^\n]", ((*biblioteca)[i]).autor);

            printf("Introduce el precio del libro: \n");
            scanf("%f", &(((*biblioteca)[i]).precio));

            printf("Introduce el genero del libro (1=Ficcion, 2=No ficción, 3=Poesía, 4=Teatro, 5=Ensayo): \n");
            scanf("%d", &cat);
            
            (*biblioteca)[i].genero = cat -1;


            printf("Introduce la cantidad disponible del libro: \n");
            scanf("%d", &(((*biblioteca)[i]).cantidad));
        }
            for(int i = 0; i < cantidadLibros; i++){
                mostrarLibro(&((*biblioteca)[i]));
                //mostrarLibro((*biblioteca) + i);
            }
    }
    void iniciarLibro(Libro * libro,int Id, char * Titulo,char * Autor, int Precio, int gene,int Stock){ //Con esta funcion lo que hacemos es añadir los libros ya existentes a la memoria el cual sigue la estructura creada antes
        libro->id = Id;
        strcpy(libro->titulo , Titulo);//strcpy lo que hace es copiar una cadena de caracteres para poder escribir los titulos en este caso con espacios.
        strcpy(libro->autor , Autor);
        libro->precio = Precio;
        libro->genero = gene;
        libro->cantidad = Stock;
    }
int main(int argc, char ** argv){
    Libro * biblioteca = (Libro *) malloc(MAX_CATALOGO * sizeof(Libro));//Creamos la biblioteca con malloc con un tamaño maximo definido antes y que cada uno tenga el tamaño del struc del principio
    if (biblioteca == NULL){
        printf("ERROR. No se pudo reservar la memoria.\n");
    }
    
        iniciarLibro( &biblioteca[0], 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10); //iniciarLibro hace lo ya explicado antes y aqui se les indica el espacio en el que debe guardarse cada uno
        iniciarLibro( &biblioteca[1], 2, "1984", "George Orwell", 12.49, FICCION, 5);
        iniciarLibro( &biblioteca[2], 3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8);
        iniciarLibro( &biblioteca[3], 4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12);
        iniciarLibro( &biblioteca[4], 5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7);
        iniciarLibro( &biblioteca[5], 6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9);
        iniciarLibro( &biblioteca[6], 7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6);
        iniciarLibro( &biblioteca[7], 8, "The Odyssey", "Homer", 17.49, FICCION, 4);
        iniciarLibro( &biblioteca[8], 9, "Ulysses", "James Joyce", 25.00, FICCION, 2);
        iniciarLibro( &biblioteca[9], 10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3);
        iniciarLibro( &biblioteca[10], 11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11);
        iniciarLibro( &biblioteca[11], 12, "The Iliad", "Homer", 18.50, FICCION, 7);
        iniciarLibro( &biblioteca[12], 13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15);
        iniciarLibro( &biblioteca[13], 14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20);
        iniciarLibro( &biblioteca[14], 15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13);
        iniciarLibro( &biblioteca[15], 16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6);
        iniciarLibro( &biblioteca[16], 17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5);
        iniciarLibro( &biblioteca[17], 18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8);
        iniciarLibro( &biblioteca[18], 19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4);
        iniciarLibro( &biblioteca[19], 20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14);
        iniciarLibro( &biblioteca[20], 21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6);
        iniciarLibro( &biblioteca[21], 22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8);
        iniciarLibro( &biblioteca[22], 23, "Othello", "William Shakespeare", 10.99, TEATRO, 7);
        iniciarLibro( &biblioteca[23], 24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5);
        iniciarLibro( &biblioteca[24], 25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4);
        iniciarLibro( &biblioteca[25], 26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10);
        iniciarLibro( &biblioteca[26], 27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9);
        iniciarLibro( &biblioteca[27], 28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3);
        iniciarLibro( &biblioteca[28], 29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15);
        iniciarLibro( &biblioteca[29], 30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10);
        iniciarLibro( &biblioteca[30], 31, "Paradise Lost", "John Milton", 12.00, POESIA, 7);
        iniciarLibro( &biblioteca[31], 32, "Beowulf", "Anonymous", 15.00, POESIA, 5);
        iniciarLibro( &biblioteca[32], 33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4);
        iniciarLibro( &biblioteca[33], 34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9);
        iniciarLibro( &biblioteca[34], 35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11);
        iniciarLibro( &biblioteca[35], 36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8);
        iniciarLibro( &biblioteca[36], 37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5);
        iniciarLibro( &biblioteca[37], 38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12);
        iniciarLibro( &biblioteca[38], 39, "The Republic", "Plato", 16.00, ENSAYO, 6);
        iniciarLibro( &biblioteca[39], 40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10);

   printf("Lista de arguemtos (hay %d argumentos):\n",argc);
    for(int i = 0; i<argc; i++){
    printf("\t Argumento %d: %s\n",i,argv[i]);
    }

    if (argc == 1){ //Un if el cual recorre todas las posibilidades de funciones que le puedes pedir
        
            mostrarLibros(biblioteca);
            mostrarIdLibro(biblioteca);
            añadirLibros(biblioteca);
            mostarCat(biblioteca);

    } else if(argc == 2){

        if (strcmp(argv[1],"mostrar") == 0){
            // Llamo a la función mostrar todos los libros
            mostrarLibros(biblioteca);
            printf("Llamo a la función mostrar\n");

        }else if (strcmp(argv[1],"añadir") == 0){
            // Llamos a la funcion añadir
            añadirLibro(&biblioteca);
        }else if(strcmp(argv[1],"todo") == 0){
            // Hacemos todas las funciones
            mostrarLibros(biblioteca);
            mostrarIdLibro(biblioteca);
            añadirLibros(biblioteca);
            mostarCat(biblioteca);
        }
    } else if(argc == 3){
        // Distinguir mostrar
            if(strcmp(argv[1],"mostrar") == 0){
                int id = atoi(argv[2]);//Lo que hace atoi es como lo que hace el void en las funciones, pero aqui lo que hace es transformar el contenido(ya sea numeros, letras, etc..) a cualquier cosa que s ele vaya a pedir/usar luego, en este caso int
                buscarIdLibro(biblioteca, id);
            }else if(strcmp(argv[1],"categoria")== 0){
                Genero gen = atoi(argv[2]);
                mostarCat2(biblioteca, gen);
            }else if(strcmp(argv[1],"autor") == 0){
                mostrarAutor(biblioteca, argv[2]);
            }

    } else if (argc == 4){
        // ...
        if (strcmp(argv[1], "stock") == 0){
            int id = atoi(argv[2]);
            int cantidad = atoi(argv[3]);
            añadirStockLibros(biblioteca, id, cantidad);   
        }
    }
        free(biblioteca);
        return 0;
        
    }