#include "Hipopotamo.h"

Hipopotamo::Hipopotamo() : Animal() {

	TamañoDientes = 0;
}

Hipopotamo::Hipopotamo(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int TamañoDientes) :Animal(tipoAnimal, peso, tamaño, habitad, raza)
{
	this->TamañoDientes = TamañoDientes;
}

int Hipopotamo::getTamañoDientes() { return TamañoDientes; }
void Hipopotamo::setTamañoDientes(int TamañoDientes) { this->TamañoDientes = TamañoDientes; }

void Hipopotamo::print()
{
	Animal::print();
	cout << "Tamaño de dientes: " << getTamañoDientes() << endl;
}

void Hipopotamo::nadar()
{
	cout << "estoy nadando" << endl;
}

void Hipopotamo::respirar()
{
	cout << "estoy respirando" << endl;
}

void Hipopotamo::nacer()
{
	cout << "Nazco mediante gestacion" << endl;
}

void Hipopotamo::crecer()
{
	cout << "Me desarrollo dentro del vientre de mi madre, luego crezco sano y fuerte" << endl;
}



ostream& operator<<(ostream& out, Hipopotamo& animal)
{
	animal.print();
	return out;
}

