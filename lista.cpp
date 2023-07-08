#include "Lista.h"

lista::lista() {
	primero = NULL;
	actual = NULL;
}

void lista::insertarInicio(autor* e) {
	primero = new nodo(e, primero);
}


//--------------------------------------
string lista::toString() {
	actual = primero;
	stringstream s;
	while (actual != NULL)
	{
		s << actual->toStringNodo();
		actual = actual->getSig();
	}

	return s.str();
}
//---------------------------------------------//
int lista::cuentaNodos() {
	actual = primero;
	int can = 0;
	while (actual != NULL)
	{
		can++;
		actual = actual->getSig();
	}
	return can;
}

//---------------------------------------------//
bool lista::listaVacia() {
	return  (primero == NULL) ? true : false;
}

//---------------------------------------------//
bool lista::eliminaInicio() {
	if (primero == NULL)  // caso 1: la lista esta vacia
	{
		return false;
	}
	else // caso 2: la lista no esta vacia
	{
		actual = primero;
		primero = primero->getSig();
		delete actual;
		return true;
	}
}


//---------------------------------------------//

lista::~lista() {
	while (!listaVacia())
	{
		eliminaInicio();
	}
}

////////////////////////////////////////////////////////////
nodo::nodo(autor*  e, nodo* s) {
	info = e;
	sig = s;
}
nodo:: ~nodo() {
	cout << "Se ha destruido un Nodo" << endl;
}
void nodo::setInfo(autor* e) { info = e; }
autor*  nodo::getInfo() { return info; }
void nodo::setSig(nodo* s) { sig = s; }
nodo* nodo::getSig() { return sig; }

string nodo::toStringNodo() {
	return  info->toString();
}