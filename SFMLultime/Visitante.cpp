#include "Visitante.h"

Visitante::Visitante() : Persona()
{
	edad = 0;
}

Visitante::Visitante(string nombre, string apellido, int edad) :Persona(nombre, apellido)
{
	this->edad = edad;
}

int Visitante::getedad()
{
	return edad;
}

void Visitante::setedad(int edad)
{
	this->edad = edad;
}

void Visitante::fotografiar()
{
	cout << "Estoy fotografiando" << endl;
}