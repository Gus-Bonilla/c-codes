#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tab(int);

int main() {
	int a;
	
	do{
		printf("Coded By: Gus_B\n\n");
		printf("Bienvenido\n\n");
		printf("Introdusca un numero.\n");
		scanf("%d", &a);
		printf("\n\n");
		tab(a);
		printf("\n\n\n");
		system("pause");
		system("cls");
	}while(1);
	return 0;
}

void tab(int a){
	int i;
	int b;
	for(i=0; i<=10; i++){
		b = a*i;
		printf("%d * %d = %d\n", a, i, b);
	}
}
