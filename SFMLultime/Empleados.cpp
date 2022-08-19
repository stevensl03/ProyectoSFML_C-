#include "Empleados.h"

Empleados::Empleados() :Persona(){
	labor = "";
}

Empleados::Empleados(string nombre, string apellido, string genero, int edad, string labor) : Persona(nombre, apellido, genero, edad) {
	this->labor = labor;
}



void Empleados::print()
{
	cout << "--Informacion del empreado-- \n\n" << endl;
	Persona::print();
	cout << "labor: " << getLabor() << endl;
}

string Empleados::getLabor()
{
	return labor;
}

void Empleados::setLabor(string labor)
{
	this->labor = labor;
}

void Empleados::trabajar()
{
	cout << "Estoy trabajando" << endl;
}

ostream& operator<<(ostream& out, Empleados& persona)
{
	persona.print();
	return out;
}

