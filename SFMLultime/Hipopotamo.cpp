#include "Hipopotamo.h"

Hipopotamo::Hipopotamo() : Animal() {

	TamaņoDientes = 0;
}

Hipopotamo::Hipopotamo(int tipoAnimal, int peso, float tamaņo, string habitad, string raza, int TamaņoDientes) :Animal(tipoAnimal, peso, tamaņo, habitad, raza)
{
	this->TamaņoDientes = TamaņoDientes;
}

int Hipopotamo::getTamaņoDientes() { return TamaņoDientes; }
void Hipopotamo::setTamaņoDientes(int TamaņoDientes) { this->TamaņoDientes = TamaņoDientes; }

void Hipopotamo::print()
{
	Animal::print();
	cout << "Tamaņo de dientes: " << getTamaņoDientes() << endl;
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

