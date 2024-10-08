﻿#include "Cita.h"

Cita::Cita(int hora, int dia, bool estado, especialidad* espe, Doctor* doctor, Duenno* duenno, mascota* paciente)
{
	this->hora = hora;
	this->dia = dia;
	this->estado = estado;
	this->espe = espe;
	this->doctor = doctor;
	this->duenno = duenno;
	this->paciente = paciente;
}

Cita::Cita()
{
	hora =0;
	dia = 0;
	estado = false;
	espe = nullptr;
	doctor = nullptr;
	duenno = nullptr;
	paciente = nullptr;
}

int Cita::getHora()
{
	return hora;
}

int Cita::getDia()
{
	return dia;
}

void Cita::setHora(int hora)
{
	this->hora = hora;
}

void Cita::setDia(int dia)
{
	this->dia = dia;
}

void Cita::setEstado(bool estado)
{
	this->estado = estado;
}

bool Cita::getEstado()
{
	return estado;
}

Doctor* Cita::getDoctor()
{
	return doctor;
}

Duenno* Cita::getDuenno()
{
	return duenno;
}

mascota* Cita::getPaciente()
{
	return paciente;
}

especialidad* Cita::getEspecialidad()
{
	return espe;
}

void Cita::setDoctor(Doctor* doctor)
{
	this->doctor = doctor;
}

void Cita::setDuenno(Duenno* duenno)
{
	this->duenno = duenno;
}

void Cita::setPaciente(mascota* paciente)
{
	this->paciente = paciente;
}

void Cita::setEspecialidad(especialidad* espe)
{
	this->espe = espe;
}

void Cita::reactivarCita()
{
	setEstado(true);
}


string Cita::ImprimirCita()
{
	stringstream s;
	s << "Dia de su cita:" << dia << endl;
	s << "Hora de su cita:" << hora << endl;
	s << "Para el paciente:" << paciente->getNombre() << endl;
	s << "Con el doctor:" << doctor->getNombreDoc() << endl;
	return s.str();
}