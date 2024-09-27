#ifndef DOCTOR_H
#define DOCTOR_H
#include "mascota.h"
#include "horas.h"
using namespace std;
class Doctor {
private:
	int totalDias;
	int totalHoras;
	int tam;
	int cant;
	string nombre;
	mascota** masc;
	horas** horario;

public:
	Doctor(string);
	bool reservar(string, int);
	string mostrarHorario();
	void agregarPaciente(mascota*);
	void borrarPaciente();
	string getPacientes();
	string getNombreDoc();
	~Doctor();
};
#endif //