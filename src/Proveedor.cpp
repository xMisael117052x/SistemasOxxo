#include "Proveedor.h"

Proveedor::Proveedor()
{
}

void Proveedor::setMarca(string _marca)
{
	m_marca = _marca;
}

void Proveedor::setProducto(Producto _producto)
{
	m_producto.push_back(_producto);
}

void Proveedor::deleteProducto(int _idPosition)
{
	m_producto.erase(m_producto.begin() + _idPosition);
}

void Proveedor::setId(int id)
{
	m_id = id;
}

string Proveedor::getMarca()
{
	return m_marca;
}

vector<Producto> Proveedor::getProducto()
{
	return m_producto;
}

int Proveedor::getId()
{
	return m_id;
}
