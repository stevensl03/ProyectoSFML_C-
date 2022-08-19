#include "Empleados.h"

Empleados::Empleados() :Persona()
{
	labor = "";
}

Empleados::Empleados(string nombre, string apellido, string labor) :Persona(nombre, apellido)
{
	this->labor = labor;
}

string Empleados::getlabor()
{
	return labor;
}

void Empleados::setlabor(string labor)
{
	this->labor = labor;
}

void Empleados::trabajar()
{
	cout << "Estoy trabajando" << endl;
}
