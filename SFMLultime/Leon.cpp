#include "Leon.h"

Leon::Leon() : Animal() {
    tama�oMelena = 0;
}

Leon::Leon(int tipoAnimal, int peso, float tama�o, string habitad, string raza, int tama�oMelena) :Animal(tipoAnimal, peso, tama�o, habitad, raza)
{
    this->tama�oMelena = tama�oMelena;
}

int Leon::getTama�oMelena() { return tama�oMelena; }
void Leon::setTama�oMelena(int tama�oMelena) { this->tama�oMelena = tama�oMelena; }

void Leon::print()
{
    cout << "--Informacion del leon-- \n\n" << endl;
    Animal::print();
    cout << "Tama�o de la melena: " << getTama�oMelena() << endl << endl;
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