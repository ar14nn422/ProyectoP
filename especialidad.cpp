#include "especialidad.h"

especialidad::especialidad(string nomb) {
	nombre = nomb;
	cantDoc = 0;
	doc = new Doctor * [10];
	for (int i = 0;i < 10;i++) {
		doc[i] = new Doctor("-");
	}
}
bool especialidad::agregarDoc(string nombre) {
	if (cantDoc < 10) {
		doc[cantDoc] = new Doctor(nombre);
		cantDoc++;
		return true;
	}
	else {
		return false;
	}
}
Doctor* especialidad::encontrarDoc(int doct) {
	if (doct >= 0 && doct < cantDoc) {
		return doc[doct]; 
	}
	return nullptr; 
}
string especialidad::getNombre() {
	return nombre;
}
string especialidad::getDoctor() {
	stringstream s;
	for (int i = 0;i < cantDoc;i++) {
		s<<i<<"- "<<doc[i]->getNombreDoc() << endl;
	
	}
	return s.str();
	
}
especialidad::~especialidad() {

}

