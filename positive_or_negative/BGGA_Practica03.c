#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int signo(int);

int main() {	
	int n;
	int r;
	
	do{
		printf("Coded by: Gus_B\n\n");
		printf("Bienvenido\n\n");
		
		printf("*Introdusca el valor a evaluar (Debe ser real).\n ");
		scanf("%d",&n);
		r=signo(n);
		printf("\n\n\n");
		
		switch(r){
			case 0:
				printf("El numero evaluado es 0.");
				break;
			case 1:
				printf("El numero evaluado es positivo.");
				break;
			case -1:
				printf("El numero evaluado es negativo.");
				break;
		}
		printf("\n\n\n");
		system("pause");
		system("cls");
	}while(1);
	return 0;
}

int signo(int x){
	if(x==0){
		return 0;
	}else 	if(x>0){
				return 1;
			}else return -1;		
}
