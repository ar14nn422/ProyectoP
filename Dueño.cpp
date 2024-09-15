#include "Due�o.h"
Due�o::Due�o() {
	NombreDuenno = " ";
	id = " ";
	mascotas = nullptr;
}
Due�o::Due�o(string nombred, string id coleccionmascotas* mascotas) {
	NombreDuenno = nombred;
	id = id;
	mascotas = mascotas;
}
void Due�o::setNombreDuenno(string nombred)
{
	NombreDuenno = nombred;
}

void Due�o::setId(string id) {
	id = id;
}

void Due�o::setColeccionmascotas(coleccionmascotas* mascotas)
{
	mascotas = mascotas;
}

string Due�o::getNombreDuenno()
{
	return NombreDuenno;
}

string Due�o::getId()
{
	return id;
}

coleccionmascotas* Due�o::getMascotas()
{
	return mascotas;
}

void Due�o::asignarMascotas()
{
	mascota* nuevaMascota = new coleccionmascotas();
	mascota->agregarMascota(nuevaMascota);

}

string Due�o::mostrarMasc_d()
{
	stringstream s;
	s << "Due�o:" << NombreDuenno << endl;
	s << "N�mero de identidficaci�n:" << id << endl;
	s << "Mascotas asociadas:" << mostrarMascotas() << endl;
	return s.str();
}