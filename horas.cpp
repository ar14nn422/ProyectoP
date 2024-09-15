#include "horas.h"

horas::horas() {
	ocupado = false;
}
void horas::setEstado(bool est) {
	ocupado = est;
}
bool horas::getEstado() {
	return ocupado;
}