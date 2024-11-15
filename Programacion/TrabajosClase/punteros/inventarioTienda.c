#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct{
	char nombre[20];
	char direccion[20];
	char telefono[20];
} Proveedor;
typedef struct{
	char nombre[20];
	float precio;
	Proveedor proveedor;
} Articulo;

typedef struct{
	Articulo articulos[MAX_ITEMS];
	int cantidades[MAX_ITEMS];
	int totalArcticulos;
} Inventario;

int main(){
	Inventario miInventario;
	Articulo articulo = {"Nombre", 10,{"Nombre", "Direccion", "Telefono"}};
	
	miInventario.articulos[0] = articulo;
	miInventario.cantidades[0] = 10;
	
	printf("Nombre articulo: %s\n", miInventario.articulos[0].nombre);
	printf("Cantidad: %d\n", miInventario.cantidades[0]);
        printf("Nombre del proveedor: %s\n", miInventario.articulos[0].proveedor.nombre);	

	return EXIT_SUCCESS;
}
