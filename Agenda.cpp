#include "Agenda.h"

Agenda::Agenda(int n)
{
	cant = 0;
	tam = n;
	cita = new Cita * [n];
	for (int i = 0; i < tam; i++) {
		cita[i] = new Cita();
	}
}

Agenda::~Agenda()
{
	for (int i = 0; i < tam; i++) {
		delete cita[i];
	}
	delete[] cita;
}


void Agenda::setTam(int tam)
{
	this->tam = tam;
}

void Agenda::setCant(int cant)
{
	this->cant = cant;
}


int Agenda::getTam()
{
	return tam;
}

int Agenda::getCant()
{
	return cant;
}

void Agenda::agregarCita(Cita* nuevaCita)
{
	if (cant < tam) {
		cita[cant] = nuevaCita;
		cant++;
	}
}

/*string Agenda::mostrarCitasDia(string dia)
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		if (cita[i]->getDia() == dia) {
			s << "Todas las citas agendadas para el:" << cita[i]->ImprimirCita();
		}
		else {
			s << "Este dia no hay citas";
		}

	}
	
	return string();
}

string Agenda::mostrarCitas()
{
	return string();
}
*/