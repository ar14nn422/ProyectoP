#include "ColeccionDueños.h"

ColeccionDueños::ColeccionDueños(int n)
{
	tam = n;
	cant = 0;
	duenno = new Dueño * [n];
	for (int i = 0; i < tam; i++) {
		duenno[i] = new Dueño();
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

void ColeccionDueños::ingresarDuennos(Dueño* nuevodueno)
{
	if (cant < tam) {
		duenno[cant] = nuevodueno;
		cant++;
	}
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