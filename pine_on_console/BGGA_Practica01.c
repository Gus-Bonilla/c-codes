#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int bt;
int ar;
int hr;

void rectangulo(int,int,int);
void triangulo(int);

int main() {
	
	do{
		printf("Coded By: Gus_B\n\n");
		printf("Bienvenido\n\n");
		
		printf("*Introdusca la base del triangulo.\n ");
		scanf("%d",&bt);
		
		printf("\n*Introdusca el ancho del rectangulo. \n ");
		scanf("%d",&ar);
		
		printf("\n*Introdusca la altura del rectangulo. \n ");
		scanf("%d",&hr);
		
		printf("\n\n\n/////////////////////////////////////////////////////////\n\n\n");
		
		if(ar<=bt){
		triangulo(bt);
		rectangulo(ar,hr,bt);
		}
		else{
		printf("*ERROR: Para poder formar la flecha es necesario que el ancho del rectangulo sea de menor o igual tamaño a la base del   triangulo.\n\n\n");
		}
		
		system("pause");
		system("cls");
		
	}while(1);
	return 0;
}



void triangulo(int a){
	
	int cont;
	int cont1;
	
	for(cont=1; cont<=a; cont++){
		for(cont1=1; cont1<=a-cont+10; cont1++){
			printf(" ");
		}
		for(cont1=1; cont1<=cont; cont1++){
			printf(" *");
		}
		printf("\n");
	}
}

void rectangulo(int a, int b, int c){
	
	int cont;
	int cont1;
	
	for(cont=1; cont<=b; cont++){
		
		if(c==1){
		}
		else{
			if(a==c){
			}
			else{
				if(!(a%2==0)&&!(c%2==0)){
					printf("  ");
				}
			}
		}
		
		if(((a%2==0)&&!(c%2==0))||((c%2==0)&&!(a%2==0))){
			printf("           ");
		}
		else{
		printf("          ");
		}
		
		for(cont1=1; cont1<(c/2)-((a-1)/2); cont1++){
			printf("  ");
		}
		for(cont1=1; cont1<=a; cont1++){
			printf(" *");
		}
		printf("\n");
	}
	printf("\n\n\n\n");
}
