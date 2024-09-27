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
			system("cls");
			break;
		}
		cout << "Desea realizar alguna otra funcion?(s/n)" << endl;
		cin >> respuestaFinal;
		system("cls");
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
	Duenno* dseleccionado = nullptr;
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
		system("cls");
		if (esp->adminOpDos(opUsuar, nomDoc)==true) {
			cout << "Se ha registrado un doctor" << endl<<endl;
		}
		else {
			cout << "No se ha registrado el doctor, revisar la especialidad asignada" << endl;
		}
		break;
	case 3:
		system("cls");
		cout << "Favor ingrese el nombre del duenno" << endl;
		cin.get();
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
		cin.get();
		getline(cin, nombreMas);		
		dseleccionado = duennos->encontrarId(duenoId);
		dseleccionado->asignarMascotas(nombreMas);
		duennos->ingresarMascotas(duenoId,nombreMas);
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
	string opcion;
	string nombrem;
	string idDuenno;
	Duenno* dseleccionado = nullptr;
	mascota* mseleccionada = nullptr;
	especialidad* espSeleccionada = nullptr;
	cout << "Submenu de control de citas" << endl << endl;
	cout << "1-Sacar Cita" << endl;
	cout << "2-Cancelar Cita" << endl;
	cout << "3-Mostrar Calendario de Citas por Doctor" << endl;
	cout << "4- Mostrar Citas por Duenno" << endl;
	cout << "0-Regresar al menu principal" << endl;
	cout << "Favor ingrese su respuesta: " << endl;
	cin >> respuesta;
	cin.ignore();
	switch (respuesta) {
	case 1:
		system("cls");
		cout << "Ingrese el id del duenno:" << endl;
		getline(cin, idDuenno);
		dseleccionado= duennos->encontrarId(idDuenno);
		if (!dseleccionado) {
			cout << "Dueño no encontrado" << endl;
		}
		else {
			cout << "Encontrado"<<endl;
		}
		cout << dseleccionado->mostrarMasc_d() << endl;
		cout << "Ingrese la mascota a la cual se le asignara la cita(nombre completo):" << endl;
		getline(cin, nombrem);
		mseleccionada = dseleccionado->seleccionarMasc(nombrem);
		if (mseleccionada) {
			cout << "Mascota seleccionada:" << mseleccionada->getNombre() << endl;
		}
		cout << "Seleccione la especialidad que desea:" << endl;
		cout << esp->toStringEspc();
		cin>>opcion;
		espSeleccionada = esp->encontrarEspecialidad(opcion);
		if (!espSeleccionada) {
			cout << "Especialidad no encontrada." << endl;
			break;
		}
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
	string idDuenno;
	string pacientes;
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
		system("cls");
		cout << "Doctores de la especialidad " << esp->getEspecialidad(verDoc) << endl;
		cout<<esp->toStringDocs(verDoc);
		break;
	case 3:
		system("cls");
		cout << "Favor ingrese su id" << endl;
		cin >> idDuenno;
		cout << "A continuacion se le mostraran sus mascotas" << endl;
		cout << duennos->mostrarMascotas(idDuenno) << endl;
		break;
	case 4:
		system("cls");
		cout << "Favor ingrese el nombre del doctor" << endl;
		cin >> pacientes;
		system("cls");
		cout << "Estos son los pacientes registrados con este doctor" << endl;
		cout<<esp->getPacientes(pacientes)<<endl;
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
	delete citas;
	delete esp;
	delete duennos;
}
