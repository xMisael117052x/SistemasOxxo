#include "Cliente.h"

Cliente::Cliente()
{

}

Cliente::~Cliente()
{
}

void Cliente::setNombre(string _nombre)
{
	m_nombre = _nombre;
}

void Cliente::setPuntos(int _puntos)
{
	m_puntos = _puntos;
}

void Cliente::setTelefono(int _telefono)
{
	m_telefono = _telefono;
}

void Cliente::setCorreo(string _correo)
{
	m_correo = _correo;
}

void Cliente::setId(int id)
{
	m_id = id;
}

string Cliente::getNombre()
{
	return m_nombre;
}

int Cliente::getPuntos()
{
	return m_puntos;
}

int Cliente::getTelefono()
{
	return m_telefono;
}

string Cliente::getCorreo()
{
	return m_correo;
}

int Cliente::getId()
{
	return m_id;
}
