#include "Leon.h"

Leon::Leon() : Animal() {
    tamañoMelena = 0;
}

Leon::Leon(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int tamañoMelena) :Animal(tipoAnimal, peso, tamaño, habitad, raza)
{
    this->tamañoMelena = tamañoMelena;
}

int Leon::getTamañoMelena() { return tamañoMelena; }
void Leon::setTamañoMelena(int tamañoMelena) { this->tamañoMelena = tamañoMelena; }

void Leon::print()
{
    cout << "--Informacion del leon-- \n\n" << endl;
    Animal::print();
    cout << "Tamaño de la melena: " << getTamañoMelena() << endl << endl;
}

void Leon::dormir()
{
    cout << "EL leon esta durmiendo. " << endl;
}

void Leon::jugar()
{
    cout << "El leon esta jugando. " << endl;
}

void Leon::comer()
{
    cout << "El leon esta comiendo. " << endl;
}

void Leon::correr()
{
    cout << "El leon esta corriendo. " << endl;
}

void Leon::arrastrarse()
{
    cout << "El leon se est arrastrando ??? " << endl;
}

void Leon::devorar()
{
    cout << "El leon esta devorando la comida. " << endl;
}

void Leon::atacar()
{
    cout << "EL Leon esta atacando. " << endl;

}