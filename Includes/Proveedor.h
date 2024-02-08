#pragma once
#include "Prerequisites.h"
#include <Producto.h>
class Proveedor {
private:
	string m_marca;
	vector<Producto> m_producto;

public:
	Proveedor();
	~Proveedor();

	void setmarca(string _marca);

	void setproducto(vector<Producto> _producto);

	string getmarca();
	vector<Producto> getproducto();




};