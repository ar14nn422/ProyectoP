#ifndef DOCTOR_H
#define DOCTOR_H
#include "mascota.h"
#include "horas.h"
using namespace std;
class Doctor {
private:
	int totalDias;
	int totalHoras;
	string nombre;
	string dia[7] ; 
	int cant;
	int tam;
	mascota** masc;
	horas** horario;

public:
	Doctor(string);
	string mostrarHorario();
	void agregarPaciente(mascota*);
	void borrarPaciente();
	string getPacientes();
	void settotalHoras(int);
	void settotalDias(int);
	int gettotalHoras();
	int gettotalDias();
	void setHorario(horas**);
	horas** getHorario();
	void setDias(string);
	string* getDias();
	string getNombreDoc();
	~Doctor();
};
#endif //