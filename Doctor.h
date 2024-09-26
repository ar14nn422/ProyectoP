#ifndef DOCTOR_H
#define DOCTOR_H
#include "mascota.h"
#include "horas.h"
using namespace std;
class Doctor {
private:
	int tam;
	int cant;
	int dias;
	int totalHoras;
	string nombre;
	mascota** masc;
	horas** horario;

public:
	Doctor(string);
	bool reservar(int, int);
	string mostrarHorario();
	void agregarPaciente(mascota*);
	void borrarPaciente();
	string getPacientes();
	string getNombreDoc();
	~Doctor();
};
#endif //