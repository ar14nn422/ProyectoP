#include "Dueño.h"
Dueño::Dueño() {
	NombreDuenno = " ";
	id = " ";
	mascotas = new coleccionmascotas(0);
}
Dueño::Dueño(string nombred, string id ,coleccionmascotas* mascotas) {
	NombreDuenno = nombred;
	id = id;
	this->mascotas = mascotas;
}
void Dueño::setNombreDuenno(string nombred)
{
	NombreDuenno = nombred;
}

void Dueño::setId(string id) {
	id = id;
}

void Dueño::setColeccionmascotas(coleccionmascotas* mascotas)
{
	this->mascotas = mascotas;
}

string Dueño::getNombreDuenno()
{
	return NombreDuenno;
}

string Dueño::getId()
{
	return id;
}

coleccionmascotas* Dueño::getMascotas()
{
	return mascotas;
}

void Dueño::asignarMascotas(mascota* nuevaMascota)
{
	mascotas->agregarMascota(nuevaMascota);
}


string Dueño::mostrarMasc_d()
{
	stringstream s;
	s << "Dueño:" << NombreDuenno << endl;
	s << "Número de identidficación:" << id << endl;
	s << "Mascotas asociadas:" << mascotas->mostrarMascotas() << endl;
	return s.str();
}