#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct escuderia{
	char nom[50];
	char pais[20];
	struct corredor{
		char nom[50];
		char pais[20];
		int edad;
	}corredor;
	struct vehiculo{
		char model[20];
		int cilin;
		float vel_max;
	}vehiculo;
	void capturar(int, int);
	void imprimir();
}escuderia;

int main() {
	int opt, t, el, n=0;
	char busca[50];
	bool flag;
		
	printf("Coded By: Gus_B\n\n");
	printf("Bienvenido\n\n");
	printf("Introdusca la cantidad de escuderias que seran registradas. ");
	scanf("%d",&t);
	system("cls");
	
	escuderia E[t];
	
	
	do{
		printf("Coded By: Gus_B\n\n");
		printf("\nElija una opcion.\n1)Dar de alta una escuderia.\n2)Buscar una escuderia.\n3)Salir.\n");
		scanf("%d",&opt);
		
		flag=false;
		
		switch(opt){
			case 1:
				E[n].capturar(n,t);
				n++;
				break;
			case 2:
				if(n!=0){					
					printf("\n\n\nIntrodusca el nombre de la escuderia que desea buscar. ");
					fflush( stdin );
					fgets(busca, 50, stdin);
						
					for(int i=0; i<n; i++){
						if(strcmp(busca, E[i].nom)==0){
						el=i;
						flag=true;
						}
					}
					if(flag==true){
						printf("\n\n\nLa busqueda de la escuderia ha sido exitosa xD xD.\n\n\n");
						E[el].imprimir();
					}else printf("\n\n\nNo se encuentra registrada la escuderia solicitada.\n\n\n");
				}else printf("\n\n\nNo hay ninguna escuderia registrada aun.\n\n\n");
				break;
			case 3:
				printf("\n\n\n");
				break;
			default:
				printf("\n\n\nOpcion invalida, vuelva a elejir una opcion.\n\n\n");		
		}
		system("pause");
		system("cls");		
	}while(opt!=3);
	return 0;
}

void escuderia::capturar(int n, int t){
	if(n<t){
		printf("Ingresar el nombre de la escuderia.\t\t");
		fflush( stdin );
		fgets(nom, 50, stdin);	
		printf("Ingresar el pais de la escuderia.\t\t");
		fflush( stdin );
		fgets(pais, 20, stdin);
		printf("Ingresar el nombre del corredor.\t\t");
		fflush( stdin );
		fgets(corredor.nom, 50, stdin);
		printf("Ingresar el pais del corredor.\t\t\t");
		fflush( stdin );
		fgets(corredor.pais, 20, stdin);
		printf("Ingresar la edad del corredor.\t\t\t");
		scanf("%d",&corredor.edad);
		printf("Ingresar el modelo del vehiculo.\t\t");
		fflush( stdin );
		fgets(vehiculo.model, 20, stdin);
		printf("Ingresar el cilindraje del vehiculo.\t\t");
		scanf("%d",&vehiculo.cilin);
		printf("Ingresar la velocidad maxima del vehiculo.\t");
		scanf("%f",&vehiculo.vel_max);
	}else printf("\n\n\nSe ha alcanzado el numero maximo de escuderias registrables.\n\n\n");
}

void escuderia::imprimir(){
	printf("\n\n\nNombre de escuderia:\t\t %s", nom);
	printf("Pais de la escuderia:\t\t %s", pais);
	printf("Nombre del corredor:\t\t %s", corredor.nom);
	printf("Pais del corredor:\t\t %s", corredor.pais);
	printf("Edad del corredor:\t\t %d\n", corredor.edad);
	printf("Modelo del vehiculo:\t\t %s", vehiculo.model);
	printf("Cilindrage del vehiculo:\t %d\n", vehiculo.cilin);
	printf ("Velocidad maxima del vehiculo:\t %f\n\n\n", vehiculo.vel_max);
}

