#include "mascota.h"

mascota::mascota()
{
	nombre = " ";
	tipo = "";

}

mascota::mascota(string nom, string tp)
{
	this->nombre = nom;
	this->tipo = tp;
}

void mascota::setNombre(string nom)
{
	this->nombre = nom;
}

string mascota::getNombre()
{
	return nombre;
}

void mascota::setTipo(string tp)
{
	this->tipo = tp;
}

string mascota::getTipo()
{
	return tipo;
}

string mascota::mostrarMascota()
{
	stringstream s;
	s << "Nombre de la mascota:" << nombre << endl;
	s << "Tipo:" << tipo << endl;
	return s.str();
}