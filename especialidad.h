#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include"doctor.h"
using namespace std;

class especialidad {
private:
	string nombre;
	int cantDoc;
	doctor** doc;
public:
	especialidad(string);
	void agregarDoc(string);
	string getNombre();
	~especialidad();
};
#endif // !ESPECIALIDAD_H