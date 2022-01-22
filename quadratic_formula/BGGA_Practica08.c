#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void formGen(float, float, float);

int main() {
	float a, b, c;
	
	do{
		printf("Coded By: Gus_B\n\n");
		printf("Bienvenido\n\n");
		printf("Introdusca el valor de A (Coeficiente de \"x\" cuadrada).\t\t\t");
		scanf("%f", &a);
		printf("Introdusca el valor de B (Coeficiente de \"x\").\t\t\t\t");
		scanf("%f", &b);
		printf("Introdusca el valor de C (Coeficiente del termino independiente).\t");
		scanf("%f", &c);
		formGen(a, b, c);
		printf("\n\n\n");
		system("pause");
		system("cls");
	}while(1);
	return 0;
}

void formGen(float a, float b, float c){
	float x1, x2, raiz;
	printf("\n\n\n");
	if(a != 0){
		raiz = pow(b, 2)-4*a*c;
		if(raiz == 0){
			x1 = (-b)/(2.0*a);
            printf("La unica raiz de la funcion es:\n\tx = %f", x1);
		}else if(raiz > 0){
	        x1 = (-b+sqrt(raiz))/(2*a);
	        x2 = (-b-sqrt(raiz))/(2*a);
	        printf("Las dos raices de la funcion son:\n\tx1 = %f\n\tx2 = %f", x1, x2);
		}else{
			x1 = (-b)/(2.0*a);
            x2 = sqrt(-raiz)/(2.0*a);
            printf("Las dos raices de la funcion son:\n\tx1 = %f\t(Raiz real)\n\tx2 = %f\t(Raiz imaginaria)", x1, x2);
		}
	}else printf("El valor de A no puede ser 0, buelva a intentarlo con otro valor.");
}

