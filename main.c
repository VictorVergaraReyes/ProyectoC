#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// precio se expresa en centavos para evitar errores al hacer operaciones con tipo float
struct Producto
{
	char *nombre;
	char *categoria;
	int *cantidad;
	int *precio;
};
// void modificarProducto(struct Producto *p)
// {
// 	// Modificar la estructura a través del puntero
// 	strcpy(p->nombre, "Queso");
// 	p->precio = 120;
// }

// void imprimirProducto(struct Producto p)
// {
// 	printf("Nombre: %s\n", p.nombre);
// }

int main(void)
{
	struct Producto producto1;
	struct Producto producto2;
	producto1.nombre = "Queso";
	producto2.nombre = "Huevo";

	printf(producto1.nombre, "\n");
	printf(producto2.nombre, "\n");
	system("pause");
	return 0;
}
