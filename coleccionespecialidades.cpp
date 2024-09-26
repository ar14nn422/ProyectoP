#include "coleccionEspecialidades.h"

coleccionespecialidades::coleccionespecialidades() {
	cantEsp = 0;
	especial = new especialidad * [7];
	for (int i = 0;i < 7;i++) {
		especial[i] = new especialidad(" ");
	}
	doct = new Doctor * [10];
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
		if (especial[opUsuar]->agregarDoc(nomDoc)==true) {
			return true;
		}
	}

}
string coleccionespecialidades::getEspecialidad(int opUsuar) {
	return especial[opUsuar]->getNombre();
}
string coleccionespecialidades::toStringEspc() {
	stringstream s;
	for (int i = 0;i < 7;i++) {
		s << i << "- " << especial[i]->getNombre() << endl;
	}
	return s.str();
}
string coleccionespecialidades::toStringDocs(int opUsuar) {
	stringstream s;
		s <<especial[opUsuar]->getDoctor() << endl;

	return s.str();
}
string coleccionespecialidades::getPacientes(string doc) {
	stringstream s;
	for (int i = 0;i < 10;i++) {
		if (doc == especial[i]->getDoctor()) {
			s<<doct[i]->getPacientes()<<endl;
		}
	}
	return s.str();
}

coleccionespecialidades::~coleccionespecialidades() {
	for (int i = 0;i < 7;i++) {
		delete especial[i];
	}
	delete[] especial;
}