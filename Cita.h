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
	Dueño* duenno;
	mascota* paciente;
public:
	Cita(int, string, bool, especialidad*,Doctor*, Dueño*, mascota*);
	Cita();
	int getHora();
	string getDia();
	void setHora(int);
	void setDia(string);
	void setEstado(bool);
	bool getEstado();
	Doctor* getDoctor();
	Dueño* getDuenno();
	mascota* getPaciente();
	especialidad* getEspecialidad();
	void setDoctor(Doctor*);
	void setDuenno(Dueño*);
	void setPaciente(mascota*);
	void setEspecialidad(especialidad*);
	void reactivarCita();
	string ImprimirCita();




};