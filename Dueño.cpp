#include "Dueño.h"
Duenno::Duenno() {
	NombreDuenno = " ";
	id = " ";
	mascotas = new coleccionmascotas(0);
}
Duenno::Duenno(string nombred, string id) {
	NombreDuenno = nombred;
	id = id;
	this->mascotas = mascotas;
}
void Duenno::setNombreDuenno(string nombred)
{
	NombreDuenno = nombred;
}

void Duenno::setId(string id) {
	id = id;
}

void Duenno::setColeccionmascotas(coleccionmascotas* mascotas)
{
	this->mascotas = mascotas;
}

string Duenno::getNombreDuenno()
{
	return NombreDuenno;
}

string Duenno::getId()
{
	return id;
}

coleccionmascotas* Duenno::getMascotas()
{
	return mascotas;
}

void Duenno::asignarMascotas(mascota* nuevaMascota)
{
	mascotas->agregarMascota(nuevaMascota);
}


string Duenno::mostrarMasc_d()
{
	stringstream s;
	s << "Dueño:" << NombreDuenno << endl;
	s << "Número de identidficación:" << id << endl;
	s << "Mascotas asociadas:" << mascotas->mostrarMascotas() << endl;
	return s.str();
}