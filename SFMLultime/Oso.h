#pragma once

#ifndef OSO_H
#define OSO_H
#include <string>
#include <iostream>
#include "Animal.h"
#include "InterfazAnimal.h"
#include "InterfazTerrestres.h"
#include "InterfazCarnivoros.h"


using namespace std;

class Oso : public Animal, public InterfazAnimal, public InterfazTerrestres, public InterfazCarnivoros {
	string tipoPelaje;

public:
	Oso();
	Oso(int tipoAnimal, int peso, float tamaño, string habitad, string raza, string tipoPelaje);

	string getTipoPelaje();
	void setTipoPelaje(string TipoPelaje);

	void print() override;

	void dormir()override;
	void jugar()override;
	void comer()override;

	void correr()override;
	void arrastrarse()override;

	void devorar()override;
	void atacar()override;

	friend ostream& operator<<(ostream& out, Oso& animal);



};

#endif // OSO_H