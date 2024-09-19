#include "Cita.h"

Cita::Cita(int hora, string dia, bool estado, especialidad* doctor, ColeccionDueños* duenno, coleccionmascotas* paciente)
{
	this->hora = hora;
	this->dia = dia;
	this->estado = estado;
	this->doctor = doctor;
	this->duenno = duenno;
	this->paciente = paciente;
}

Cita::Cita()
{
	hora = 0;
	dia = " ";
	estado = false;
	doctor = nullptr;
	duenno = nullptr;
	paciente = nullptr;
}

int Cita::getHora()
{
	return hora;
}

string Cita::getDia()
{
	return dia;
}

void Cita::setHora(int hora)
{
	hora = hora;
}

void Cita::setDia(string dia)
{
	dia = dia;
}

void Cita::setEstado(bool estado)
{
	estado = estado;
}

bool Cita::getEstado()
{
	return false;
}

especialidad* Cita::getDoctor()
{
	return doctor;
}

ColeccionDueños* Cita::getDuenno()
{
	return duenno;
}

coleccionmascotas* Cita::getPaciente()
{
	return paciente;
}

void Cita::setDoctor(especialidad* doctor)
{
	this->doctor = doctor;
}

void Cita::setDuenno(ColeccionDueños* duenno)
{
	this->duenno = duenno;
}

void Cita::setPaciente(coleccionmascotas* paciente)
{
	this->paciente = paciente;
}

void Cita::reactivarCita()
{
	setEstado(true);
}

/*void Cita::cancelarCita()
{
	setEstado(false);
}

void Cita::modificarCita(int hora, string dia)//
{
	if (getEstado() == true) {
		setHora(hora);
		setDia(dia);
	}
}*/

string Cita::ImprimirCita()
{
	stringstream s;
	s << "Dia de su cita:" << dia << endl;
	s << "Hora de su cita:" << hora << endl;
	s << "Para el paciente:" << paciente << endl;
	return s.str();
}