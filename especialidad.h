#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include"doctor.h"
using namespace std;

class especialidad {
private:
	string nombreEspecialidad;
	doctor** doc;
public:
	especialidad();
	especialidad(string);
	void setNombreEsp(string);
	string getNombreEsp();
	~especialidad();
};
#endif // !ESPECIALIDAD_H