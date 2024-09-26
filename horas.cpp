#include "horas.h"

horas::horas(string dia, string hora)
{	
	ocupado = false;
	this->dia = dia;
	this->hora = hora;
}

horas::horas() {
	ocupado = false;
	dia = " ";
	hora = " ";
}
void horas::setEstado(bool est) {
	ocupado = est;
}
bool horas::getEstado() {
	return ocupado;
}

void horas::setHora(string hora)
{
	this->hora = hora;
}

string horas::getHora()
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