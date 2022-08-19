#include "Cebra.h"

Cebra::Cebra() : Animal()
{
    tipoComida = "";
}

Cebra::Cebra(int tipoAnimal, int peso, float tamaño, string habitad, string raza, string tipoComida) :Animal(tipoAnimal, peso, tamaño, habitad, raza)
{
    this->tipoComida = tipoComida;
}

string Cebra::getTipoComida() { return tipoComida; }
void Cebra::setTipoComida(string tipoComida) { this->tipoComida = tipoComida; }

void Cebra::print()
{
    cout << "--Informacion de la zebra-- \n\n" << endl;;
    Animal::print();
    cout << "Tipo de comida: " << getTipoComida() << endl << endl;
}

void Cebra::dormir()
{
    cout << "La cebra esta durmiendo. " << endl;
}

void Cebra::jugar()
{
    cout << "La cebra esta jugando. " << endl;
}

void Cebra::comer()
{
    cout << "La cebra esta comiendo. " << endl;
}

void Cebra::correr()
{
    cout << "La cebra esta corriendo. " << endl;
}

void Cebra::arrastrarse()
{
    cout << "La cerbra se esta arrastarando. " << endl;
}

void Cebra::pastar()
{
    cout << "La cebra esta pastando. " << endl;
}

void Cebra::defender()
{
    cout << "La cebra se esta defendiendo. " << endl;
}

ostream& operator<<(ostream& out, Cebra& animal)
{
    animal.print();
    return out;
}

