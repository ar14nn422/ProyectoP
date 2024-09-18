#ifndef ESPECIALIDADES_H
#define ESPECIALIDADES_H
#include"especialidad.h"
using namespace std;
class especialidades {
private:
	int tam;
	int cant ;
	especialidad** esp;
public:
	especialidades();
	void agregarEspecialidad(string);
	~especialidades();
};

#endif // !ESPECIALIDADES_H