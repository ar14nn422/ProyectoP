#include"menuprincipal.h"

menuprincipal::menuprincipal() {
	esp = new coleccionespecialidades();
	duennos = new ColeccionDueños();
	citas = new Agenda(0);
}
void menuprincipal::menu() {
	int respuesta;
	char respuestaFinal;
	do {
		cout << "Menu principal del sistema hospitalario" << endl << endl;
		cout << "1-Submenu de Administracion" << endl;
		cout << "2-Submenu de control de citas" << endl;
		cout << "3-Submenu para Busquedas y listados" << endl;
		cout << "Favor ingrese su respuesta: " << endl;
		cin >> respuesta;
		switch (respuesta)
		{
		case 1:
			system("cls");
			opcionUno();
			cout << "Desea realizar alguna otra funcion?(s/n)" << endl;
			cin >> respuestaFinal;
			system("cls");
			break;
		case 2:
			system("cls");
			opcionDos();
			cout << "Desea realizar alguna otra funcion?(s/n)" << endl;
			cin >> respuestaFinal;
			system("cls");
			break;
		case 3:
			system("cls");
			opcionTres();
			cout << "Desea realizar alguna otra funcion?(s/n)" << endl;
			cin >> respuestaFinal;
			system("cls");
			break;
		default:
			system("cls");
			cout << "Desea realizar alguna otra funcion?(s/n)" << endl;
			cin >> respuestaFinal;
			system("cls");
			break;
		}
	} while (respuestaFinal == 's');
	
}
void menuprincipal::opcionUno() {
	int respuesta;
	string nombEsp;
	int opUsuar;
	string nomDoc;
	string duenoId;
	string duennoNomb;
	string nombreMas;
	string idMas;
	cout << "Submenu de administracion" << endl << endl;
	cout << "1-Ingresar especialidades" << endl;
	cout << "2-Ingresar Doctor (Por especialidad)" << endl;
	cout << "3-Ingresar Duenno" << endl;
	cout << "4- Ingresar Mascota(por duenno)" << endl;
	cout << "0-Regresar al menu principal" << endl;
	cout << "Favor ingrese su respuesta: " << endl;
	cin >> respuesta;
	switch (respuesta) {
	case 1:
		system("cls");
		cin.get();
		cout << "Favor ingrese el nombre de la especialidad" << endl;
		getline(cin, nombEsp);
		if (esp->adminOpUno(nombEsp) != true) {
			cout << "No se pueden registrar mas especialidades" << endl;
		}
		break;	
	case 2:
		system("cls");
		cout << "Favor seleccione la especialidad en la que desea registrar al doctor" << endl;
		cout << esp->toStringEspc();
		cin >> opUsuar;
		system("cls");
		cin.get();
		cout << "Favor ingrese el nombre del doctor" << endl;
		getline(cin, nomDoc);
		cin.get();
		system("cls");
		if (esp->adminOpDos(opUsuar, nomDoc)==true) {
			cout << "Se ha registrado un doctor" << endl;
		}
		else {
			cout << "No se ha registrado el doctor, revisar la especialidad asignada" << endl;
		}
		break;
	case 3:
		system("cls");
		cout << "Favor ingrese el nombre del duenno" << endl;
		getline(cin, duennoNomb);
		cout << "Favor ingrese el id del duenno" << endl;
		cin >> duenoId;
		duennos->ingresarDuennos(duennoNomb, duenoId);
		break;
	case 4:
		system("cls");
		cout << "Favor ingrese su id" << endl;
		cin >> duenoId;
		cout << "Favor ingrese el nombre de la mascota" << endl;
		getline(cin, nombreMas);
		cout << "Favor ingrese el id de la mascota" << endl;
		getline(cin, idMas);
		duennos->ingresarMascotas(duenoId,nombreMas,idMas);
		break;
	case 0:
		system("cls");
		break;
	default:
		cout << "Favor ingrese una opcion valida" << endl;
		system("cls");
		opcionUno();
		break;
	}
}
void menuprincipal::opcionDos() {
	int respuesta;
	cout << "Submenu de control de citas" << endl << endl;
	cout << "1-Sacar Cita" << endl;
	cout << "2-Cancelar Cita" << endl;
	cout << "3-Mostrar Calendario de Citas por Doctor" << endl;
	cout << "4- Mostrar Citas por Due?o" << endl;
	cout << "0-Regresar al menu principal" << endl;
	cout << "Favor ingrese su respuesta: " << endl;
	cin >> respuesta;
	switch (respuesta) {
	case 1:
		system("cls");
		break;
	case 2:
		system("cls");
		break;
	case 3:
		system("cls");
		break;
	case 4:
		system("cls");
		break;
	case 0:
		system("cls");
		break;
	default:
		cout << "Favor ingrese una opcion valida" << endl;
		system("cls");
		opcionDos();
		break;
	}

}
void menuprincipal::opcionTres() {
	int respuesta;
	int verDoc;
	string nombreDuen;
	cout << "Submenu para Busquedas y listados" << endl << endl;
	cout << "1-Mostrar Listados de Especialidades" << endl;
	cout << "2-Mostrar Listado de Doctores por Especialidad" << endl;
	cout << "3-Mostrar Duennos por Mascotas" << endl;
	cout << "4- Mostrar Pacientes por Doctor" << endl;
	cout << "0-Regresar al menu principal" << endl;
	cout << "Favor ingrese su respuesta: " << endl;
	cin >> respuesta;
	switch (respuesta) {
	case 1:
		system("cls");
		cout<<esp->toStringEspc();
		break;
	case 2:
		system("cls");
		cout << "Favor seleccione el numero asociado a la especialidad de la que desea ver los doctores" << endl;
		cout<<esp->toStringEspc();
		cin >> verDoc;
		cin.get();
		cout<<esp->toStringDocs(verDoc);
		break;
	case 3:
		system("cls");
		cout << "Favor ingrese su nombre" << endl;
		cin >> nombreDuen;
		cout << "A continuacion se le mostraran sus mascotas" << endl;
		cout << duennos->mostrarMascotas(nombreDuen) << endl;
		break;
	case 4:
		system("cls");
		break;
	case 0:
		system("cls");
		break;
	default:
		cout << "Favor ingrese una opcion valida" << endl;
		system("cls");
		opcionDos();
		break;
	}
}

menuprincipal::~menuprincipal() {
}
