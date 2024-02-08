#pragma once
#include "Prerequisites.h"
class Producto {
private:
	string m_nombre;
	double m_cantidad;

public:
	Producto();

	~Producto();

	void setnombre(string _nombre);

	void setcantidad(double _cantidad);

	string getnombre();

	double getcantidad();
};