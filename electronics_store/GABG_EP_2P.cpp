// Coded By: Gus_B

#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class DispElectronico{
	private:	int nTransistores;
				int nResistencias;
				float precio;
				char nombre[50];
				
	public:		DispElectronico(){};
				~DispElectronico(){};
				float venderDisp(int);
				virtual void leerDatos();
				virtual void imprimirDatos();
};

class Televisor : public DispElectronico{
	private:	int pulgadas;
				int nCanales;
				
	public:		Televisor(){};
				~Televisor(){};
				void leerDatos();
				void imprimirDatos();
};

class Computadora : public DispElectronico{
	private:	int nProcesadores;
				int ram;
				
	public:		Computadora(){};
				~Computadora(){};
				void leerDatos();
				void imprimirDatos();
};

int main() {
	int x,y,a,z;
	y=0;
	cout<<"Introdusca la cantidad de dispositivos electrónicos que se ingresaran: ";
	cin>>x;
	DispElectronico *disp[x];
	
	int opt;
	do{	
			cout<<"1) Registrar computadora."<<endl;
			cout<<"2) Registrar televisor."<<endl;
			cout<<"3) Vender un dispocitivo electronico."<<endl;
			cout<<"4) Ver los dispocitivos registrados."<<endl;
			cout<<"5) salir"<<endl;
			cin>>a;

			switch (opt){
				case 1:
					if(x>y){
						disp[y] = new Computadora();
						disp[y]->leerDatos();
						disp[y]->leerDatos();
						y++;
					}
					break;
				case 2:
					if(x>y){
						disp[y] = new Televisor();
						disp[y]->leerDatos();
						disp[y]->leerDatos();
						y++;
					}
					break;
				case 3:
					for(z=0; z<y; z++){
						z--;
						disp[z]->imprimirDatos();
					}
					break;
				case 4:
					
					break;
				default:
					cout<<"Entrada invalida."<<endl;
					break;
			}
	}while (a!=5);
	
	return 0;
}


float DispElectronico::venderDisp(int cant){
	float result;
	result = cant * this->precio;
	return result;
}

void DispElectronico::leerDatos(){
	cout<<"Numero de transistores: "<<endl;
	cin>>this->nTransistores;
	cout<<"Numero de resistencias: "<<endl;
	cin>>this->nResistencias;
	cout<<"Precio: "<<endl;
	cin>>this->precio;
	cout<<"Nombre: "<<endl;
	gets(this->nombre);
}

void DispElectronico::imprimirDatos(){
	cout<<"Numero de transistores: "<<this->nTransistores<<endl;
	cout<<"Numero de resistencias: "<<this->nResistencias<<endl;
	cout<<"Precio: "<<this->precio<<endl
	cout<<"Nombre: "<<this->nombre<<endl
}

void Televisor::leerDatos(){
	this->DispElectronico()::leerDatos();
	cout<<"Pulgadas: "<<endl
	cin>>this->pulgadas;
	cout<<"Numero de canales: "<<endl;
	cin>>this->nCanales;
}

void Televisor::imprimirDatos(){
	this->DispElectronico()::imprimirDatos();
	cout<<"Pulgadas: "<<this->pulgadas<<endl;
	cout<<"Numero de canales: "<<this->nCanales<<endl;
}

void Computadora::leerDatos(){
	this->DispElectronico()::leerDatos();
	cout<<"Pulgadas: "<<endl;
	cin>>this->pulgadas;
	cout<<"Numero de canales: "<<endl;
	cin>>this->nCanales;
}

void Computadora::imprimirDatos(){
	this->DispElectronico()::imprimirDatos();
	cout<<"Numero de procesadores: "<<this->nProcesadores<<endl;
	cout<<"Memoria RAM: "<<this->ram<<endl;
}

