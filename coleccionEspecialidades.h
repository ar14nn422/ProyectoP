#ifndef COLECCIONESPECIALIDADES_H
#define COLECCIONESPECIALIDADES_H
#include "especialidad.h"
#include"Doctor.h"
class coleccionespecialidades {
private:
	especialidad** especial;
	int cantEsp;
public:
	coleccionespecialidades();
	bool adminOpUno(string);
	bool adminOpDos(int, string);
	void adminOpTres();
	void adminOpCuat();
	string toStringEspc();
	string toStringDocs(int);
	~coleccionespecialidades();
};
#endif // !COLECCIONESPECIALIDADES_H

