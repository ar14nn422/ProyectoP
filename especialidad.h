#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include"doctor.h"
using namespace std;

class especialidad {
private:
	string espe;
	doctor** doc;
	int tam ;
	int cant;
public:
	especialidad(string);
	void agregarDoctor(doctor*);
	void setEspecialidad(string);
	string getEspecialidad();
	~especialidad();
};
#endif // !ESPECIALIDAD_H