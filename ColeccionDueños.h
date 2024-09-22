#ifndef COLECCIONDUEÑOS_H
#define COLECCIONDUEÑOS_H
#include "Dueño.h"
class ColeccionDueños {
private:
	int tam;
	int cant;
	Duenno** duenno;
public:
	ColeccionDueños(int);
	~ColeccionDueños();
	void setTam();
	void setCant();
	int getTam();
	int getCant();
	void ingresarDuennos(string, string);
	string mostrarDueños();

};
#endif // !COLECCIONDUEÑOS_H

