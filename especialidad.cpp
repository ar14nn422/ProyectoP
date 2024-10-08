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
Doctor* especialidad::encontrarDocN(string doct)
{
	for (int i = 0; i < cantDoc; i++) {
		if (doc[i]->getNombreDoc() == doct) { 
			return doc[i]; 
		}
	}
	return nullptr;
}
string especialidad::getNombre() {
	return nombre;
}
string especialidad::mostrarDoctor() {
	stringstream s;
	for (int i = 0;i < cantDoc;i++) {
		s<<(i+1)<<"- "<<doc[i]->getNombreDoc() << endl;
	
	}
	return s.str();
	
}
string especialidad::getDoctor(string doct) {
	string docaux;
	for (int i = 0;i < cantDoc;i++) {
		doc[i]->getNombreDoc() = docaux;
		if (docaux == doct) {
			return docaux;
		}
	}
}
especialidad::~especialidad() {

}

