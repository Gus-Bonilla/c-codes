#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista
{	
	private:
		Nodo *cabeza;
		
	public:
		Lista();
		~Lista();
		
		void set_cabeza(Nodo*);
		
		Nodo* get_cabeza();
		Nodo* get_ultimo();
		
		Nodo* buscar(int);
		void agregar_nodo(Nodo*);
		void eliminar(int);
		void modificar(int, int);
};

#endif
