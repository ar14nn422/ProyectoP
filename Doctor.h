#ifndef DOCTOR_H
#define DOCTOR_H
#include "mascota.h"
#include "horas.h"
using namespace std;
class doctor {
private:
	string nombre;
	mascota** masc;
	horas** lunes;
	horas** martes;
	horas** miercoles;
	horas** jueves;
	horas** viernes;
	horas** sabado;
	int tam;
	int cant;
	int hora;
public:
	doctor(string);
	void generarHorario();
	void llamarLunes();
	void llamarMartes();
	void llamarMiercoles();
	void llamarJueves();
	void llamarViernes();
	void llamarSabado();
	void agregarPaciente(mascota*);
	void borrarPaciente();
	string getPacientes();
	string getNombreDoc();
	~doctor();
};
#endif // 