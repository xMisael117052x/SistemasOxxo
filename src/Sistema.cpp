#include "Sistema.h"

void Sistema::setCliente(Cliente _cliente)
{
	m_clientes.push_back(_cliente);
}

void Sistema::setProducto(Producto _producto)
{
	m_productos.push_back(_producto);
}

void Sistema::setProveedor(Proveedor _proveedor)
{
	m_proveedores.push_back(_proveedor);
}

void Sistema::optionCliente()
{
}

void Sistema::optionProveedor()
{
}

void Sistema::optionProducto()
{
}

Sistema::Sistema()
{

	cout << "Bienveindo al sistema de oxxo" << endl;
	bool continuar = true;
	while (continuar) {
		int opcion = 0;
		cout << "###############################" << endl;
		cout << "Menu" << endl;
		cout << "1-. Agregar cliente" << endl;
		cout << "2-. Agregar proveedor" << endl;
		cout << "3-. Agregar producto" << endl;
		cout << "###############################" << endl;
		cout << "Seleccione una opcion del menu" << endl;
		cin >> opcion;

		switch (opcion) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
		}
	}
}
