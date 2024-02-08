#pragma once
#include "Prerequisites.h";
#include <Cliente.h>
#include <Proveedor.cpp>

class Sistema {
private:
	vector<Cliente> m_clientes;
	vector<Producto> m_productos;
	vector<Proveedor> m_proveedores;
public:
	Sistema();

	void setCliente(Cliente _cliente);

	void setProducto(Producto _producto);

	void setProveedor(Proveedor _proveedor);
};