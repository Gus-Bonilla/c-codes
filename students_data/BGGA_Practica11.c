/* 	Programa que guarda datos de 5 alumnos dentro de una estructura.
		
		-Datos a capturar:						-Datos a calcular:											-Funciones a implementar:
			Nombre									Calificacion final(Con la ponderacion):						1. Capturar datos del alumno
			Registro									P1=15%													2. Ver promedio final de 1 alumno
			Carrera										P2=35%													3. Ver todos los datos capturados
			Calificacion P1								P3=50%													4. Salir
			Calificacion P2
			Calificacion P3
			Semestre
	
	La estructura debe ser local, se debe usar una funcion para capturar datos, otra para calcular el promedio final y otra para imprimir los
	datos de todos los alumnos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct alumno{
	char nom[30],carr[30];
	int reg,sem;
	float cal1,cal2,cal3,calf;
}alumno;

alumno capturar(alumno);
float promAlu(alumno);
void mostrarPromAlu(float);
void mostrarAlu(alumno, int);

int main() {
	alumno a[5];
	int n=0, opt, el, flag, i;
	char busca[30];
	
	do{
		printf("Coded By: Gus_B\n\n");
		printf("\nElija una opcion.\n1)Dar de alta un alumno.\n2)Ver promedio final de 1 alumno.\n3)Ver todos los datos ingresados hasta ahora.\n4)Salir\n");
		scanf("%d",&opt);
		
		flag=0;
		
		switch(opt){
			case 1:
				if(n<5){
					a[n] = capturar(a[n]);
					n++;
				} else printf("\n\n\nNo es posible registrar mas de 5 estudiantes.\n");
				printf("\n\n\n");
				break;
			case 2:
				if(n!=0){					
					printf("\n\n\nIntrodusca el nombre del estudiante del que desea obtener la calificacion final.\n");
					fflush( stdin );
					fgets(busca, 30, stdin);
						
					for(i=0; i<n; i++){
						if(strcmp(busca, a[i].nom)==0){
						el=i;
						flag=1;
						}
					}
					if(flag==1){
						printf("\n\n\nLa busqueda del estudiante ha sido exitosa xD xD.\n\n\n");
						mostrarPromAlu(a[el].calf);
					}else printf("\n\n\nNo se encuentra registrado el estudiante solicitado.\n");
				}else printf("\n\n\nNo hay ningun estudiante registrado aun.\n");
				printf("\n\n\n");
				break;
			case 3:
				if(n!=0){
					for(i=0; i<n; i++){
						mostrarAlu(a[i], i);
				}
				}else printf("\n\n\nNo hay ningun estudiante registrado aun.\n");
				printf("\n\n\n");
				break;
			case 4:
				printf("\n\n\n");
				break;
			default:
				printf("\n\n\nOpcion invalida, vuelva a elejir una opcion.\n\n\n");		
		}
		system("pause");
		system("cls");	
		
	}while(opt!=4);
	
	return 0;
}

alumno capturar(alumno a){	
	printf("\n\n\nIngrese el nombre.\t\t\t\t");
	fflush( stdin );
	fgets(a.nom, 30, stdin);
	printf("Ingrese la carrera.\t\t\t\t");
	fflush( stdin );
	fgets(a.carr, 30, stdin);
	printf("Ingrese el registro.\t\t\t\t");
	scanf("%d",&a.reg);
	printf("Ingrese el semestre.\t\t\t\t");
	scanf("%d",&a.sem);
	printf("Ingrese la calificacion del primer parcial.\t");
	scanf("%f",&a.cal1);
	printf("Ingrese la calificacion del segundo parcial.\t");
	scanf("%f",&a.cal2);
	printf("Ingrese la calificacion del tercer parcial.\t");
	scanf("%f",&a.cal3);
	
	a.calf=promAlu(a);
	return a;	
}

float promAlu(alumno a){	
	float x;
		
	x = (0.15*a.cal1) + (0.35*a.cal2) + (0.5*a.cal3);
	
	return x;
}

void mostrarPromAlu(float cal){
	printf("La calificacion fina del alumno es:\t%f\n\n", cal);
	
	if(cal>=70){
		printf("Por lo tanto el alumno esta:\t\tAprobado.\n");
	}else printf("Por lo tanto el alumno esta:\t\tReprobado.\n");
}

void mostrarAlu(alumno a, int n){
	printf("\n\n\n\nAlumno:\t\t\t\t%d\n", n+1);
	printf("Nombre:\t\t\t\t%s", a.nom);
	printf("Carrera:\t\t\t%s",a.carr);
	printf("Registro:\t\t\t%d\n",a.reg);
	printf("Semestre:\t\t\t%d\n",a.sem);
	printf("Calificacion primer parcial:\t%f\n",a.cal1);
	printf("Calificacion segundo parcial:\t%f\n",a.cal2);
	printf("Calificacion tercer parcial:\t%f\n",a.cal3);
	printf("Calificacion final:\t\t%f\n",a.calf);
	
	if(a.calf>=70)printf("Estatus:\t\t\tAprobado.\n");
	else printf("Estatus:\t\t\tReprobado.\n");
}

