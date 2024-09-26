#include "doctor.h"

Doctor::Doctor(string nomb)
{
	nombre = nomb;
	cant = 0;
	tam = 0;
	totalHoras = 8;
	dias = 6;
	masc = new mascota * [tam];
	horario = new horas*[dias*totalHoras];
}
bool Doctor::reservar(int dias, int hora)
{
	if (horario[cant]->getEstado()==false) {
		horario[cant]->setEstado(true);
		cant++;
		return true;
	}
	else {
		return false;
	}
}
string Doctor::mostrarHorario()
{
	string diasSemana[] = { "Lunes", "Martes","Miércoles","Jueves","Viernes","Sábado" };
	string horas[] = { "9:00", "10:00", "11:00", "13:00", "14:00", "15:00", "16:00" };
	stringstream s;
	s << "Horario del doctor:" << nombre << endl;
	for (int dia = 0; dia < dias; dia++) {
		s << diasSemana[dia] << ":" << endl;
		for (int hora = 0; hora < totalHoras; hora++) {
			int aux = dia * hora;
			bool estado = horario[aux]->getEstado();
		}
	}
	return s.str();
}

void Doctor::agregarPaciente(mascota* paciente) {
	if (cant < tam) {
		masc[cant] = paciente;
	}
}
void Doctor::borrarPaciente() {
	string nombre;
	cout << "Que mascota desea eliminar" << endl;
	cin >> nombre;
	for (int i = 0;i < tam;i++) {
		if (masc[i]->getNombre() == nombre) {
			masc[i] = NULL;
			masc[i] = masc[i + 1];
			cant--;
		}
	}
}
string Doctor::getPacientes() {
	stringstream s;
	for (int i = 0;i < tam;i++)
		s << masc[i]->mostrarMascota();
	return s.str();
}
string Doctor::getNombreDoc() {
	return nombre;
}
Doctor::~Doctor() {
	for (int i = 0;i < cant;i++) {
		delete horario[i];
		delete masc[i];
	}
	delete[] horario;
	delete[] masc;
}