#include "Producto.h"

Producto::Producto()
{
}

void Producto::setNombre(string _nombre)
{
	m_nombre = _nombre;
}

void Producto::setCantidad(double _cantidad)
{
	m_cantidad = _cantidad;
}

void Producto::setId(int id)
{
	m_id = id;
}

string Producto::getNombre()
{
	return m_nombre;
}

double Producto::getCantidad()
{
	return m_cantidad;
}

int Producto::getId()
{
	return m_id;
}
