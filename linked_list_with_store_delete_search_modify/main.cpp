#include <iostream>

#include "Lista.h"
#include "Nodo.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n=0, x=0, num2;
	Nodo *aux = 0, *temp=0;
	Lista *cadena = new Lista();
	
	while(x<5)
	{
		aux = new Nodo();
		cout<<"Introdusca un valor: ";
		cin>>n;
		aux->set_numero(n);
		cadena->agregar_nodo(aux);
		x++;
		temp = cadena->get_cabeza();
		
		while(temp!=NULL)
		{
			cout<<temp->get_numero();
			
			if(temp->get_enlace()!=NULL)
			{
				cout<<"->";			
			}
			else
			{
				cout<<endl;
			}
			temp = temp->get_enlace();
		}
		system("pause");		
	}
	//Buscador
	system("cls");
	int num;
	cout<<"Que valor desea buscar?: ";
	cin>>num;
	temp=cadena->buscar(num);
	
	if(temp!=0)
	{
		cout<<"El valor fue encontrado en la direccion de memoria:"<<temp<<endl;
	}
	else
	{
		cout<<"El valor no fue encontrado en la lista."<<endl;
	}
	system("pause");
	//Borrar
	system("cls");
	cout<<"Que valor desea borrar?: ";
	cin>>num;
	temp=cadena->buscar(num);
	
	if(temp!=0)
	{
		cadena->eliminar(num);
		cout<<"EL valor "<<num<<"fue borrado."<<endl;
	}
	else
	{
		cout<<"El valor no fue encontrado."<<endl;
	}
	//Modificar
	cout<<"Que valor desea modificar?: ";
	cin>>num;
	cout<<"Cual sera el nuevo valor?: ";
	cin>>num2;
	temp=cadena->buscar(num);
	
	if(temp!=0)
	{
		cadena->modificar(num,num2);
		cout<<"El valor ha sido modificado."<<endl;
	}
	else
	{
		cout<<"El valor a modificar no fue encontrado."<<endl;
	}
	return 0;
}
