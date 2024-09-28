#include "Cita.h"
class Agenda
{
private:
	Cita** cita;
	int tam;
	int cant;
public:
	Agenda(int);
	~Agenda();
	void setTam(int);
	void setCant(int);
	int getTam();
	int getCant();
	void agregarCita(Cita*);
	//Doctor* asociadosDuenno(Duenno*);
	//void modificarCita();
	//void cancelarCita();
	string mostrarCitasDia(string);
	string mostrarCitasDuenno(Duenno* duenno);
	/*string mostrarCitas();*/
};
