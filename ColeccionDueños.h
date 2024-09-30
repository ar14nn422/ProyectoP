#ifndef COLECCIONDUEÑOS_H
#define COLECCIONDUEÑOS_H
#include "Dueño.h"
#include "coleccionmascotas.h"
class ColeccionDueños {
private:
	int tam;
	int cant;
	Duenno** duenno;
	coleccionmascotas** mascotas;
public:
	
	ColeccionDueños();
	~ColeccionDueños();
	void setTam();
	void setCant();
	int getTam();
	int getCant();
	void ingresarDuennos(string, string);
	int getposIdDuenno(string);
	Duenno* encontrarId(string);
	void ingresarMascotas(string, string);
	string mostrarMascotas(string);
	string mostrarDueños();

};
#endif // !COLECCIONDUEÑOS_H

