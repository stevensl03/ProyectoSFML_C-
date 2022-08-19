#pragma once

#ifndef AGUILA_H
#define AGUILA_H
#include <string>
#include <iostream>
#include "Animal.h"
#include "InterfazAnimal.h"
#include "InterfazAereos.h"
#include "InterfazCarnivoros.h"
#include "InterfazOviparos.h"

using namespace std;

class Aguila : public Animal, public InterfazAnimal, public InterfazAereos, public InterfazCarnivoros, public InterfazOviparos{
	string ColorPlumaje;

public:
	Aguila();
	Aguila(int tipoAnimal, int peso, float tamaño, string habitad, string raza, string colorPlumaje);

	string getColorPlumaje();
	void setColorPlumaje(string colorPlumaje);

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




};

#endif // AGUILA_H