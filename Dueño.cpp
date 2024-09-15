#include "Dueño.h"
Dueño::Dueño() {
	NombreDuenno = " ";
	id = " ";
	mascotas = nullptr;
}
Dueño::Dueño(string nombred, string id coleccionmascotas* mascotas) {
	NombreDuenno = nombred;
	id = id;
	mascotas = mascotas;
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
	mascotas = mascotas;
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

void Dueño::asignarMascotas()
{
	mascota* nuevaMascota = new coleccionmascotas();
	mascota->agregarMascota(nuevaMascota);

}

string Dueño::mostrarMasc_d()
{
	stringstream s;
	s << "Dueño:" << NombreDuenno << endl;
	s << "Número de identidficación:" << id << endl;
	s << "Mascotas asociadas:" << mostrarMascotas() << endl;
	return s.str();
}