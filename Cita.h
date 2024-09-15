#include "ColeccionDueños.h"
#include "coleccionmascotas.h"
#include "ColeccionDoctores.h"
class Cita {
private:
	int hora;
	string dia;
	bool estado;
	ColeccionDoctores* doctor;//cambiar por el nombre de la coleccion
	ColeccionDueños* duenno;
	coleccionmascotas* paciente;
public:
	Cita(int, string, bool, ColeccionDoctores*, ColeccionDueños*, coleccionmascotas*);
	Cita();
	int getHora();
	string getDia();
	void setHora(int);
	void setDia(string);
	void setEstado(bool);
	bool getEstado();
	ColeccionDoctores* getDoctor();
	ColeccionDueños* getDuenno();
	coleccionmascotas* getPaciente();
	void setDoctor(ColeccionDoctores*);
	void setDuenno(ColeccionDueños*);
	void setPaciente(coleccionmascotas*);
	void reactivarCita();
	void cancelarCita();
	void modificarCita(int, string);
	string ImprimirCita();




};