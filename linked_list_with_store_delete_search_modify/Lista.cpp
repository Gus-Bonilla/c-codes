#include "Lista.h"

Lista::Lista()
{
	cabeza = 0;
}

Lista::~Lista()
{
}

void Lista::set_cabeza(Nodo *c)
{
	cabeza = c;
}

Nodo* Lista::get_cabeza()
{
	return cabeza;
}

Nodo* Lista::get_ultimo()
{
	Nodo *ultimo = get_cabeza();
	
	while(ultimo->get_enlace()!=0)
	{
		ultimo = ultimo->get_enlace();
	}
	return ultimo;
}

void Lista::agregar_nodo(Nodo *nuevo)
{
	if(get_cabeza()==0)
	{
		set_cabeza(nuevo);
	}
	else
	{
		get_ultimo()->set_enlace(nuevo);
	}
}

Nodo* Lista::buscar(int num)
{
	Nodo* find=get_cabeza();
	
	while((find!=0 ) && (find->get_numero()!=num))
	{
		find=find->get_enlace();
	}
	return find;	
}

void Lista::eliminar(int num)
{
	Nodo*find=get_cabeza();
	Nodo*anterior=0;
	
	if(find->get_numero()==num)
	{
		set_cabeza(get_cabeza()->get_enlace());
	}
	else
	{
		while((find!=0)&&(find->get_numero()!=num))
		{
			anterior=find;
			find=find->get_enlace();
			
			if(find!=0)
			{
				anterior->set_enlace(find->get_enlace());
			}
		}
	}
	delete find;
}

void Lista::modificar(int num,int num2)
{
	Nodo* cambiar=get_cabeza();
	
	while((cambiar!=0)&&(cambiar->get_numero()!=num))
	{
		cambiar=cambiar->get_enlace();
	}
	if(cambiar!=0)
	{
		cambiar->set_numero(num2);
	}
}
