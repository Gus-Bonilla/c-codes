#include <iostream>
#include <conio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct trabajador{
	int numTrab;
	float salario, reten;
	char puesto[20];
	
	typedef struct datosPersonales{
		char nombre[20], direccion[20];
		int edad;
		double tel;
	};
	
	void capturar();
	void imprimir();
}trabajador;

int main() {
	trabajador t[50];
	int opt, i;
	bool flag=true;
	
	do{
		t[i].capturar();
		if(strcmp(t[i].datosPersonales.nombre, "\n")==0){
			flag = false;
		}else i++;
	}while(flag=true && i<2);
	do{
		printf("Hola, selecciona una opcion.\n1.Mostrar lista de nombres.\n2.Mostrar personas en un rango de edad.\n3.Mostrar personas por inicial.\n4.Buscar por numero de trabajador.\n5.Salir.\n");;
		scanf("%d", opt);
		switch(opt){
			case 1:
				for(int cont=0; cont<i; cont++){
					t[cont].imprimir();
					printf("\n\n\n");
				}
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				int a;
				printf("Introdusca el nunero del trabajador a buscar.\n");
				scanf("%d", a);
				for(int cont=0; cont<i; cont++){
					if(strcmp(t[cont].datosPersonales.nombre, a)==0){
							
					}
				}
				printf("\n\n\n");
				break;
			case 5:
				
				break;
		}
		system("pause");
		system("cls");
	}while(opt != 5);
	return 0;
}

void trabajador::capturar(){
	printf("Nombre:\t");
	fflush(stdin);
	fgets(datosPersonales.nombre, 20, stdin);
	printf("Direccion:\t");
	fflush(stdin);
	fgets(datosPersonales.direccion, 20, stdin);
	printf("Edad:\t");
	scanf("%d", &datosPersonales.edad);
	printf("Telefono:\t");
	scanf("%d", &datosPersonales.tel);
	printf("Numero de trabajador:\t");
	scanf("%d", &numTrab);
	printf("Salario:\t");
	scanf("%f", &salario);
	printf("Porcentaje de retenciones:\t");
	scanf("%f", &reten);
	printf("Puesto:\t");
	fflush(stdin);
	fgets(puesto, 20, stdin);
	system("cls");
}

void trabajador::imprimir(){
	printf("Nombre:\t%s\n", datosPersonales.nombre);
	printf("Direccion:\t%s\n", datosPersonales.direccion);
	printf("Edad:\t%d\n", datosPersonales.edad);
	printf("Telefono:\t%d\n", datosPersonales.tel);
	printf("Numero de trabajador:\t%d\n", numTrab);
	printf("Salario:\t%f\n", salario);
	printf("Porcentaje de retenciones:\t%f\n", reten);
	printf("Puesto:\t%s\n", puesto);
}




