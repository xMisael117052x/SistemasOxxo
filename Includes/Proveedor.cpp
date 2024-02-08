#include "Proveedor.h"

Proveedor::Proveedor()
{
}

void Proveedor::setmarca(string _marca)
{
	m_marca = _marca;
}

void Proveedor::setproducto(vector<Producto> _producto)
{
	m_producto = _producto;
}

string Proveedor::getmarca()
{
	return m_marca;
}

vector<Producto> Proveedor::getproducto()
{
	return m_producto;
}
