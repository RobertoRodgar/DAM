#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITULO  80
#define MAX_AUTOR 50

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

    

    const char* convertirGenero(Genero gen){
        switch(gen){
        case FICCION: return "Ficcion";
        case NO_FICCION: return "No ficcion";
        case POESIA: return "Poesia";
        case TEATRO: return "Teatro";
        case ENSAYO: return "Ensayo";
        }
    }
    void mostrarLibro(const Libro* libro) {                     // Lo que hace es mostrar un libro.
        printf("El libro con ID %i de título %s cuyo autor es %s, su precio es %0.2f€, genero %s quedan actualmente %d unidades.\n",
           libro->id, libro->titulo, libro->autor, libro->precio, convertirGenero(libro->genero), libro->cantidad);
}
    void mostrarLibros(Libro * libros){ //Mostrar todos los libros
        for(int i = 0; i < 40; i++){
            mostrarLibro(&libros[i]); 
        }
    }


    void mostrarIdLibro(Libro * libros){ //Buscar un libro por el ID introducido
        
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

    void buscarIdLibro(Libro * libros, int busqueda){ //Buscar un libro por el ID introducido

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

    void añadirLibros(Libro * libros){ //Añadir una cantidad a un libro a traves de su ID
        int busquita;
        int añadido;
        char opcion;
        while(1){
            printf("Quieres añadir alguna unidad a un libro?(s=si, n=no)\n");
            scanf(" %c", &opcion);
            if(opcion == 's'){
            printf("Escribe el ID del libro que quieres añadir mas unidades: ");
            scanf("%d", &busquita);
            for(int i = 0; i < 41 ; i++){
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

    void añadirStockLibros(Libro * libros, int busquita, int añadido){ //Añadir una cantidad a un libro a traves de su ID
        for(int i = 0; i < 41 ; i++){
            if(busquita == libros[i].id){
                libros[i].cantidad += añadido;
                printf("El libro con id %i ahora tiene %d unidades.\n", libros[i].id, libros[i].cantidad);
            }
        }
    }

    void mostarCat(Libro * libros){  //Un bucle que recorre el array de libro comparando la cataegoria a buscar y mostrando cuando coincide
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
    void mostarCat2(Libro * libros,Genero gen){  //Un bucle que recorre el array de libro comparando la cataegoria a buscar y mostrando cuando coincide
        for (int i = 0; i < 40; i++){
            if (libros[i].genero == gen){
                mostrarLibro(&libros[i]);
            }
        }
    }
    void mostrarAutor(Libro * libros,const char* autor){
        for(int i = 0; i < 40; i++){
            if (strcmp(libros[i].autor, autor) == 0){
                mostrarLibro(&libros[i]);
            }
        }
    }
    void iniciarLibro(Libro * libro,int Id, char * Titulo,char * Autor, int Precio, int Genero,int Stock){
        libro->id = Id;
        strcpy(libro->titulo , Titulo);
        strcpy(libro->autor , Autor);
        libro->precio = Precio;
        libro->genero = Genero;
        libro->cantidad = Stock;
    }

int main(int argc, char ** argv){
    Libro * biblioteca = (Libro *) malloc(40 * sizeof(Libro));
    
        iniciarLibro( &biblioteca[0], 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10);
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

    if (argc == 1){
        // Caso inicial.
            mostrarLibros(biblioteca);
            mostrarIdLibro(biblioteca);
            añadirLibros(biblioteca);
            mostarCat(biblioteca);

    } else if(argc == 2){
        // Mostrar o en añadir

        if (strcmp(argv[1],"mostrar") == 0){
            // Llamo a la función mostrar todos los libros
            mostrarLibros(biblioteca);
            printf("Llamo a la función mostrar\n");

        }else if (strcmp(argv[1],"añadir") == 0){
            // Llamos a la funcion añadir

            printf("Llamo a la función añadir\n");
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
                int id = atoi(argv[2]);
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
         //Dentro se pone libro porque es un parametro que se le pasara a la funcion que espera un puntero de tipo Libro como es en este caso.

        //mostrarIdLibro(libros);
        
        //añadirLibros(libros);

        //mostarCat(libros);
        return 0;
        free(biblioteca);
    }
