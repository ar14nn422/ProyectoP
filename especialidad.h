#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include"doctor.h"
using namespace std;

class especialidad {
private:
	int tamDoctores;
	int cantidadDoctores;
	string nombreEspecialidad;
	doctor** doc;
public:
	especialidad(string);
	void setNombreEsp(string);
	string getNombreEsp();
	string toStringEspecialidad();
	~especialidad();
};
#endif // !ESPECIALIDAD_H