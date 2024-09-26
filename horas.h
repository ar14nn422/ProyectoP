#ifndef HORAS_H
#define HORAS_H
#include <iostream>
#include <sstream>
using namespace std;

class horas {
private:
	bool ocupado;
	string hora;
	string dia;
public:
	horas(string, string);
	horas();
	void setEstado(bool);
	bool getEstado();
	void setHora(string);
	string getHora();
	void setDia(string);
	string getDia();
	//string horario();
};
#endif // !HORAS_H