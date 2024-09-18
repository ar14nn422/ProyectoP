#include "especialidades.h"

especialidades::especialidades() {
	tamanoEspecialidades = 7;
	cantidadEspecialidades = 0;
	nombreEspecialidad = new especialidad * [tamanoEspecialidades];
	for (int i = 0;i < tamanoEspecialidades;i++) {
		nombreEspecialidad[i] = NULL;
	}
}
bool especialidades::agregarEspecialidad(especialidad* especialidad) {
	if (cantidadEspecialidades < tamanoEspecialidades - 1) {
		for (int i = 0;i < cantidadEspecialidades;i++) {
			if (especialidad->getNombreEsp() == nombreEspecialidad[i]->getNombreEsp()) {
				return false;
			}
		}
	}
	nombreEspecialidad[cantidadEspecialidades] = especialidad;
	cantidadEspecialidades++;
	return true;
}
string especialidades::mostrarEspecialidades() {
	for (int i = 0;i < cantidadEspecialidades;i++) {
		return nombreEspecialidad[i]->getNombreEsp();
	}
}
especialidades::~especialidades() {
	for (int i = 0;i < tamanoEspecialidades;i++) {
		delete nombreEspecialidad[i];
	}
	delete[] nombreEspecialidad;
}