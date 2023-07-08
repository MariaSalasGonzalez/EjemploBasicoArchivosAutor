#pragma once
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;

class autor {
private:
	string nombre;
	string codigo;
	string genero;
public:
	autor(string, string, string);
	string toString();
	void autoGuardar(ofstream&);
	static autor* autoLeer(ifstream&);
};
