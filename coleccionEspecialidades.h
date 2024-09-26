#ifndef COLECCIONESPECIALIDADES_H
#define COLECCIONESPECIALIDADES_H
#include "especialidad.h"
#include"Doctor.h"
class coleccionespecialidades {
private:
	especialidad** especial;
	Doctor** doct;
	int cantEsp;
public:
	coleccionespecialidades();
	bool adminOpUno(string);
	bool adminOpDos(int, string);
	especialidad* encontrarEspecialidad(string);
	string getEspecialidad(int);
	string toStringEspc();
	string toStringDocs(int);
	string getPacientes(string);
	~coleccionespecialidades();
};
#endif // !COLECCIONESPECIALIDADES_H

