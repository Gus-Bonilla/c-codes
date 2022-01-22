#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char first();

int main() {
	char x;
	do{
		printf("Coded By: Gus_B\n\n");
		printf("Bienvenido\n\n");
		x = first();
		printf("La primera letra de la cadena ingresada es: %c\n\n\n", x);
		system("pause");
		system("cls");
	}while(1);
	return 0;
}

char first(){
	char a[20];
	printf("Introdusca una palabra o una frase.\n");
	fflush(stdin);
	fgets(a, 20, stdin);
	printf("\n\n");
	return a[0];
}
