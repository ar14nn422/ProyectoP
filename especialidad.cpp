#include"especialidad.h"

especialidad::especialidad(string nombre) {
	nombreEspecialidad = nombre;
	cantDoc = 0;
	doc = new doctor * [10];
}
void especialidad::setNombre(string nombre) {
	nombreEspecialidad = nombre;
}
string especialidad::getNombre() {
	return nombreEspecialidad;
}
void especialidad::agregarDoctor(string nombDoc) {
	doc[cantDoc] = new doctor(nombDoc);
	cantDoc++;
}
especialidad::~especialidad() {
	
}