// Autores: Gustavo A. Bonilla, Isaias De Angeles, Angel Ramos
// Fecha:   Nov 09, 2021
// Código:  Punteros a Función  

#include <stdio.h>

/////////////////////////////// Functions Definition ///////////////////////////////
float suma(int d1, int d2);
float resta(int d1, int d2);
float mult(int d1, int d2);
float div(int d1, int d2);

////////////////////////////////// Main Function ///////////////////////////////////
int main(void){
	int d1, d2, selector;
	float resultado;
	float (*ptrs[4]) (int, int);
	float (*funcPtr) (int, int);
	
	printf("\nBienvenido :)\nEn esta app podrás hacer operaciones matemáticas básicas.\n\t0.Suma\n\t1.Resta\n\t2.Multiplicación\n\t3.División\n");
	printf("\nIntroduce el dato 1: \n");
	scanf("%d", &d1);
	printf("\nIntroduce el dato 2: \n");
	scanf("%d", &d2);
	printf("\nIntroduce el número de operación que requieres: \n");
	scanf("%d", &selector);

	ptrs[0] = suma;
	ptrs[1] = resta;
	ptrs[2] = mult;
	ptrs[3] = div;

	switch(selector){
		case 0:
			funcPtr = ptrs[0];
			break;
		case 1:
			funcPtr = ptrs[1];
			break;
		case 2:
			funcPtr = ptrs[2];
			break;
		case 3:
			funcPtr = ptrs[3];
			break;
		default:
			selector = 10;
			break;
	}

	if(selector==10){
		printf("\nNúmero de operación incorrecto :(\n\n");
		return 0;
	}

	resultado = funcPtr(d1, d2);

	printf("\nEl resultado de la ");

	switch(selector){
		case 0:
			printf("suma");
			break;
		case 1:
			printf("resta");
			break;
		case 2:
			printf("multiplicación");
			break;
		case 3:
			printf("división");
			break;
	}

	printf(" es: %.2f\n\n", resultado);

	return 0;
}

//////////////////////////// Functions Implementation /////////////////////////////
float suma(int d1, int d2){
	return d1 + d2;
}

float resta(int d1, int d2){
	return d1 - d2;
}

float mult(int d1, int d2){
	return d1 * d2;
}

float div(int d1, int d2){
	float resultado = d1;
	return resultado / d2;
}
