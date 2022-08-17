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

/*
ostream& operator<<(ostream& out, Hipopotamo* animal)
{
	out << "Tipo de animal: " << animal->getTipoAnimal() << endl;
	out << "Peso: " << animal->getPeso() << endl;
	out << "Habitad: " << animal->getHabitad() << endl;
	out << "Raza: " << animal->getRaza() << endl;
	out << "Tamaño: " << animal->getTamaño() << endl;
	out << "Tamaño de los dientes " << animal->getTamañoDientes() << endl;
	return out;
}*/