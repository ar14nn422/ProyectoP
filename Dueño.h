
#include "coleccionmascotas.h"
#ifndef DUE�O_H
#define DUE�O_H
class Duenno {
private:
	string NombreDuenno;
	string id;
	coleccionmascotas* mascotas;
public:
	Duenno();
	Duenno(string, string);
	~Duenno();
	void setNombreDuenno(string);
	void setId(string);
	void setColeccionmascotas(coleccionmascotas*);
	string getNombreDuenno();
	string getId();
	string getMascotas();
	void asignarMascotas(string);
	mascota* seleccionarMasc(string);
	string mostrarMasc_d();



};
#endif // !DUE�O_H