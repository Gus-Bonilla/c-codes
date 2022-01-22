#include "Nodo.h"

Nodo::Nodo()
{
	numero = 0;
	enlace = 0;	// enlace = NULL;
}

Nodo::~Nodo()
{
}

void Nodo::set_numero(int n)
{
	numero = n;
}

void Nodo::set_enlace(Nodo *e)
{
	enlace = e;
}

int Nodo::get_numero()
{
	return numero;
}

Nodo* Nodo::get_enlace()
{
	return enlace;
}
