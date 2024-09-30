#include "horas.h"

horas::horas(string dia, int hora)
{	
	ocupado = false;
	this->dia = dia;
	this->hora = hora;
}

horas::horas() {
	ocupado = false;
	dia = " ";
	hora = 0;
}
void horas::setEstado(bool est) {
	ocupado = est;
}
bool horas::getEstado() {
	return ocupado;
}

void horas::setHora(int hora)
{
	this->hora = hora;
}

int horas::getHora()
{
	return hora;
}

void horas::setDia(string dia)
{
	this->dia = dia;
}

string horas::getDia()
{
	return dia;
}
string horas::mostrarHora() {
	stringstream s;
	s << "Hora: " << (hora < 11 ? "0" : "") << hora << ":00 - " << (ocupado ? "Ocupado" : "Libre");
	return s.str();
}