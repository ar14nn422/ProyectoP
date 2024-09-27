#include "mascota.h"

mascota::mascota()
{
	nombre = " ";

}

mascota::mascota(string nom)
{
	this->nombre = nom;
}

mascota::~mascota()
{

}

void mascota::setNombre(string nom)
{
	this->nombre = nom;
}

string mascota::getNombre()
{
	return nombre;
}

string mascota::mostrarMascota()
{
	stringstream s;
	s << "Nombre de la mascota:" << nombre << endl;
	return s.str();
}