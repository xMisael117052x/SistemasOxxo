#pragma once
#include "Prerequisites.h";
#include <Cliente.h>
#include <Proveedor.h>

class Sistema {
private:
	// Atributos
	vector<Cliente> m_clientes;
	vector<Proveedor> m_proveedores;

	// Metodos
	void setCliente(Cliente _cliente);

	void setProducto(Producto _producto, int _idProveedor);

	void setProveedor(Proveedor _proveedor);

	void optionRegistrarCliente();

	void optionDeleteCliente();

	void optionShowCliente();

	void optionRegistrarProveedor();

	void optionDeleteProveedor();

	void optionShowProveedor();

	void optionRegistrarProducto();

	void optionDeleteProducto();

	void optionShowProducto();
public:
	Sistema();
};