//--------------------------------autor.h------------------------------
#include "autor.h";


autor::autor(string nom, string cod, string des) {
	nombre = nom;
	codigo = cod;
	genero = des;
}

string autor::toString() {
	stringstream s;
	s << "------------Autor--------------" << endl;
	s<< "Nombre....= " << nombre << endl;
	s<< "Codigo....= " << codigo << endl;
	s <<"Genero....= " << genero << endl;
	return s.str();
}



void autor::autoGuardar(ofstream& salida) {
	cout << "<<Guardando>>" << endl;
	salida << nombre << "\t";
	salida << codigo << "\t";
	salida << genero << "\n";
}

autor*  autor::autoLeer(ifstream& entrada) {
	string nom, cod, ge;
	
	if (!(getline(entrada, nom, '\t'))) { return NULL; }
	if (!(getline(entrada, cod, '\t'))) { return NULL; }
	if (!(getline(entrada, ge, '\n'))) { return NULL; }
	cout << "   --Cargando registro" << endl;
	return new autor(nom, cod, ge);
}









