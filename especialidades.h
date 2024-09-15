#ifndef ESPECIALIDADES_H
#define ESPECIALIDADES_H
#include<especialidad.h>
using namespace std;
class especialidades {
private:
	int tam = 7;
	int cant = 0;
	especialidades** esp;
public:
	especialidades(int);
	void agregarEspecialidad(especialidad*);
	~especialidades();
};

#endif // !ESPECIALIDADES_H