#include "ColeccionDueños.h"

ColeccionDueños::ColeccionDueños()
{
	tam = 54;
	cant = 0;
	duenno = new Duenno * [tam];
	for (int i = 0; i < tam; i++) {
		duenno[i] = new Duenno();
	}
	mascotas = new coleccionmascotas * [tam];
	for (int i = 0;i < tam;i++) {
		mascotas[i] = new coleccionmascotas(5);
	}
}

ColeccionDueños::~ColeccionDueños()
{
	for (int i = 0; i < cant; i++) {
		delete duenno[i];
	}
	delete[] duenno;
}

void ColeccionDueños::setTam()
{
	tam = tam;
}

void ColeccionDueños::setCant()
{
	cant = cant;
}

int ColeccionDueños::getTam()
{
	return tam;
}

int ColeccionDueños::getCant()
{
	return cant;
}

void ColeccionDueños::ingresarDuennos(string nombre, string id)
{
	if (cant < tam) {
		duenno[cant] = new Duenno(nombre, id);
		cant++;
	}
}
int ColeccionDueños::getposIdDuenno(string idD) {
	for (int i = 0;i < cant;i++) {
		if (duenno[i]->getId() == idD) {
			return i;
		}
	}
}

Duenno* ColeccionDueños::encontrarId(string id)
{
	for (int i = 0; i < cant; i++) {
		if (duenno[i]->getId() == id) {
			return duenno[i];
		}
	}

	return nullptr;
}

void ColeccionDueños::ingresarMascotas(string id, string nombreMas) {
	if (cant < tam) {
		mascotas[getposIdDuenno(id)]= new coleccionmascotas(5);
		mascotas[getposIdDuenno(id)]->agregarMascota(nombreMas);
		cant++;
	}
}
string ColeccionDueños::mostrarMascotas(string id) {
	stringstream s;
	for (int i = 0;i < cant;i++) {
		if (duenno[i]->getId() == id) {
			s << duenno[i]->getMascotas() << endl;
		}
	}
	return s.str();
}

string ColeccionDueños::mostrarDueños()
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s <<"Duenno:"<< duenno[i]->getNombreDuenno() << "   "<<"Id:"<< duenno[i]->getId() << endl;
		s << duenno[i]->mostrarMasc_d() << endl;
	}

	return s.str();
}