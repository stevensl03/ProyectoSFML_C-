#include "Aguila.h"

Aguila::Aguila() : Animal()
{
	ColorPlumaje = "";
}

Aguila::Aguila(int tipoAnimal, int peso, float tamaño, string habitad, string raza, string colorPlumaje) :Animal(tipoAnimal, peso, tamaño, habitad, raza)
{
	this->ColorPlumaje = colorPlumaje;
}

string Aguila::getColorPlumaje() { return ColorPlumaje; }
void Aguila::setColorPlumaje(string colorPlumaje) { this->ColorPlumaje = colorPlumaje; }

void Aguila::print()
{
	cout << "--Informacion del aguila-- \n\n" << endl;;
	Animal::print();
	cout << "Color del plumaje: " << getColorPlumaje() << endl <<endl;
}





//ACCIONES

void Aguila::dormir()
{
	cout << "El agula esta durmiendo. " << endl;
}

void Aguila::jugar()
{
	cout << "El aguila esta jugando. " << endl;
}

void Aguila::comer()
{
	cout << "El agula esta comiendo. " << endl;
}

void Aguila::volar()
{
	cout << "El aguila esta volando. " << endl;
}

void Aguila::graznar()
{
	cout << "El aguila esta gritando. " << endl;
}

void Aguila::devorar()
{
	cout << "El aguila esta devorando su comida. " << endl;
}

void Aguila::atacar()
{
	cout << "El aguila esta atacando. " << endl;
}

void Aguila::reproducir()
{
	cout << "El aguila se esta reproduciendo. " << endl;
}

void Aguila::desarrollar()
{
	cout << "El huvo de aguila se esta desarrolando" << endl;
}

ostream& operator<<(ostream& out, Aguila& animal)
{
	animal.print();
	return out;
}
