#ifndef HORAS_H
#define HORAS_H
#include <iostream>
#include <sstream>
using namespace std;

class horas {
private:
	bool ocupado;
public:
	horas();
	void setEstado(bool);
	bool getEstado();
};
#endif // !HORA_H