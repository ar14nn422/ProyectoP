#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>
#include <sstream>
using namespace std;
class mascota {
private:
	string nombre;
public:
	mascota();
	mascota(string);
	void setNombre(string);
	string getNombre();
	string mostrarMascota();
};
#endif // !MASCOTA_H

