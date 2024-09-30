#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include"Doctor.h"
using namespace std;

class especialidad {
private:
	string nombre;
	int cantDoc;
	Doctor** doc;
	Doctor* doct;
public:
	especialidad(string);
	bool agregarDoc(string);
	Doctor* encontrarDoc(int);
	Doctor* encontrarDocN(string);
	string getNombre();
	string mostrarDoctor();
	string getDoctor(string);
	~especialidad();
};
#endif // !ESPECIALIDAD_H