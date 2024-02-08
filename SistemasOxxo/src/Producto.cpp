#include "Producto.h"

Producto::Producto()
{
}

void Producto::setnombre(string _nombre)
{
	m_nombre = _nombre;
}

void Producto::setcantidad(double _cantidad)
{
	m_cantidad = _cantidad;
}

string Producto::getnombre()
{
	return m_nombre;
}

double Producto::getcantidad()
{
	return m_cantidad;
}
