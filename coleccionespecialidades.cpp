#include "coleccionEspecialidades.h"

coleccionespecialidades::coleccionespecialidades() {
	cantEsp = 0;
	especial = new especialidad * [7];
	for (int i = 0;i < 7;i++) {
		especial[i] = new especialidad(" ");
	}
}
void coleccionespecialidades::adminOpUno() {
	string nombEsp;
	cout << "Favor ingrese el nombre de la especialidad" << endl;
	getline(cin, nombEsp);
	if (cantEsp < 7) {
		especial[cantEsp] = new especialidad(nombEsp);
		system("cls");
	}
	else {
		cout << "No es posible agregar mas especialidades" << endl;
		system("cls");
	}
}
void coleccionespecialidades::adminOpDos() {
	int opUsuar;
	string nomDoc;
	cout << "Favor seleccione la especialidad en la que desea registrar al doctor" << endl;
	cout << toStringEspc();
	cin >> opUsuar;
	cout << "Favor ingrese el nombre del doctor" << endl;
	getline(cin, nomDoc);
	especial[opUsuar]->agregarDoc(nomDoc);
	system("cls");
}
void coleccionespecialidades::adminOpTres() {

}
void coleccionespecialidades::adminOpCuat() {

}
string coleccionespecialidades::toStringEspc() {
	stringstream s;
	for (int i = 0;i < 7;i++) {
		s << i << "- " << especial[i]->getNombre() << endl;
	}
	return s.str();
}