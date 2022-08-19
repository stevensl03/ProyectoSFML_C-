#pragma once

#ifndef GUACAMAYA_H
#define GUACAMAYA_H
#include <string>
#include <iostream>
#include "Animal.h"
#include "InterfazAnimal.h"
#include "InterfazAereos.h"
#include "InterfazHervivoros.h"
#include "InterfazOviparos.h"

using namespace std;

class Guacamaya : public Animal, public InterfazAnimal, public InterfazAereos, public InterfazHervivoros, public InterfazOviparos {

	int esperanzaVida;

public:

	Guacamaya();
	Guacamaya(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int esperanzaVida);

	int getEsperanzaVida();
	void setEsperanzaVida(int esperanzaVida);

	void print() override;

	void dormir()override;
	void jugar()override;
	void comer()override;

	void volar()override;
	void graznar()override;

	void pastar()override;
	void defender()override;

	void reproducir()override;
	void desarrollar()override;

};

#endif // GUACAMAYA_H