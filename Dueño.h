
#include "coleccionmascotas.h"
#ifndef DUEÑO_H
#define DUEÑO_H
class Duenno {
private:
	string NombreDuenno;
	string id;
	coleccionmascotas* mascotas;
public:
	Duenno();
	Duenno(string, string);
	void setNombreDuenno(string);
	void setId(string);
	void setColeccionmascotas(coleccionmascotas*);
	string getNombreDuenno();
	string getId();
	coleccionmascotas* getMascotas();
	void asignarMascotas(string, string);
	string mostrarMasc_d();



};
#endif // !DUEÑO_H