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
	// Iniciar variables
	string nombre;
	int puntos;
	int telefono;
	string correo;

	//Pedir datos
	cout << "Ingresa el nombre del cliente: " << endl;
	cin >> nombre;
	cin.ignore();

	cout << "Introduce los puntos de " << nombre << ":" << endl;
	cin >> puntos;

	cout << "Introduce el numero de telefono de " << nombre << ":" << endl;
	cin >> telefono;

	cout << "Introduce el correo electronico de " << nombre << ":" << endl;
	cin >> correo;
	cin.ignore();

	// Crear objeto cliente
	Cliente cliente = Cliente();

	// Introducir datos
	cliente.setNombre(nombre);
	cliente.setPuntos(puntos);
	cliente.setTelefono(telefono);
	cliente.setCorreo(correo);

	setCliente(cliente);
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

	// Menu de opciones
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

		// Ingresar a la seleccion
		switch (opcion) {
		case 1:
			optionCliente();
			break;
		case 2:
			break;
		case 3:
			break;
		default:
		}

		// Repetir programa
		int opcionRepetir = 0;
		cout << "Quieres usar otra opcion? 1 - Si, 2 - No" << endl;
		cin >> opcionRepetir;
		if (opcionRepetir == 2) {
			continuar = false;
		}
	}
}
