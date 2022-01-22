#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int[13] capturar();
void eval(int[5][13]);

int main() {
	int i, a, trabajadores[5][13];
	
	printf("Coded By: Gus_B\n\n");
	printf("Bienvenido\n\n");
	system("pause");
	system("cls");
	
	for(i=1; i<=5; i++){
		printf("Coded By: Gus_B\n\n");
		printf("Trabajador %d:\n\n", i);
		//trabajadores[i-1] = capturar();
		trabajadores[i-1][12] = 0;
	
		for(a=0; a<12; a++){
			printf("Introdusca las ganancias del mes %d.\t$", a+1);
			scanf("%d", &trabajadores[i-1][a]);
		}
		for(a=0; a<12; a++){
			trabajadores[i-1][12] = trabajadores[i-1][12]+trabajadores[i-1][a];
		}
		system("cls");
	}
	printf("Coded By: Gus_B\n\n");
	
	for(i=0; i<5; i++){
		printf("\n\n\n");
		printf("*Trabajador %d:\n\n", i+1);
		for(a=0; a<12; a++){
			printf("\tGanancias del mes %d:\t$%d\n", a+1, trabajadores[i][a]);
		}
		printf("\n\tGanancias anuales del trabajador %d:\t$%d\n", i+1, trabajadores[i][12]);
	}
	
	printf("\n\n\n");
	eval(trabajadores);	
	printf("\n\n\n");
	system("pause");
	system("cls");
	return 0;
}

/*
int[13] capturar(){
	int i, trabajador[13];
	trabajador[12] = 0;
	
	for(i=0; i<12; i++){
		printf("Introdusca las ganancias del mes %d.\t", i+1);
		scanf("%d", trabajador[i]);
	}
	for(i=0; i<12; i++){
		trabajador[12] = trabajador[12]+trabajador[i];
	}
	return trabajador;
}
*/

void eval(int trabajadores[5][13]){
	int gMax=0, gMin=0, tMax, tMin, i;
	
	gMax = trabajadores[0][12];
	tMax = 1;
	gMin = trabajadores[0][12];
	tMin = 1;
			
	for(i=0; i<5; i++){
		if(gMax<trabajadores[i][12]){
			gMax = trabajadores[i][12];
			tMax = i+1;
		}
		if(gMin>trabajadores[i][12]){
			gMin = trabajadores[i][12];
			tMin = i+1;
		}
	}
	printf("\n\nLas ganancias anuales maximas son las del trabajador %d: $%d\n\n", tMax, gMax);
	printf("Las ganancias anuales minimas son las del trabajador %d: $%d", tMin, gMin);
}

