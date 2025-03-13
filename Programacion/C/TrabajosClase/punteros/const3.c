#include <stdio.h>

int main() {
    int numero = 10;
    int trampa = 30;
    int * const ptr = &numero;  // La direccion de memoria que aputa ahora es constante
    const int * const ptr = &numero;  //Ahora ambas son constantes

    printf("Valor: %d\n", *ptr);

    // *ptr = 20;  // Esto daría un error porque el valor es constante
    numero = 20;   // Cambiar el valor directamente es válido
    printf("Nuevo valor: %d\n", *ptr);

    ptr = &trampa;//Ahora da error porque ahora es constante la direccion de memoria que apunta
    *ptr = 30; //Ahora si puedo modificar el contenido que apunta el puntero.
    //Ahora al haber definido ambas cosas como constantes no puedo hacer una trampa
    printf("Nuevo valor: %d\n", *ptr);
    return 0;
}