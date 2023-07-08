#pragma once
#pragma once
#pragma once
#include "autor.h"

class nodo;

class lista
{
private:
	nodo * primero;
	nodo * actual;
public:
	lista();
	void insertarInicio(autor*);
	bool eliminaInicio();
	string toString();
	int cuentaNodos();
	bool listaVacia();
	~lista();
};


class nodo
{
private:
	autor * info;
	nodo * sig;
public:
	nodo(autor*, nodo*);
	~nodo();
	void setInfo(autor*);
	autor* getInfo();
	void setSig(nodo*);
	nodo* getSig();
	string toStringNodo();
};