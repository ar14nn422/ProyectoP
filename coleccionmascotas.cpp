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

void coleccionmascotas::agregarMascota(string nomb)
{
	if (cant < tam) {
		mascotas[cant] =new mascota(nomb);
		cant++;
	}

}

mascota* coleccionmascotas::buscarporNombre(string nomb)
{
	for (int i = 0; i < cant; i++) {
		if (mascotas[i]->getNombre() == nomb) { 
			return mascotas[i];  
		}
	}
	return nullptr;
}




string coleccionmascotas::mostrarMascotas()
{
	stringstream s;
	for (int i = 0;i < cant;i++) {
		s << mascotas[i]->getNombre() << endl;
	}
	return s.str();
}