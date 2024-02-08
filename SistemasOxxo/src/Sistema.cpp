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

Sistema::Sistema()
{
	// Crear menu de inserciones
}
