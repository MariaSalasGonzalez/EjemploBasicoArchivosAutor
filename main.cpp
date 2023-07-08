//--------------------------------main.h------------------------------
#include "autor.h";
#include "lista.h";

void main() {
	ifstream entrada;
	ofstream salida;

	string opcion;
	string nombre, codigo, genero;
	string nombreArchivo= "archi.txt";
	cout <<endl<< "       MENU" << endl << endl;
	cout << "[1] Para  agregar y guardar Autor" << endl;
	cout << "[2] Para leer Autor" << endl;
	cout << "[3] Para salir" << endl;
	cout << "opcion: ";
	getline(cin, opcion);
	cout << endl;
	while (opcion != "3")
	{
		if (opcion == "1")// guardar
		{
			salida.open("archivo.txt", ios::app);
			cout << "Nombre: ";
			getline (cin, nombre);
			cout << "Codigo: ";
			getline(cin, codigo);
			cout << "Genero: ";
			getline(cin, genero);
			autor* a1 = new autor(nombre, codigo, genero);
			a1->autoGuardar(salida);
			salida.close();
		}
		bool ban1 = true;
		bool ban2 = true;

		if (opcion == "2")
		{
			entrada.open("archivo.txt");
			lista* li = new lista();
			while (!entrada.eof()) {
				autor* aux = NULL;
				aux = autor::autoLeer(entrada);
				if (aux != NULL) {
					//cout << aux->toString() << endl;
					li->insertarInicio(aux);
				}
				else
				{
					cout << "Error de lectura" << endl;
				}
			}
			cout << li->toString();
			entrada.close();
		}
		
		cout << endl << "       MENU" << endl << endl;
		cout << "[1] Para  agregar y guardar Autor" << endl;
		cout << "[2] Para leer Autor" << endl;
		cout << "[3] Para salir" << endl;
		cout << "opcion: ";
		
		getline(cin, opcion);
		cout << endl;
		system("cls");
	}
	cin.get();

}