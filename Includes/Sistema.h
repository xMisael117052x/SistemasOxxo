#pragma once
#include "Prerequisites.h";
#include <Cliente.h>
#include <Proveedor.cpp>

class Sistema {
private:
	vector<Cliente> m_clientes;
	vector<Producto> m_productos;
	vector<Proveedor> m_proveedores;


	void setCliente(Cliente _cliente);

	void setProducto(Producto _producto);

	void setProveedor(Proveedor _proveedor);

	void optionCliente();

	void optionProveedor();

	void optionProducto();
public:
	Sistema();

};