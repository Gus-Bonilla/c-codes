#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string multiplicacionBinaria(string x, string y);
int bin2dec(string x);
string sumaBin(string x, string y);
string sumadorComp(string datos);

string multiplicacionBinaria(string x, string y) {
	string resultado = "00000000";
	int multiplicador;

	multiplicador = bin2dec(y);
	while (multiplicador > 0) {
		resultado = sumaBin(resultado, x);
		multiplicador--;
	}

	return resultado;
}

int bin2dec(string x) {
	int resultado = 0, longitud = 7, multiplicador = 1;

	while (longitud >= 0) {
		x[longitud] = x[longitud] - 48;
		resultado = resultado + (x[longitud] * multiplicador);
		multiplicador = multiplicador * 2;
		longitud--;
	}

	return resultado;
}

string sumaBin(string x, string y) {
	string resultado = "00000000";
	string datos = "0000";										//a, b, s, c
	char a, b, s, c;
	int tamaño = 7;

	while (tamaño >= 0) {
		a = x[tamaño];
		b = y[tamaño];
		c = datos[3];
		datos[0] = a;
		datos[1] = b;
		datos[3] = c;
		datos = sumadorComp(datos);
		resultado[tamaño] = datos[2];
		tamaño--;
	}

	if (datos[3] == '1')
		resultado[0] = '0';

	return resultado;
}

string sumadorComp(string datos) {
	bool a, b, s, cIn, cOut, aux;

	a = datos[0] - 48;
	b = datos[1] - 48;
	s = datos[2] - 48;
	cIn = datos[3] - 48;

	aux = (!a && b) || (a && !b);
	s = (!aux && cIn) || (aux && !cIn);
	cOut = (a && b) || (aux && cIn);

	datos[2] = s + 48;
	datos[3] = cOut + 48;

	return datos;
}
