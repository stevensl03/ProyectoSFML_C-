#pragma once

#ifndef CEBRA_H
#define CEBRA_H
#include <string>
#include <iostream>
#include "Animal.h"
#include "InterfazAnimal.h"
#include "InterfazTerrestres.h"
#include "InterfazHervivoros.h"

using namespace std;

class Cebra : public Animal, public InterfazAnimal, public InterfazTerrestres, public InterfazHervivoros{
	string tipoComida;
public:
	Cebra();
	Cebra(int tipoAnimal, int peso, float tamaño, string habitad, string raza, string tipoComida);

	string getTipoComida();
	void setTipoComida(string tipoComida);

	void dormir()override;
	void jugar()override;
	void comer()override;

	void correr()override;
	void arrastrarse()override;

	void pastar()override;
	void defender()override;



};

#endif // CEBRA_H