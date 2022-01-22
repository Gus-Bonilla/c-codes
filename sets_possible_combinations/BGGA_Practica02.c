#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long int factorial(int);
long int combinaciones(int, int);
int m;
int n;
long int r;

int main() {	
	do{
		printf("Gustavo Adolfo Bonilla Gonzalez			17110040\n\n");
		printf("Bienvenido\n\n");
		
		printf("*Introdusca el valor de m.\n ");
		scanf("%d",&m);
		
		printf("\n*Introdusca el valor de n. \n ");
		scanf("%d",&n);
		
		
		printf("\n\n\n/////////////////////////////////////////////////////////////////////////////////////////////\n\n\n");
		
		if(m>=n){
			r=combinaciones(m,n);
			printf("Resultado: %d \n\n\n",r);
		}else printf("ERROR, no es posible efectuar la operacion debido a que m debe ser mayor o igual a n.\n\n\n");
		
		system("pause");
		system("cls");		
	}while(1);	
	return 0;	
}


long int factorial(int a){	
	long int z=1;
	int cont;
		
	for(cont=a; cont>=1; cont--){
		z=z*a;
		a--;
	}
	return z;
}

long int combinaciones(int a, int b){	
	long int x=0;
	
	x=(factorial(a))/(factorial(b)*factorial(a-b));	
	return x;
}
