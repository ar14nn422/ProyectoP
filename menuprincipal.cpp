#include"menuprincipal.h"

menuprincipal::menuprincipal() {

}
void menuprincipal::menu() {
	int respuesta;

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
		break;
	case 2:
		system("cls");
		opcionDos();
		break;
	case 3:
		system("cls");
		opcionTres();
		break;
	default:
		break;
	}
}
void menuprincipal::opcionUno() {
	int respuesta;
	cout << "Submenu de administracion" << endl << endl;
	cout << "1-Ingresar especialidades" << endl;
	cout << "2-Ingresar Doctor (Por especialidad)" << endl;
	cout << "3-Ingresar Due?o" << endl;
	cout << "4- Ingresar Mascota(por due?o)" << endl;
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
	cout << "Submenu para Busquedas y listados" << endl << endl;
	cout << "1-Mostrar Listados de Especialidades" << endl;
	cout << "2-Mostrar Listado de Doctores por Especialidad" << endl;
	cout << "3-Mostrar Due?os por Mascotas" << endl;
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