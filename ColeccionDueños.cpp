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

}

void ColeccionDueños::setCant()
{
}

int ColeccionDueños::getTam()
{
	return 0;
}

int ColeccionDueños::getCant()
{
	return 0;
}

void ColeccionDueños::ingresarDuennos(Dueño* nuevodue�o)
{
	if (cant < tam) {
		duenno[cant] = nuevodue�o;
		cant++;
	}
}

string ColeccionDueños::mostrarDueños()
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s << duenno[i]->mostrarMasc_d() << endl;
	}

	return s.str();
}