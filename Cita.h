﻿#include "ColeccionDueños.h"
#include "coleccionmascotas.h"
#include "especialidad.h"
class Cita {
private:
	int hora;
	string dia;
	bool estado;
	especialidad* doctor;//cambiar por el nombre de la coleccion
	ColeccionDueños* duenno;
	coleccionmascotas* paciente;
public:
	Cita(int, string, bool, especialidad*, ColeccionDueños*, coleccionmascotas*);
	Cita();
	int getHora();
	string getDia();
	void setHora(int);
	void setDia(string);
	void setEstado(bool);
	bool getEstado();
	especialidad* getDoctor();
	ColeccionDueños* getDuenno();
	coleccionmascotas* getPaciente();
	void setDoctor(especialidad*);
	void setDuenno(ColeccionDueños*);
	void setPaciente(coleccionmascotas*);
	void reactivarCita();
	void cancelarCita();
	void modificarCita(int, string);
	string ImprimirCita();




};