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
	bool reservarCita(Doctor*, int, int, Cita*,Duenno*);
	string asociadosDuenno(Duenno*);
	string mostrarCitasDia(int);
	string mostrarCitasDuenno(Duenno* duenno);
	
};
