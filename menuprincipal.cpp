#include"menuprincipal.h"

menuprincipal::menuprincipal() {
	especial = new especialidad * [7];
	cantEspe = 0;
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
			cout << "Desea realizar alguna otra funcion?(s/n)" << endl;
			cin >> respuestaFinal;
			system("cls");
			break;
		}
	} while (respuestaFinal == 's');
	
}
void menuprincipal::opcionUno() {
	int respuesta;
	string nombreEsp;
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
		submAdmin1();
		break;	
	case 2:
		system("cls");
		submAdmin2();
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
		opcionUno();
		break;
	}
}
void menuprincipal::submAdmin1() {
	string nomEspe;
	cout << "Favor ingrese el nombre de la especialidad" << endl;
	cin >> nomEspe;
	especial[cantEspe]->setNombre(nomEspe);
	cantEspe++;
}
void menuprincipal::submAdmin2() {
	string respUsuar;
	string nombDoc;
	cout << "En cual especialidad le gustaria registrar al doctor?" << endl;
	cin >> respUsuar;
	for (int i = 0;i < 7;i++) {
		if (respUsuar == especial[i]->getNombre()) {
			cout << "Favor ingrese el nombre del doctor" << endl;
			cin >> nombDoc;
			especial[i]->agregarDoctor(nombDoc);
		}
		else {
			cout << "No se tiene esa especialidad registrada, favor registrar especialidad" << endl;
		}
	}
}
void menuprincipal::submAdmin3() {

}
void menuprincipal::submAdmin4() {

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
menuprincipal::~menuprincipal() {
	for (int i = 0;i < 7;i++) {
		delete especial[i];
	}
	delete[] especial;
}
