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

	int tamaņoMelena;

public:

	Leon();
	Leon(int tipoAnimal, int peso, float tamaņo, string habitad, string raza, int tamaņoMelena);

	int getTamaņoMelena();
	void setTamaņoMelena(int tamaņoMelena);

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