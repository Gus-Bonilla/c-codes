//Practica 10

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct persona{
	char nom[50], sexo[10];
	int edad;
};// }p; //	Asi se declara una variable de tipo persona justo despues de la estructura 
		 //	(De esta forma es posible acceder a la estructura desde una funcion sin necesidad de habersela pasado a la funcion).
		 
struct persona capturar(struct persona);
void imprimir(struct persona);

int main(){
	struct persona p;
	
	printf("Coded By: Gus_B\n\n");
	printf("Bienvenido\n\n");
	p = capturar(p);
	system("cls");
	printf("Coded By: Gus_B\n");
	imprimir(p);	
	return 0;
}

struct persona capturar(struct persona p){	
	printf("Ingresa tu nombre.\t");
	fflush(stdin);
	fgets(p.nom, 50, stdin);
	printf("Ingresa tu edad.\t");
	scanf("%d", &p.edad);
	printf("Ingresa tu sexo.\t");
	fflush(stdin);
	fgets(p.sexo, 10, stdin);
	return p;	
}

void imprimir(struct persona p){	
	printf("\n\n\nNombre:\t%s", p.nom);
	printf("Edad:\t%d\n", p.edad);
	printf("Sexo:\t%s\n", p.sexo);	
}
