#ifndef COLECCIONMASCOTAS_H
#define COLECCIONMASCOTAS_H
#include "mascota.h"

class coleccionmascotas {
private:
	int cant;
	int tam;
	mascota** mascotas;

public:
	coleccionmascotas(int);
	~coleccionmascotas();
	int getCant();
	int getTam();
	void setCant(int);
	void setTam(int);
	void agregarMascota(string, string);
	string mostrarMascotas();
};
#endif