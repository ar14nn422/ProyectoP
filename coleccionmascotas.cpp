#include "coleccionmascotas.h"

coleccionmascotas::coleccionmascotas(int n)
{
	cant = 0;
	tam = n;
	mascotas = new mascota * [n];
	for (int i = 0; i < tam; i++)
		mascotas[i] = new mascota();
}

coleccionmascotas::~coleccionmascotas()
{
	for (int i = 0; i < cant; i++) {
		delete mascotas[i];
	}
	delete[] mascotas;
}

int coleccionmascotas::getCant()
{
	return cant;
}

int coleccionmascotas::getTam()
{
	return tam;
}

void coleccionmascotas::setCant(int ncant)
{
	cant = ncant;
}

void coleccionmascotas::setTam(int ntam)
{
	tam = ntam;
}

void coleccionmascotas::agregarMascota(mascota* nMascota)
{
	if (cant < tam) {
		mascotas[cant] = nMascota;
		cant++;
	}
}



string coleccionmascotas::mostrarMascotas()
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s << mascotas[i]->mostrarMascota() << endl;
	}
	return s.str();
}