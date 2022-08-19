#include "Cocodrilo.h"

Cocodrilo::Cocodrilo() : Animal() {
	largoCola = 0;
}

Cocodrilo::Cocodrilo(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int largoCola) :Animal(tipoAnimal, peso, tamaño, habitad, raza)
{
	this->largoCola = largoCola;
}

int Cocodrilo::getLargoCola() { return largoCola; }
void Cocodrilo::setLargoCola(int largoCola) { this->largoCola = largoCola; }

void Cocodrilo::print()
{
	cout << "--Informacion del cocodrilo-- \n\n" << endl;;
	Animal::print();
	cout << "Largo de cola: " << getLargoCola() << endl << endl;
}

void Cocodrilo::nadar()
{
	cout << "estoy nadando" << endl;
}

void Cocodrilo::respirar()
{
	cout << "estoy respirando" << endl;
}

void Cocodrilo::reproducir()
{
	cout << "Me reporduzco mediante huevos" << endl;
}

void Cocodrilo::desarrollar()
{
	cout << "Me desarrollo a partir de un huevo" << endl;
}




ostream& operator<<(ostream& out, Cocodrilo& animal)
{
	animal.print();
	return out;
}

