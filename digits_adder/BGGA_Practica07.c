#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void addDigits(int[]);

int main() {
	int n[4], i;
	
	do{
		printf("Coded By: Gus_B\n\n");
		printf("Bienvenido\n\n");
		
		for(i=0; i<4; i++){
			printf("Intodusca el valor del digito %d. ", i+1);
			scanf("%d", &n[i]);
		}
		
		addDigits(n);
		printf("\n\n\n");
		system("pause");
		system("cls");
	}while(1);
	return 0;
}

void addDigits(int n[4]){
	int a, b=0;	
	for(a=0; a<=3; a++){
		b = b+n[a];
	}
	printf("\n\nEl resultado de sumar los digitos ingresados es: %d", b);
}
