
#include "coleccionmascotas.h"
#ifndef DUEÑO_H
#define DUEÑO_H
class Dueño {
private:
	string NombreDuenno;
	string id;
	coleccionmascotas* mascotas;
public:
	Dueño();
	Dueño(string, string, coleccionmascotas*);
	void setNombreDuenno(string);
	void setId(string);
	void setColeccionmascotas(coleccionmascotas*);
	string getNombreDuenno();
	string getId();
	coleccionmascotas* getMascotas();
	void asignarMascotas(mascota*);
	string mostrarMasc_d();



};
#endif // !DUEÑO_H