#include "Sistema.h"

void Sistema::setCliente(Cliente _cliente)
{
	m_clientes.push_back(_cliente);
}

void Sistema::setProducto(Producto _producto, int _idProveedor)
{
	m_proveedores[_idProveedor].setProducto(_producto);
}

void Sistema::setProveedor(Proveedor _proveedor)
{
	m_proveedores.push_back(_proveedor);
}

void Sistema::optionRegistrarCliente()
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

	if (m_clientes.size() == 0) {
		cliente.setId(1);
	}
	else {
		cliente.setId(m_clientes.back().getId() + 1);
	}

	setCliente(cliente);
}

void Sistema::optionDeleteCliente()
{
	// Iniciar variables
	int id;

	//Pedir datos
	cout << "Ingresa el id del cliente que quieres eliminar: " << endl;
	cin >> id;

	// Eliminar cliente
	for (int i = 0; i < m_clientes.size(); i++) {
		if (m_clientes[i].getId() == id) {
			m_clientes.erase(m_clientes.begin() + i);

			// Mensaje
			cout << "Cliente eliminado " << id << endl;
			return;
		}
	}

	// Mensaje
	cout << "No existe el cliente" << endl;
}

void Sistema::optionShowCliente()
{
	// Mostrar clientes
	for (int i = 0; i < m_clientes.size(); i++) {
		cout << "###############################" << endl;
		cout << "Id: " << m_clientes[i].getId() << endl;
		cout << "Cliente " << i + 1 << endl;
		cout << "Nombre: " << m_clientes[i].getNombre() << endl;
		cout << "Puntos: " << m_clientes[i].getPuntos() << endl;
		cout << "Telefono: " << m_clientes[i].getTelefono() << endl;
		cout << "Correo: " << m_clientes[i].getCorreo() << endl;
		cout << "###############################" << endl;
	}
}

void Sistema::optionRegistrarProveedor()
{
	// Iniciar variables
	string nombre;

	//Pedir datos
	cout << "Ingresa el nombre del proveedor: " << endl;
	cin >> nombre;
	cin.ignore();

	// Crear objeto proveedor
	Proveedor proveedor = Proveedor();
	proveedor.setMarca(nombre);


	if (m_proveedores.size() == 0) {
		proveedor.setId(1);
	}
	else {
		proveedor.setId(m_proveedores.back().getId() + 1);
	}

	setProveedor(proveedor);

	// Mensaje
	cout << "Proveedor agregado" << endl;
}

void Sistema::optionDeleteProveedor()
{
	// Iniciar variables
	int id;

	//Pedir datos
	cout << "Ingresa el id del proveedor que quieres eliminar: " << endl;
	cin >> id;

	// Eliminar proveedor
	for (int i = 0; i < m_proveedores.size(); i++) {
		if (m_proveedores[i].getId() == id) {
			m_proveedores.erase(m_proveedores.begin() + i);

			// Mensaje
			cout << "Proveedor eliminado " << id << endl;
			return;
		}
	}

	// Mensaje
	cout << "Proveedor eliminado " << id << endl;
}

void Sistema::optionShowProveedor()
{
	// Mostrar proveedores
	for (int i = 0; i < m_proveedores.size(); i++) {
		cout << "###############################" << endl;
		cout << "Id: " << m_proveedores[i].getId() << endl;
		cout << "Proveedor " << i + 1 << endl;
		cout << "Nombre: " << m_proveedores[i].getMarca() << endl;
		cout << "###############################" << endl;
	}
}

void Sistema::optionRegistrarProducto()
{
	// Iniciar variables
	int idProveedor;
	string nombre;
	int cantidad;

	// Mostrar proveedores
	optionShowProveedor();

	//Pedir datos
	cout << "Ingresa el id del proveedor: " << endl;
	cin >> idProveedor;

	cout << "Ingresa el nombre del producto: " << endl;
	cin >> nombre;
	cin.ignore();

	cout << "Introduce la cantidad de " << nombre << ":" << endl;
	cin >> cantidad;

	// Buscar proveedor y agregar producto
	Producto producto = Producto();
	producto.setNombre(nombre);
	producto.setCantidad(cantidad);

	if (idProveedor > 0 && idProveedor <= m_proveedores.size()) {
		for (int i = 0; i < m_proveedores.size(); i++) {
			if (m_proveedores[i].getId() == idProveedor) {
				if (m_proveedores[i].getProducto().size() == 0) {
					producto.setId(1);
				}
				else {
					producto.setId(m_proveedores[i].getProducto().back().getId() + 1);
				}
				setProducto(producto, i);

				// Mensaje
				cout << "Producto agregado" << endl;
				return;
			}
		}

		// Mensaje
		cout << "No existe el proveedor" << endl;
	}
	else {
		cout << "No existe el proveedor" << endl;
	}
}

void Sistema::optionDeleteProducto()
{
	// Iniciar variables
	int idProducto;

	//Pedir datos
	cout << "Ingresa el id del producto que quieres eliminar: " << endl;
	cin >> idProducto;

	// Eliminar producto
	for (int i = 0; i < m_proveedores.size(); i++) {

		for (int j = 0; j < m_proveedores[i].getProducto().size(); j++) {
			if (m_proveedores[i].getProducto()[j].getId() == idProducto) {
				m_proveedores[i].deleteProducto(j);

				// Mensaje
				cout << "Producto eliminado " << idProducto << endl;
				return;
			}
		}

	}

	// Mensaje
	cout << "No existe el producto" << endl;
}

void Sistema::optionShowProducto()
{
	// Mostrar productos
	for (int i = 0; i < m_proveedores.size(); i++) {
		cout << "Proveedor " << i + 1 << endl;
		cout << "Nombre: " << m_proveedores[i].getMarca() << endl;
		cout << "Productos: " << endl;

		for (int j = 0; j < m_proveedores[i].getProducto().size(); j++) {
			cout << "Id: " << m_proveedores[i].getProducto()[j].getId() << endl;
			cout << "Nombre: " << m_proveedores[i].getProducto()[j].getNombre() << endl;
			cout << "Cantidad: " << m_proveedores[i].getProducto()[j].getCantidad() << endl;
		}

		cout << "###############################" << endl;
	}
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
		cout << "****Cliente****" << endl;
		cout << "1-. Agregar cliente" << endl;
		cout << "2-. Eliminar cliente" << endl;
		cout << "3-. Mostrar clientes" << endl;
		cout << "****Proveedor****" << endl;
		cout << "4-. Agregar proveedor" << endl;
		cout << "5-. Eliminar proveedor" << endl;
		cout << "6-. Mostrar proveedores" << endl;
		cout << "****Producto****" << endl;
		cout << "7-. Agregar producto" << endl;
		cout << "8-. Eliminar producto" << endl;
		cout << "9-. Mostrar productos" << endl;
		cout << "###############################" << endl;
		cout << "Seleccione una opcion del menu" << endl;
		cin >> opcion;

		// Ingresar a la seleccion
		switch (opcion) {
		case 1:
			optionRegistrarCliente();
			break;
		case 2:
			optionDeleteCliente();
			break;
		case 3:
			optionShowCliente();
			break;
		case 4:
			optionRegistrarProveedor();
			break;
		case 5:
			optionDeleteProveedor();
			break;
		case 6:
			optionShowProveedor();
			break;
		case 7:
			optionRegistrarProducto();
			break;
		case 8:
			optionDeleteProducto();
			break;
		case 9:
			optionShowProducto();
			break;
		default:
			cout << "No es una opcion correcta" << endl;
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
