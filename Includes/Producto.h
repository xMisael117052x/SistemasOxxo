#pragma once
#include "Prerequisites.h"
class Producto {
private:
	// Atributos
	int m_id;
	string m_nombre;
	double m_cantidad;

public:
	Producto();

	// Metodos
	void setNombre(string _nombre);

	void setCantidad(double _cantidad);

	void setId(int id);

	string getNombre();

	double getCantidad();

	int getId();
};