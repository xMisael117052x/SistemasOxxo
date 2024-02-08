#include "Prerequisites.h"
#include "Cliente.h"

int main() {
	Cliente cliente = Cliente();
	cliente.setNombre("leo");
	cout << cliente.getNombre() << endl;




	return 0;
}
