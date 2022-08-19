#pragma once
#ifndef LEON_H
#define LEON_H
#include <string>
#include <iostream>
#include "Animal.h"
#include "InterfazAnimal.h"
#include "InterfazTerrestres.h"
#include "InterfazCarnivoros.h"

using namespace std;

class Leon : public Animal, public InterfazAnimal, public InterfazTerrestres, public InterfazCarnivoros {

	int tamañoMelena;

public:

	Leon();
	Leon(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int tamañoMelena);

	int getTamañoMelena();
	void setTamañoMelena(int tamañoMelena);

	void print() override;

	void dormir()override;
	void jugar()override;
	void comer()override;

	void correr()override;
	void arrastrarse()override;

	void devorar()override;
	void atacar()override;
	friend ostream& operator<<(ostream& out, Leon& animal);


};

#endif // LEON_H