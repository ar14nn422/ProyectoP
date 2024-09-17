#include "doctor.h"

doctor::doctor(string nomb) {
	nombre = nomb;
	tam = 60;
	cant = 0;
	hora = 10;
	masc = new mascota*[tam];
	lunes = new horas * [hora];
	martes = new horas * [hora];
	miercoles = new horas * [hora];
	jueves = new horas * [hora];
	viernes = new horas * [hora];
	sabado = new horas * [hora];
}
void doctor::generarHorario() {
	int respuesta;
	cout << "Favor ingrese el numero correspondiente al dia que desea hacer el registro" << endl;
	cout << "1-Lunes" << endl;
	cout << "2-Martes" << endl;
	cout << "3-Miercoles" << endl;
	cout << "4-Jueves" << endl;
	cout << "5-Viernes" << endl;
	cout << "6-Sabado" << endl;
	cin >> respuesta;
	system("CLS");
	switch (respuesta)
	{
	case 1:
		llamarLunes();
		break;
	case 2:
		llamarMartes();
		break;
	case 3:
		llamarMiercoles();
		break;
	case 4:
		llamarJueves();
		break;
	case 5:
		llamarViernes();
		break;
	case 6:
		llamarSabado();
		break;
	default:
		break;
	}
}
void doctor::llamarLunes() {
	int lunr;
	char usurl;
	lunes = new horas * [hora];
	for (int i = 0; i < hora; i++) {
		lunes[i] = NULL;
	}
	do {
		cout << "Favor ingrese el numero asociado a la hora en la que desea registrarse" << endl;
		cout << "1-(8:00am-9:00am)" << endl;
		cout << "2-(9:00am-10:00am)" << endl;
		cout << "3-(10:00am-11:00am)" << endl;
		cout << "4-(11:00am-12:00pm)" << endl;
		cout << "5-(1:00pm-2:00pm)" << endl;
		cout << "6-(2:00pm-3:00pm)" << endl;
		cout << "7-(3:00pm-4:00pm)" << endl;
		cout << "8-(4:00pm-5:00pm)" << endl;
		cout << "9-(5:00pm-6:00pm)" << endl;
		cout << "10-(6:00pm-7:00pm)" << endl;
		cin >> lunr;
		if (lunes[lunr]->getEstado() == false) {
			lunes[lunr]->setEstado(true);
		}
		else {
			cout << "No se puede registrar la cita dado a que el horario se encuentra ocupado" << endl;
		}
		system("CLS");
		cout << "Desea ingresar una cita nueva?(s/n)" << endl;
		cin >> usurl;
	} while (usurl == 's');

}
void doctor::llamarMartes() {
	int marr;
	char usurm;
	martes = new horas * [hora];
	for (int i = 0; i < hora; i++) {
		martes[i] = NULL;
	}
	do {
		cout << "Favor ingrese el numero asociado a la hora en la que desea registrarse" << endl;
		cout << "1-(8:00am-9:00am)" << endl;
		cout << "2-(9:00am-10:00am)" << endl;
		cout << "3-(10:00am-11:00am)" << endl;
		cout << "4-(11:00am-12:00pm)" << endl;
		cout << "5-(1:00pm-2:00pm)" << endl;
		cout << "6-(2:00pm-3:00pm)" << endl;
		cout << "7-(3:00pm-4:00pm)" << endl;
		cout << "8-(4:00pm-5:00pm)" << endl;
		cout << "9-(5:00pm-6:00pm)" << endl;
		cout << "10-(6:00pm-7:00pm)" << endl;
		cin >> marr;
		if (martes[marr]->getEstado() == false) {
			martes[marr]->setEstado(true);
		}
		else {
			cout << "No se puede registrar la cita dado a que el horario se encuentra ocupado" << endl;
		}
		system("CLS");
		cout << "Desea ingresar una cita nueva?(s/n)" << endl;
		cin >> usurm;
	} while (usurm == 's');
}
void doctor::llamarMiercoles() {
	int mierr;
	char usurmc;
	miercoles = new horas * [hora];
	for (int i = 0; i < hora; i++) {
		miercoles[i] = NULL;
	}
	do {
		cout << "Favor ingrese el numero asociado a la hora en la que desea registrarse" << endl;
		cout << "1-(8:00am-9:00am)" << endl;
		cout << "2-(9:00am-10:00am)" << endl;
		cout << "3-(10:00am-11:00am)" << endl;
		cout << "4-(11:00am-12:00pm)" << endl;
		cout << "5-(1:00pm-2:00pm)" << endl;
		cout << "6-(2:00pm-3:00pm)" << endl;
		cout << "7-(3:00pm-4:00pm)" << endl;
		cout << "8-(4:00pm-5:00pm)" << endl;
		cout << "9-(5:00pm-6:00pm)" << endl;
		cout << "10-(6:00pm-7:00pm)" << endl;
		cin >> mierr;
		if (miercoles[mierr]->getEstado() == false) {
			miercoles[mierr]->setEstado(true);
		}
		else {
			cout << "No se puede registrar la cita dado a que el horario se encuentra ocupado" << endl;
		}
		system("CLS");
		cout << "Desea ingresar una cita nueva?(s/n)" << endl;
		cin >> usurmc;
	} while (usurmc == 's');
}
void doctor::llamarJueves() {
	int juevr;
	char usurj;
	jueves = new horas * [hora];
	for (int i = 0; i < hora; i++) {
		jueves[i] = NULL;
	}
	do {
		cout << "Favor ingrese el numero asociado a la hora en la que desea registrarse" << endl;
		cout << "1-(8:00am-9:00am)" << endl;
		cout << "2-(9:00am-10:00am)" << endl;
		cout << "3-(10:00am-11:00am)" << endl;
		cout << "4-(11:00am-12:00pm)" << endl;
		cout << "5-(1:00pm-2:00pm)" << endl;
		cout << "6-(2:00pm-3:00pm)" << endl;
		cout << "7-(3:00pm-4:00pm)" << endl;
		cout << "8-(4:00pm-5:00pm)" << endl;
		cout << "9-(5:00pm-6:00pm)" << endl;
		cout << "10-(6:00pm-7:00pm)" << endl;
		cin >> juevr;
		if (jueves[juevr]->getEstado() == false) {
			jueves[juevr]->setEstado(true);
		}
		else {
			cout << "No se puede registrar la cita dado a que el horario se encuentra ocupado" << endl;
		}
		system("CLS");
		cout << "Desea ingresar una cita nueva?(s/n)" << endl;
		cin >> usurj;
	} while (usurj == 's');
}
void doctor::llamarViernes() {
	int vierr;
	char usurv;
	viernes = new horas * [hora];
	for (int i = 0; i < hora; i++) {
		viernes[i] = NULL;
	}
	do {
		cout << "Favor ingrese el numero asociado a la hora en la que desea registrarse" << endl;
		cout << "1-(8:00am-9:00am)" << endl;
		cout << "2-(9:00am-10:00am)" << endl;
		cout << "3-(10:00am-11:00am)" << endl;
		cout << "4-(11:00am-12:00pm)" << endl;
		cout << "5-(1:00pm-2:00pm)" << endl;
		cout << "6-(2:00pm-3:00pm)" << endl;
		cout << "7-(3:00pm-4:00pm)" << endl;
		cout << "8-(4:00pm-5:00pm)" << endl;
		cout << "9-(5:00pm-6:00pm)" << endl;
		cout << "10-(6:00pm-7:00pm)" << endl;
		cin >> vierr;
		if (viernes[vierr]->getEstado() == false) {
			viernes[vierr]->setEstado(true);
		}
		else {
			cout << "No se puede registrar la cita dado a que el horario se encuentra ocupado" << endl;
		}
		system("CLS");
		cout << "Desea ingresar una cita nueva?(s/n)" << endl;
		cin >> usurv;
	} while (usurv == 's');
}
void doctor::llamarSabado() {
	int sabr;
	char usurs;
	sabado = new horas * [hora];
	for (int i = 0; i < hora; i++) {
		sabado[i] = NULL;
	}
	do {
		cout << "Favor ingrese el numero asociado a la hora en la que desea registrarse" << endl;
		cout << "1-(8:00am-9:00am)" << endl;
		cout << "2-(9:00am-10:00am)" << endl;
		cout << "3-(10:00am-11:00am)" << endl;
		cout << "4-(11:00am-12:00pm)" << endl;
		cout << "5-(1:00pm-2:00pm)" << endl;
		cout << "6-(2:00pm-3:00pm)" << endl;
		cout << "7-(3:00pm-4:00pm)" << endl;
		cout << "8-(4:00pm-5:00pm)" << endl;
		cout << "9-(5:00pm-6:00pm)" << endl;
		cout << "10-(6:00pm-7:00pm)" << endl;
		cin >> sabr;
		if (sabado[sabr]->getEstado() == false) {
			sabado[sabr]->setEstado(true);
		}
		else {
			cout << "No se puede registrar la cita dado a que el horario se encuentra ocupado" << endl;
		}
		system("CLS");
		cout << "Desea ingresar una cita nueva?(s/n)" << endl;
		cin >> usurs;
	} while (usurs == 's');
}
void doctor::agregarPaciente(mascota* paciente) {
	if (cant < tam) {
		masc[cant] = paciente;
	}
}
void doctor::borrarPaciente() {
	int tipo;
	cout << "Que mascota desea eliminar" << endl;
	cin >> tipo;
	for (int i = 0;i < tam;i++) {
		if (masc[tipo]->getTipo() == masc[i]->getTipo()) {
			masc[i] = NULL;
			masc[i] = masc[i + 1];
			cant--;
		}
	}
}
string doctor::getPacientes() {
	stringstream s;
	for (int i = 0;i < tam;i++)
		s << masc[i]->mostrarMascota();
		return s.str();
	}
string doctor::getNombreDoc() {
	return nombre;
}
doctor::~doctor() {
	for (int i = 0; i < tam;i++) {
		delete masc[i];
		delete lunes[i];
		delete martes[i];
		delete miercoles[i];
		delete jueves[i];
		delete viernes[i];
		delete sabado[i];
	}
	delete[] masc;
	delete[] lunes;
	delete[] martes;
	delete[] miercoles;
	delete[] jueves;
	delete[] viernes;
	delete[] sabado;
}