
#include "coleccionmascotas.h"
#ifndef DUE�O_H
#define DUE�O_H
class Due�o {
public:
	string NombreDuenno;
	string id;
	coleccionmascotas* mascotas;
private:
	Due�o();
	Due�o(string, string, coleccionmascotas*);
	void setNombreDuenno(string);
	void setId(string);
	void setColeccionmascotas(coleccionmascotas*);
	string getNombreDuenno();
	string getId();
	coleccionmascotas* getMascotas();
	void asignarMascotas();
	string mostrarMasc_d();



};
#endif // !DUE�O_H