#include "Agenda.h"

Agenda::Agenda(int n)
{
	cant = 0;
	tam = n;
	cita = new Cita * [n];
	for (int i = 0; i < tam; i++) {
		cita[i] = new Cita();
	}
}

Agenda::~Agenda()
{
	for (int i = 0; i < tam; i++) {
		delete cita[i];
	}
	delete[] cita;
}


void Agenda::setTam(int tam)
{
	this->tam = tam;
}

void Agenda::setCant(int cant)
{
	this->cant = cant;
}


int Agenda::getTam()
{
	return tam;
}

int Agenda::getCant()
{
	return cant;
}

void Agenda::agregarCita(Cita* nuevaCita)
{
	if (cant < tam) {
		cita[cant] = nuevaCita;
		cant++;
	}
}

bool Agenda::reservarCita(Doctor* doctor, int dia, int hora,Cita* ncita, Duenno* duenno) {
	int totalHoras = doctor->gettotalHoras();
	horas** horario = doctor->getHorario();
	int indiceHora = hora - 8;
	int indiceDia = dia - 1;
	int indice = indiceDia * totalHoras + indiceHora;
	if (!horario[indice]->getEstado()) {
		horario[indice]->setEstado(true);
		ncita->setDoctor(doctor);
		ncita->setDuenno(duenno);
		agregarCita(ncita);  
		return true;
	}
	else {
		return false;
	}
}

string Agenda::asociadosDuenno(Duenno* duenno)
{
	stringstream s;
	bool hayDoctores = false;

	s << "Verificando citas para el dueño ID: " << duenno->getId() << endl;

	for (int i = 0; i < cant; i++) {
		Cita* citaActual = cita[i];

		
		if (citaActual->getDuenno()->getId() == duenno->getId()) {
			Doctor* doctorCita = citaActual->getDoctor();
			s << "- Doctor: " << doctorCita->getNombreDoc() << endl;
			hayDoctores = true; 
			
		}
	}

	return s.str();
}

string Agenda::mostrarCitasDia(int dia)
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		if (cita[i]->getDia() == dia) {
			s << "Todas las citas agendadas para el:" << cita[i]->ImprimirCita();
		}
		else {
			s << "Este dia no hay citas";
		}

	}

	return string();
}
string Agenda::mostrarCitasDuenno(Duenno* duenno)
{
	stringstream s;
	bool citasEncontradas = false;

	for (int i = 0; i < cant; i++) {
		Cita* citaActual = cita[i];
		if (citaActual->getDuenno()->getId() == duenno->getId()) {  
			s << "- Mascota: " << citaActual->getPaciente()->getNombre();
			s << " | Doctor: " << citaActual->getDoctor()->getNombreDoc();
			s << " | Especialidad: " << citaActual->getEspecialidad()->getNombre();
			s << " | Dia: " << citaActual->getDia();
				s<< " | Hora: " << citaActual->getHora() << endl;
			citasEncontradas = true;
		}
	}

	if (!citasEncontradas) {
		s << "No hay citas para el dueño con ID: " << duenno->getId() << endl;
	}

	return s.str();
}


