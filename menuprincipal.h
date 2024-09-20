#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include"coleccionespecialidades.h"
#include "ColeccionDueños.h"
#include "Agenda.h"
using namespace std;
class menuprincipal {
private:
	coleccionespecialidades* esp;
	ColeccionDueños* duennos;
	Agenda* citas;

public:
	menuprincipal();
	void menu();
	void opcionUno();
	void opcionDos();
	void opcionTres();
	~menuprincipal();
};
#endif 