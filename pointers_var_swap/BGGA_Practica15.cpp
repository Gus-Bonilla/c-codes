/* 
	Coded By: Gus_B
	Practica 15: Realizar el intercambio de los valores de dos variables, haciendo uso de punteros.
*/

#include <iostream>

int n[2], i, *ptrN;
char l[2]={'A','B'}, *ptrL;

void inter(int*);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("Coded By: Gus_B\n\n");
	printf("Bienvenido\n\n");
	ptrL = l;
	ptrN = n;	
	for(i=0; i<2; i++, ptrL++, ptrN++){
		printf("Ingrese el valor de %c: ", *ptrL);
		scanf("%d", &*ptrN);
	}
	ptrN = n;
	ptrL = l;
	for(i=0; i<2; i++, ptrL++, ptrN++)
		printf("\nValor de %c = %d", *ptrL, *ptrN);
	
	ptrN = n;
	inter(ptrN);
	printf("\n\n\nIntercambio\n\n");
	
	ptrN = n;
	ptrL = l;
	for(i=0; i<2; i++, ptrL++, ptrN++)
		printf("\nValor de %c = %d", *ptrL, *ptrN);
	
	printf("\n\n\n");
	return 0;
}

void inter(int *ptrN){
	int a, b;
	a = *ptrN;
	ptrN++;
	b = *ptrN;
	*ptrN = a;
	ptrN--;
	*ptrN = b;
}
