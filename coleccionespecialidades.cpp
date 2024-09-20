#include "coleccionEspecialidades.h"

coleccionespecialidades::coleccionespecialidades() {
	cantEsp = 0;
	especial = new especialidad * [7];
	for (int i = 0;i < 7;i++) {
		especial[i] = new especialidad(" ");
	}
}
bool coleccionespecialidades::adminOpUno(string nombEsp) {
	if (cantEsp < 7) {
		especial[cantEsp] = new especialidad(nombEsp);
		cantEsp++;
		system("cls");
		return true;
	}
}
bool coleccionespecialidades::adminOpDos(int opUsuar,string nomDoc) {
	if (opUsuar < 7) {
		especial[opUsuar]->agregarDoc(nomDoc);
		system("cls");
		return true;
	}

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
coleccionespecialidades::~coleccionespecialidades() {
	for (int i = 0;i < 7;i++) {
		delete especial[i];
	}
	delete[] especial;
}