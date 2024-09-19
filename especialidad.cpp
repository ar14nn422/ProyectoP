#include "especialidad.h"

especialidad::especialidad(string nombre) {
	tamDoctores = 10;
	cantidadDoctores = 0;
	nombreEspecialidad = nombre;
	doc = new doctor * [tamDoctores];
	for (int i = 0;i < tamDoctores;i++) {
		doc[i] = NULL;
	}
}
void especialidad::setNombreEsp(string nombre) {
	nombreEspecialidad = nombre;

}
string especialidad::getNombreEsp() {
	return nombreEspecialidad;
}

