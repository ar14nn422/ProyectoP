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
	mascota* mseleccionada = nullptr;
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
		if (esp->adminOpDos(opUsuar - 1, nomDoc) == true) {
			cout << "Se ha registrado un doctor" << endl << endl;
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
		duennos->ingresarMascotas(duenoId, nombreMas);
		mseleccionada = dseleccionado->seleccionarMasc(nombreMas);
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
	int opcion;
	string nombrem;
	string idDuenno;
	string dia;
	int hora = 0;
	Duenno* dseleccionado = nullptr;
	mascota* mseleccionada = nullptr;
	especialidad* espSeleccionada = nullptr;
	Doctor* docSeleccionado = nullptr;
	Doctor* docAsociados = nullptr;
	Cita* c1 = nullptr;
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
		dseleccionado = duennos->encontrarId(idDuenno);
		if (!dseleccionado) {
			cout << "Dueño no encontrado" << endl;
			break;
		}
		else {
			cout << "Encontrado" << endl;
		}
		cout << dseleccionado->mostrarMasc_d() << endl;
		cout << "Ingrese la mascota a la cual se le asignara la cita(nombre completo):" << endl;
		getline(cin, nombrem);
		system("cls");
		mseleccionada = dseleccionado->seleccionarMasc(nombrem);
		if (mseleccionada) {
			cout << "Paciente seleccionado:" << mseleccionada->getNombre() << endl;
		}
		else { 
			cout << "La mascota no esta en el sistema" << endl;
			break; }
		cout << "Seleccione la especialidad que desea:" << endl;
		cout << esp->toStringEspc();
		cin >> opcion;
		system("cls");
		espSeleccionada = esp->encontrarEspecialidad(opcion - 1);
		if (espSeleccionada) {
			cout << espSeleccionada->getNombre() << endl;
		}
		else {
			cout << "Especialidad no encontrada" << endl;
			break; }
		cout << "Doctores de la especialidad " << espSeleccionada->getNombre() << endl;
		cout << espSeleccionada->mostrarDoctor() << endl;
		cin >> opcion;
		system("cls");
		docSeleccionado = espSeleccionada->encontrarDoc(opcion - 1);
		if (docSeleccionado) {
			cout << "Doctor seleccionado:" << docSeleccionado->getNombreDoc() << endl;
		}
		cout << docSeleccionado->mostrarHorario() << endl;
		cout << "Ingrese el dia:" << endl;
		cin >> dia;
		cout << "Ingrese la hora:" << endl;
		cin >> hora;
		if (hora > 19 && hora < 8 && hora == 12) {
			cout << "Esta hora no se encuentra disponible" << endl;
		}
		docSeleccionado->reservar(dia, hora);
		c1 = new Cita(hora, dia, true, espSeleccionada, docSeleccionado, dseleccionado, mseleccionada);
		cout << c1->ImprimirCita();
		delete c1;


		break;
	case 2:
		cout << "Ingrese el id del dueño:" << endl;
		getline(cin, idDuenno);
		dseleccionado = duennos->encontrarId(idDuenno);
		if (dseleccionado == nullptr) {
			cout << "No se encontró ningún dueño con este id" << endl;
		}
		//docAsociados = citas->asociadosDuenno(dseleccionado);

		system("cls");
		break;
	case 3:

		system("cls");

		cout << "Seleccione la especialidad para mostrar los doctores:" << endl;
		cout << esp->toStringEspc();
		cin >> opcion;

		espSeleccionada = esp->encontrarEspecialidad(opcion - 1);
		if (!espSeleccionada) {
			cout << "Especialidad no válida." << endl;
			break;
		}

		cout << "Seleccione el doctor para ver su calendario de citas:" << endl;
		cout << espSeleccionada->mostrarDoctor() << endl;
		cin >> opcion;

		docSeleccionado = espSeleccionada->encontrarDoc(opcion - 1);
		if (!docSeleccionado) {
			cout << "Doctor no válido." << endl;
			break;
		}

		cout << "Calendario de citas del Dr. " << docSeleccionado->getNombreDoc() << ":" << endl;
		cout << docSeleccionado->mostrarHorario();

		break;
	case 4:
		system("cls");
		cout << "Ingrese el ID del dueño para ver sus citas:" << endl;
		getline(cin, idDuenno);

		dseleccionado = duennos->encontrarId(idDuenno);
		if (!dseleccionado) {
			cout << "No se encontró ningun dueño con este ID." << endl;
			break;
		}

		cout << "Buscando citas para el duenno " << dseleccionado->getNombreDuenno() << "..." << endl;
		citas->mostrarCitasDuenno(dseleccionado);


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
		cout << esp->toStringEspc();
		break;
	case 2:
		system("cls");
		cout << "Favor seleccione el numero asociado a la especialidad de la que desea ver los doctores" << endl;
		cout << esp->toStringEspc();
		cin >> verDoc;
		system("cls");
		cout << "Doctores de la especialidad " << esp->getEspecialidad(verDoc - 1) << endl;
		cout << esp->toStringDocs(verDoc);
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
		cout << esp->getPacientes(pacientes) << endl;
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

