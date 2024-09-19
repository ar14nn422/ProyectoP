#ifndef ESPECIALIDADES_H
#define ESPECIALIDADES_H
#include "especialidad.h"

class especialidades {
private:
	int tamanoEspecialidades;
	int cantidadEspecialidades;
	especialidad** nombreEspecialidad;
public:
	especialidades();
	bool agregarEspecialidad(especialidad*);
	string mostrarEspecialidades();
	~especialidades();
};

#endif // !ESPECIALIDADES_H
