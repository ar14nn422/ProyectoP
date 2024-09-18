#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include"especialidades.h"
#include"especialidad.h"
#include"Doctor.h"
using namespace std;
class menuprincipal {
private:
	especialidad** espci;
public:
	menuprincipal();
	void menu();
	void opcionUno();
	void opcionDos();
	void opcionTres();
};
#endif 