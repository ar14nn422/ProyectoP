#include "doctor.h"

Doctor::Doctor(string nomb)
{
	nombre = nomb;
	totalHoras = 11;
	totalDias = 7;
	cant = 0;
	tam = 1;
	dia[0] = "No existe";
	dia[1] = "Lunes";
	dia[2] = "Martes";
	dia[3] = "Mierc";
	dia[4] = "Jueves";
	dia[5] = "Viernes";
	dia[6] = "Sabado";	
	masc = new mascota * [tam];
	horario = new horas * [totalDias * totalHoras]; 
	for (int i = 0; i < totalDias; i++) {
		for (int j = 0; j < totalHoras; j++) {
			horario[i * totalHoras + j] = new horas(dia[i], 8 + j); 
		}
	}
}

Doctor::Doctor()
{
	nombre = " ";
	totalHoras = 11;
	totalDias = 7;
	cant = 0;
	tam=1;
	dia[0] = " ";
	dia[1] = " ";
	dia[2] = " ";
	dia[3] = " ";
	dia[4] = " ";
	dia[5] = " ";
	dia[6] = " ";

}


string Doctor::mostrarHorario()
{
	stringstream s;
	s << "Horario de " << nombre << ":"<< endl;
	s << "----------------------------------------------------------------------------------------------------------------------"<<endl;
	s << "Dia      |  08:00  |  09:00  |  10:00  |  11:00  |  12:00  |  13:00  |  14:00  |  15:00  |  16:00  |  17:00  |  18:00"<<endl;
	s << "----------------------------------------------------------------------------------------------------------------------"<<endl;

	for (int i = 1; i < totalDias; i++) {
		s << dia[i] << " |";
		for (int j = 0; j < totalHoras; j++) {
			s << "  " << (horario[(i-1) * totalHoras + j]->getEstado() ? "Ocupado" : "Libre") << "  |";
		}
		s << "\n";
	}
	return s.str();

}

void Doctor::agregarPaciente(mascota* paciente) {
	if (cant < tam) {
		masc[cant] = paciente;
	}
}
void Doctor::borrarPaciente(string nombre) {
	
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
	for (int i = 0; i < cant; i++) { 
		s << masc[i]->getNombre()<< endl; 
	}
	return s.str();
}

void Doctor::settotalHoras(int horas)
{
	totalHoras = horas;
}

void Doctor::settotalDias(int dias)
{
	totalDias = dias;
}

int Doctor::gettotalHoras()
{
	return totalHoras;
}

int Doctor::gettotalDias()
{
	return totalDias;
}

void Doctor::setHorario(horas** hor)
{
	horario = hor;
}

horas** Doctor::getHorario()
{
	return horario;
}

void Doctor::setDias(string dias)
{
	for (int i = 0; i < 7; i++) {
		dia[i] = dias[i];
	}
}

string* Doctor::getDias()
{
	return dia;
}

void Doctor::setNombre(string nom)
{
	nombre = nom;
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