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



ostream& operator<<(ostream& out, Pinguino& animal)
{
	animal.print();
	return out;
}

