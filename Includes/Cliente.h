#pragma once
#include "Prerequisites.h"
class Cliente {
private:
	// Atributos
	int m_id;
	string m_nombre;
	int m_puntos;
	int m_telefono;
	string m_correo;

public:
	Cliente();

	~Cliente();

	// Metodos
	void setNombre(string _nombre);

	void setPuntos(int puntos);

	void setTelefono(int telefono);

	void setCorreo(string correo);

	void setId(int id);

	string getNombre();

	int getPuntos();

	int getTelefono();

	string getCorreo();	

	int getId();
};

