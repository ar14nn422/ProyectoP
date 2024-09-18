#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include"especialidades.h"
#include"especialidad.h"
#include"Doctor.h"
using namespace std;
class menuprincipal {
private:
	especialidades* esps;
public:
	menuprincipal();
	void menu();
	void opcionUno();
	void opcionDos();
	void opcionTres();
	~menuprincipal();
};
#endif 