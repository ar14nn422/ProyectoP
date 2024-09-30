#include "Dueño.h"

Duenno::Duenno() {
	NombreDuenno = " ";
	id = " ";
	mascotas = new coleccionmascotas(5);
}
Duenno::Duenno(string nombred, string id) {
	NombreDuenno = nombred;
	this->id = id;
	mascotas = new coleccionmascotas(5);

}
Duenno::~Duenno()
{
	delete mascotas;
}
void Duenno::setNombreDuenno(string nombred)
{
	NombreDuenno = nombred;
}

void Duenno::setId(string id) {
	this->id = id;
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

string Duenno::getMascotas()
{
	return mascotas->mostrarMascotas();
	
}

void Duenno::asignarMascotas(string nomb)
{
	mascotas->agregarMascota(nomb);
}

mascota* Duenno::seleccionarMasc(string nombrem)
{

	return mascotas->buscarporNombre(nombrem);
}


string Duenno::mostrarMasc_d()
{
	stringstream s;
	s << "Duenno:" << NombreDuenno << endl;
	s << "Numero de identidficacion:" << id << endl;
	s << "Mascotas asociadas:" << mascotas->mostrarMascotas() << endl;
	return s.str();
}