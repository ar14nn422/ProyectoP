#include"especialidades.h"

especialidades::especialidades() {
	cant = 0;
	tam = 7;
	esp = new especialidad * [tam];
}
void especialidades::agregarEspecialidad(string espc) {
	char respuesta=' ';
	do {
		if (cant < tam) {
			for (int i = 0;i < tam;i++) {
				if (esp[i]->getEspecialidad() != esp[i]->getEspecialidad()) {
					esp[cant]->setEspecialidad(espc);
					cant++;
				}
				else {
					cout << "Esta especialidad se encuentra registrada" << endl;
				}
			}
			cout << "Desea registrar otra especialidad?(s/n)" << endl;
			cin >> respuesta;
		}
	} while (respuesta == 's');
}
especialidades::~especialidades() {
	for (int i = 0;i < tam;i++) {
		delete esp[i];
	}
	delete[] esp;
}