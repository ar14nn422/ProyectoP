#include "especialidad.h"

especialidad::especialidad(string nomb) {
	nombre = nomb;
	cantDoc = 0;
	doc = new Doctor * [10];
	for (int i = 0;i < 10;i++) {
		doc[i] = new Doctor(" ");
	}
}
void especialidad::agregarDoc(string nombre) {
	if (cantDoc < 10) {
		doc[cantDoc] = new Doctor(nombre);
		cout << "Se agrego un doctor" << endl;
	}
	else {
		cout << "No se pueden registrar mas doctores" << endl;
	}
	
}
string especialidad::getNombre() {
	return nombre;
}
string especialidad::getDoctor() {
	for (int i = 0;i < 10;i++) {
		return doc[i]->getNombreDoc();
	}
	
}
especialidad::~especialidad() {

}

