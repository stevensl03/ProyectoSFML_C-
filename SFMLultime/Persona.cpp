#include "Persona.h"

Persona::Persona()
{
	nombre = "";
	apellido = "";
}

Persona::Persona(string nombre, string apellido)
{
	this->nombre = nombre;
	this->apellido = apellido;

}

string Persona::getnombre()
{
	return nombre;
}

void Persona::setnombre(string nombre)
{
	this->nombre = nombre;
}

void Persona::saludar()
{
	cout << "Holaaaa" << endl;
}
