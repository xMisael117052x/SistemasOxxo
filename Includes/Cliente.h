#pragma once
#include "Prerequisites.h"
class Cliente {
private:
	string m_nombre;
	int m_puntos;
	int m_telefono;
	string m_correo;

public:
	Cliente();

	~Cliente();

	void setNombre(string _nombre);


	void setPuntos(int puntos);


	void setTelefono(int telefono);


	void setCorreo(string correo);


	string getNombre();


	int getPuntos();


	int getTelefono();


	string getCorreo();

};

