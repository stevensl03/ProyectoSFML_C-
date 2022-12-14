#include "Leon.h"

Leon::Leon() : Animal() {
    tamaņoMelena = 0;
}

Leon::Leon(int tipoAnimal, int peso, float tamaņo, string habitad, string raza, int tamaņoMelena) :Animal(tipoAnimal, peso, tamaņo, habitad, raza)
{
    this->tamaņoMelena = tamaņoMelena;
}

int Leon::getTamaņoMelena() { return tamaņoMelena; }
void Leon::setTamaņoMelena(int tamaņoMelena) { this->tamaņoMelena = tamaņoMelena; }

void Leon::print()
{
    cout << "--Informacion del leon-- \n\n" << endl;
    Animal::print();
    cout << "Tamaņo de la melena: " << getTamaņoMelena() << endl << endl;
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

ostream& operator<<(ostream& out, Leon& animal)
{
    animal.print();
    return out;
}

