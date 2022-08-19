#include "Persona.h"

Persona::Persona()
{
	nombre = "";
	apellido = "";
	genero = "";
	edad = 0;
}

Persona::Persona(string nombre, string apellido, string genero, int edad)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->genero = genero;
	this->edad = edad;

}

void Persona::print()
{
	cout << "Nombre: " << getNombre() << endl;
	cout << "Apellido: " << getApellido() << endl;
	cout << "genero: " << getGenero() << endl;
	cout << "Edad: " << getEdad() << endl;
}

string Persona::getNombre(){	return nombre;}
void Persona::setNombre(string nombre){	this->nombre = nombre;}

string Persona::getApellido(){	return apellido;}
void Persona::setApellido(string apellido){	this->apellido = apellido;}

string Persona::getGenero(){	return genero;}
void Persona::setGenero(string genero){	this->genero = genero;}

int Persona::getEdad(){	return edad;}
void Persona::setEdad(int edad){	this->edad = edad;}

void Persona::saludar()
{
	cout << "HEllo!!" << endl;
}


ostream& operator<<(ostream& out, Persona persona)
{
	persona.print();
	return out;
}

istream& operator>>(istream& input, Persona persona)
{
	cout << "Nombre: "; input >> persona.nombre;
	cout << "Apellido: "; input >> persona.apellido;
	cout << "genero: "; input >> persona.genero;
	cout << "Edad: "; input >> persona.edad;
	return input;
}
