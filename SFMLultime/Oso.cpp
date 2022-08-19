#include "Oso.h"

Oso::Oso() : Animal()
{
	tipoPelaje = "";
}

Oso::Oso(int tipoAnimal, int peso, float tamaño, string habitad, string raza, string tipoPelaje) :Animal(tipoAnimal, peso, tamaño, habitad, raza)
{
	this->tipoPelaje = tipoPelaje;
}

string Oso::getTipoPelaje() { return tipoPelaje; }
void Oso::setTipoPelaje(string TipoPelaje) { this->tipoPelaje = tipoPelaje; }

void Oso::print()
{
	cout << "--Informacion del Oso-- \n\n" << endl;
	Animal::print();
	cout << "Tipo de pelaje: " << getTipoPelaje() << endl << endl;
}

void Oso::dormir()
{
	cout << "EL oso esta durmiendo. " << endl;
}

void Oso::jugar()
{
	cout << "El oso esta jugando. " << endl;
}

void Oso::comer()
{
	cout << "El oso esta comiendo. " << endl;
}

void Oso::correr()
{
	cout << "El oso esta corriendo. " << endl;
}

void Oso::arrastrarse()
{
	cout << "El oso se esta arrastrando ??? " << endl;
}

void Oso::devorar()
{
	cout << "El oso esta devorando la comida. " << endl;
}

void Oso::atacar()
{
	cout << "EL oso esta atacando. " << endl;
}

ostream& operator<<(ostream& out, Oso& animal)
{
	animal.print();
	return out;
}

