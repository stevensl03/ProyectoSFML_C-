#pragma once

#ifndef GARZA_H
#define GARZA_H
#include <string>
#include <iostream>
#include "Animal.h"
#include "InterfazAnimal.h"
#include "InterfazAereos.h"
#include "InterfazCarnivoros.h"
#include "InterfazOviparos.h"

using namespace std;

class Garza : public Animal,public InterfazAnimal, public InterfazAereos, public InterfazCarnivoros, public InterfazOviparos {
	int largoCuello;
public:
	Garza();
	Garza(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int largoCuello);

	int getLargoCuello();
	void setLargoCuello(int largoCuello);

	void print() override;

	void dormir()override;
	void jugar()override;
	void comer()override;

	void volar()override;
	void graznar()override;

	void devorar()override;
	void atacar()override;

	void reproducir()override;
	void desarrollar()override;


	//friend ostream& operator<<(ostream& out, Garza* animal);

};

#endif // GARZA_H