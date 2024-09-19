#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include "Doctor.h"

class especialidad {
private:
	string nombreEspecialidad;
	doctor** doc;
	int cantDoc;
public:
	especialidad(string);
	~especialidad();
	void agregarDoctor(string);
	void setNombre(string);
	string getNombre();
};
#endif
