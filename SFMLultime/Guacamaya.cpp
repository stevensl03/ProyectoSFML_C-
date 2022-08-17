#include "Guacamaya.h"

Guacamaya::Guacamaya()
{
	esperanzaVida = 0;
}

Guacamaya::Guacamaya(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int esperanzaVida) :Animal(tipoAnimal, peso, tamaño, habitad, raza)
{
	this->esperanzaVida = esperanzaVida;
}

int Guacamaya::getEsperanzaVida() { return esperanzaVida; }
void Guacamaya::setEsperanzaVida(int esperanzaVida) { this->esperanzaVida = esperanzaVida; }

void Guacamaya::dormir()
{
	cout << "La guacamaya esta durmiendo. " << endl;
}

void Guacamaya::jugar()
{
	cout << "La guacamaya esta jugando. " << endl;
}

void Guacamaya::comer()
{
	cout << "La guacamaya esta comiendo. " << endl;
}

void Guacamaya::volar()
{
	cout << "La guacamaya esta volando. " << endl;
}

void Guacamaya::graznar()
{
	cout << "La guacamaya esta  gritando. " << endl;
}

void Guacamaya::pastar()
{
	cout << "La guacamaya esta pastando??. " << endl;
}

void Guacamaya::defender()
{
	cout << "La guacamaya se esta defendiendo. " << endl;
}

void Guacamaya::reproducir()
{
	cout << "La guacamaya se esta reproduciendo. " << endl;
}

void Guacamaya::desarrollar()
{
	cout << "El huevo de guacamaya se esta desarrolando. " << endl;
}
