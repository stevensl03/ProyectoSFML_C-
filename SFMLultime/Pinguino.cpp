#include "Pinguino.h"

Pinguino::Pinguino() : Animal() {

	ColorPecho = "";
}

Pinguino::Pinguino(int tipoAnimal, int peso, float tamaño, string habitad, string raza, string ColorPecho) :Animal(tipoAnimal, peso, tamaño, habitad, raza)
{

	this->ColorPecho = ColorPecho;
}

string Pinguino::getColorPecho() { return ColorPecho; }
void Pinguino::setColorPecho(string ColorPecho) { this->ColorPecho = ColorPecho; }

void Pinguino::print()
{
	cout << "--Informacion del pinguino-- \n\n" << endl;
	Animal::print();
	cout << "Color del pecho: " << getColorPecho() << endl << endl;
}

void Pinguino::nadar()
{
	cout << "estoy nadando" << endl;
}

void Pinguino::respirar()
{
	cout << "estoy respirando" << endl;
}

void Pinguino::reproducir()
{
	cout << "Me reporduzco mediante huevos" << endl;
}

void Pinguino::desarrollar()
{
	cout << "Me desarrollo a partir de un huevo" << endl;
}

/*
ostream& operator<<(ostream& out, Pinguino* animal)
{
	out << "Tipo de animal: " << animal->getTipoAnimal() << endl;
	out << "Peso: " << animal->getPeso() << endl;
	out << "Habitad: " << animal->getHabitad() << endl;
	out << "Raza: " << animal->getRaza() << endl;
	out << "Tamaño: " << animal->getTamaño() << endl;
	out << "Color del pecho " << animal->getColorPecho() << endl;
	return out;
}*/