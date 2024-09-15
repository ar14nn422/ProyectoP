#include "Dueño.h"
class ColeccionDueños {
private:
	int tam;
	int cant;
	Dueño** duenno;
public:
	ColeccionDueños(int);
	~ColeccionDueños();
	void setTam();
	void setCant();
	int getTam();
	int getCant();
	void ingresarDuennos(Dueño*);
	string mostrarDue�os();

};