#pragma once
#include "Prerequisites.h"
#include <Producto.h>
class Proveedor {
private:
	// Atributos
	int m_id;
	string m_marca;
	vector<Producto> m_producto;

public:
	Proveedor();

	// Metodos
	void setMarca(string _marca);

	void setProducto(Producto _producto);

	void deleteProducto(int _idProducto);

	void setId(int id);

	string getMarca();

	vector<Producto> getProducto();

	int getId();
};