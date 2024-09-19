#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include"Doctor.h"
#include "especialidad.h"
using namespace std;
class menuprincipal {
private:
	especialidad** especial;
	int cantEspe;
public:
	menuprincipal();
	void menu();
	void opcionUno();
	void submAdmin1();
	void submAdmin2();
	void submAdmin3();
	void submAdmin4();
	void opcionDos();
	void opcionTres();
	~menuprincipal();
};
#endif 