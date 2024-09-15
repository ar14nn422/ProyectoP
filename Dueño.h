
#include "coleccionmascotas.h"
#ifndef DUEÑO_H
#define DUEÑO_H
class Dueño {
public:
	string NombreDuenno;
	string id;
	coleccionmascotas* mascotas;
private:
	Dueño();
	Dueño(string, string, coleccionmascotas*);
	void setNombreDuenno(string);
	void setId(string);
	void setColeccionmascotas(coleccionmascotas*);
	string getNombreDuenno();
	string getId();
	coleccionmascotas* getMascotas();
	void asignarMascotas();
	string mostrarMasc_d();



};
#endif // !DUEÑO_H