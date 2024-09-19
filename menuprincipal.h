#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include"coleccionespecialidades.h"
#include"Doctor.h"
using namespace std;
class menuprincipal {
private:
	coleccionespecialidades* e;
public:
	menuprincipal();
	void menu();
	void opcionUno();
	void opcionDos();
	void opcionTres();
	~menuprincipal();
};
#endif 