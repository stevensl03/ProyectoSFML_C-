#include "Animal.h"
#include <iostream>


//constructor
Animal::Animal(int tipoAnimal, int peso, float tama�o, string habitad, string raza) {
	this->tipoAnimal = tipoAnimal;
	this->peso = peso;
	this->tama�o = tama�o;
	this->habitad = habitad;
	this->raza = raza;
}

void Animal::print()
{
	void printAnimales();
	cout << "Tipo de animal: " << getTipoAnimal() << endl;
	cout << "Peso: " << getPeso() << endl;
	cout << "Habitad: " << getHabitad() << endl;
	cout << "Raza: " << getRaza() << endl;
	cout << "Tama�o: " << getTama�o() << endl;
}

//Tipo Animal
int Animal::getTipoAnimal() { return tipoAnimal; }
void Animal::setTipoAnimal(int tipoAnimal) { this->tipoAnimal = tipoAnimal; }

//Peso
int Animal::getPeso() { return peso; }
void Animal::setPeso(int peso) { this->peso = peso; }

//Habitad
string Animal::getHabitad() { return habitad; }
void Animal::setHabitad(string habitad) { this->habitad = habitad; }

//Raza
string Animal::getRaza() { return raza; }
void Animal::setRaza(string raza) { this->raza = raza; }

//Tama�o
float Animal::getTama�o() { return tama�o; }
void Animal::setTtama�o(float tama�o) { this->tama�o = tama�o; }








ostream& operator<<(ostream& out, Animal* animal)
{
	out << "Tipo de animal: " << animal->getTipoAnimal() << endl;
	out << "Peso: " << animal->getPeso() << endl;
	out << "Habitad: " << animal->getHabitad() << endl;
	out << "Raza: " << animal->getRaza() << endl;
	out << "Tama�o: " << animal->getTama�o() << endl;

	return out;
}

istream& operator>>(istream& input, Animal& animal)
{
	cout << "Tipo de animal: ";
	input >> animal.tipoAnimal;

	cout << "Digite el peso: ";
	input >> animal.peso;

	cout << "Digite el habitad en que vive: ";
	input >> animal.habitad;

	cout << "Digite el nombre de la raza: ";
	input >> animal.raza;

	cout << "Digite el tama�o: ";
	input >> animal.tama�o;

	return input;
}

