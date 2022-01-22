#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void countChar();

int main() {
	do{
		printf("Coded By: Gus_B\n\n");
		printf("Bienvenido\n\n");
		countChar();
		printf("\n\n\n");
		system("pause");
		system("cls");
	}while(1);
	return 0;
}

void countChar(){
	int i=0;
	char a[50];
	
	printf("Introdusca una palabra o frase.\n");
	fflush(stdin);
	fgets(a, 50, stdin);
		
	do{
		i++;
	}while(a[i-1] != '\0');
	i = i-2;
	printf("\n\nLa palabra/frase tiene %d caracteres.\n", i);
}

