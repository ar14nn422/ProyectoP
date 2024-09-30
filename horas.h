#ifndef HORAS_H
#define HORAS_H
#include <iostream>
#include <sstream>
using namespace std;

class horas {
private:
	bool ocupado;
	int hora;
	string dia;
public:
	horas(string, int);
	horas();
	void setEstado(bool);
	bool getEstado();
	void setHora(int);
	int getHora();
	void setDia(string);
	string getDia();
	string mostrarHora();
};
#endif // !HORAS_H