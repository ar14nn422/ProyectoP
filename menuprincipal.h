#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include"coleccionespecialidades.h"
#include "ColeccionDue�os.h"
#include "Agenda.h"
using namespace std;
class menuprincipal {
private:
	coleccionespecialidades* esp;
	ColeccionDue�os* duennos;
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