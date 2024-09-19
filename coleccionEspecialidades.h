#ifndef COLECCIONESPECIALIDADES_H
#define COLECCIONESPECIALIDADES_H
#include "especialidad.h"
class coleccionespecialidades {
private:
	especialidad** especial;
	int cantEsp;
public:
	coleccionespecialidades();
	void adminOpUno();
	void adminOpDos();
	void adminOpTres();
	void adminOpCuat();
	string toStringEspc();
};
#endif // !COLECCIONESPECIALIDADES_H

