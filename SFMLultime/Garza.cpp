#include "Garza.h"

Garza::Garza() : Animal() {
	largoCuello = 0;
}

Garza::Garza(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int largoCuello) :Animal(tipoAnimal, peso, tamaño, habitad, raza)
{
	this->largoCuello = largoCuello;
}

int Garza::getLargoCuello() { return largoCuello; }
void Garza::setLargoCuello(int largoCuello) { this->largoCuello = largoCuello; }

void Garza::print()
{
	cout << "--Informacion de la garza-- \n\n" << endl;;
	Animal::print();
	cout << "Largo de cuello: " << getLargoCuello() << endl << endl;
}

void Garza::dormir()
{
	cout << "La garza esta durmiendo. " << endl;
}

void Garza::jugar()
{
	cout << "La garza esta jugando. " << endl;
}

void Garza::comer()
{
	cout << "La garza esta comiendo. " << endl;
}

void Garza::volar()
{
	cout << "La garza esta volando. " << endl;
}

void Garza::graznar()
{
	cout << "La garza esta gritando. " << endl;
}

void Garza::devorar()
{
	cout << "La garza esa devorando su comida. " << endl;
}

void Garza::atacar()
{
	cout << "La garza esta atacando. " << endl;
}

void Garza::reproducir()
{
	cout << "La garza se esta reproduciendo. " << endl;
}

void Garza::desarrollar()
{
	cout << "EL huevo de garza se esta desarrolando. " << endl;
}

/*ostream& operator<<(ostream& out, Garza* animal)
{
	out << "Tipo de animal: " << animal->getTipoAnimal() << endl;
	out << "Peso: " << animal->getPeso() << endl;
	out << "Habitad: " << animal->getHabitad() << endl;
	out << "Raza: " << animal->getRaza() << endl;
	out << "Tamaño: " << animal->getTamaño() << endl;
	out << "Largo de cuello " << animal->getLargoCuello() << endl;
	return out;
}*/

