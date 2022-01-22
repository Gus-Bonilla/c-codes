// Coded By: Gus_B

#include <iostream>

// Mostrar la direccion del puntero, direccion de la variable, valor 
// del puntero, el valor de la variable y direccion a la que apunta el puntero.

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x;
	int *ptr_x;
	
	x = 5;
	ptr_x = &x;
	
	printf("Direccion de la variable: %p\n", &x);
	printf("Valor de la variable: %d\n", x);
	printf("Direccion del puntero: %p\n", &ptr_x);
	printf("Valor del puntero: %d\n", *ptr_x);
	printf("Direccion a la que apunta el puntero: %p\n", ptr_x);
	
	*ptr_x = 1;
	printf("Valor nuevo de la variable: %d\n", x);
	
	return 0;
}
