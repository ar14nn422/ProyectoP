#ifndef DOCTOR_H
#define DOCTOR_H
#include "mascota.h"
#include "horas.h"
using namespace std;
class doctor {
private:
	string nombre;
	doctor** masc;
	int tam;
	int cant;
	int semana;
	int diaAc;
	doctor** dias;
public:
	doctor(string);
	void generarHorario();
	void agregarPaciente(mascota*);
	string getPacientes();
	~doctor();
};
#endif // 