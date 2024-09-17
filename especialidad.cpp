#include "especialidad.h"

especialidad::especialidad(string nom) {
	espe = nom;
	cant = 0;
	tam = 10;
	doc = new doctor * [tam];
}
void especialidad::agregarDoctor(doctor* doct) {
	char respuesta;
	do {
		if (cant < tam) {
			for (int i = 0;i < tam;i++) {
				if (doc[i]->getNombreDoc() == doc[i]->getNombreDoc()) {
					cout << "Este doctor ya se encuentra registrado" << endl;
					system("CLS");
				}
			}
			doc[cant] = doct;
			cant++;
		}
		cout << "Desea agregar algun otro doctor?(s/n)" << endl;
		cin >> respuesta;
	} while (respuesta == 's');
	
}
void especialidad::setEspecialidad(string especi) {
	espe = especi;
}
string especialidad::getEspecialidad() {
	return espe;
}
especialidad::~especialidad() {
	for (int i = 0;i < tam;i++) {
		delete doc[i];
	}
	delete[] doc;
}