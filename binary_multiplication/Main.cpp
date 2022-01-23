#include <iostream>
#include <string>
#include <stdlib.h>

#include "Funciones.h";

using namespace std;

int main(void) {
	system("color 4F");

	string x = "00000000", y = "00000000", resultado, x1, y1;

	while (1) {
		cout << endl << endl << endl << endl;
		cout << "\t\t\t\t----------------------" << endl;
		cout << "\t\t\t\tMultiplicacion Binaria" << endl;
		cout << "\t\t\t\t----------------------" << endl;
		cout << endl << endl << endl << endl;

		cout << "Este programa trabaja con entradas de 4 bits.\n";
		cout << "Introdusca el multiplicando: ";
		cin >> x1;
		cout << "Introdusca el multiplicador: ";
		cin >> y1;

		x = "0000" + x1;
		y = "0000" + y1;
		resultado = multiplicacionBinaria(x, y);

		cout << endl << endl << endl;
		cout << "Resultado = Multiplicando * Multiplicador" << endl;
		cout << "Resultado = " << resultado << endl;
		cout << endl << endl << endl;

		system("pause");
		system("cls");
	}

	return 0;
}