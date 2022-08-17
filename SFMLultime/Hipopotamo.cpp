#include "Hipopotamo.h"

Hipopotamo::Hipopotamo() : Animal() {

	Tama�oDientes = 0;
}

Hipopotamo::Hipopotamo(int tipoAnimal, int peso, float tama�o, string habitad, string raza, int Tama�oDientes) :Animal(tipoAnimal, peso, tama�o, habitad, raza)
{
	this->Tama�oDientes = Tama�oDientes;
}

int Hipopotamo::getTama�oDientes() { return Tama�oDientes; }
void Hipopotamo::setTama�oDientes(int Tama�oDientes) { this->Tama�oDientes = Tama�oDientes; }

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
	out << "Tama�o: " << animal->getTama�o() << endl;
	out << "Tama�o de los dientes " << animal->getTama�oDientes() << endl;
	return out;
}*/