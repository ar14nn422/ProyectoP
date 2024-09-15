#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>
#include <sstream>
using namespace std;
class mascota {
private:
	string nombre;
	string tipo;
public:
	mascota();
	mascota(string, string);
	void setNombre(string);
	string getNombre();
	void setTipo(string);
	string getTipo();
	string mostrarMascota();
};
#endif // !MASCOTA_H

