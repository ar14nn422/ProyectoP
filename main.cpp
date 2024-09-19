#include"menuprincipal.h"
int main() {
	
	menuprincipal c1;
	c1.menu();
	cout << "Gracias por utilizar nuestro servicio" << endl;
	c1.~menuprincipal();
	cin.get();
	cin.get();
}