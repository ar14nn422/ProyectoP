#include "ColeccionDueños.h"
#include "coleccionmascotas.h"
#include "especialidad.h"
#include "Doctor.h"
class Cita {
private:
	int hora;
	string dia;
	bool estado;
	especialidad* espe;
	Doctor* doctor;
	Duenno* duenno;
	mascota* paciente;
public:
	Cita(int, string, bool, especialidad*,Doctor*, Duenno*, mascota*);
	Cita();
	int getHora();
	string getDia();
	void setHora(int);
	void setDia(string);
	void setEstado(bool);
	bool getEstado();
	Doctor* getDoctor();
	Duenno* getDuenno();
	mascota* getPaciente();
	especialidad* getEspecialidad();
	void setDoctor(Doctor*);
	void setDuenno(Duenno*);
	void setPaciente(mascota*);
	void setEspecialidad(especialidad*);
	void reactivarCita();
	string ImprimirCita();




};