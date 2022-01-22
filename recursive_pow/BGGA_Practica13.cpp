//Elaborar un programa en el que se pueda elevar cualquier numero a cualquier potencia utilizando recursividad (Solo con valores positivos).

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int elevar(int,int,int);

int main() {
	int n;
	int p;
	int x;
	
	do{
		x=1;
			
		printf("Introdusca un numero positivo.");
		scanf("%i",&n);
		
		printf("Introdusca la potencia al la que desea elevarlo.");
		scanf("%i",&p);
		
		if (p==0){
			x=1;
		}else x=elevar(n,p,x);
		
		printf("El resultado es: %i\n\n\n",x);
		system("pause");
		system("cls");
		
	}while(1);
}

int elevar (int n, int p, int x){
			
	if (p!=0){
		x=x*n;
		p--;
		x=elevar(n,p,x);
	}else return x;
	
}
