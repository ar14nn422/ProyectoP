#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include"Doctor.h"
using namespace std;

class especialidad {
private:
	string nombre;
	int cantDoc;
	Doctor** doc;
public:
	especialidad(string);
	bool agregarDoc(string);
	Doctor* encontrarNombre(string);
	string getNombre();
	string getDoctor();
	~especialidad();
};
#endif // !ESPECIALIDAD_H