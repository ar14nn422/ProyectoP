#include"menuprincipal.h"
int main() {
	menuprincipal *c1=new menuprincipal();
	c1->menu();
	cout << "Gracias por utilizar nuestro servicio" << endl;
	delete c1;
	cin.get();
	cin.get();
	return 0;
}