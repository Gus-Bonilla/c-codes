#ifndef NODO_H
#define NODO_H

class Nodo
{
	private:
		int numero;
		Nodo *enlace;
		
	public:
		Nodo();
		~Nodo();
		
		void set_numero(int);
		void set_enlace(Nodo*);
		
		int get_numero();
		Nodo* get_enlace();
};

#endif
