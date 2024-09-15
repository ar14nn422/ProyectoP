#include "doctor.h"

doctor::doctor(string nomb) {
	nombre = nomb;
	tam = 60;
	cant = 0;
	hora = 10;
	masc[tam] = new mascota*; +
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
		int lunr;
		char usur;
		bool Lunes = lun;
		for (i; i < hora; i++) {
			lun[hora] = NULL;
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
			if (lunr > 0 && lunr <= 10 && lun[lunr]->getEstado() != true) {
				lun[lunr] = new horas()*;
			}
			system("CLS");
			cout << "Desea ingresar una cita nueva?(s/n)" << endl;
			cin >> usur;
		} while (usur == s)



			break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		break;
	}

}