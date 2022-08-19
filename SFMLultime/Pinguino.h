#pragma once
#include "InterfazAcuaticos.h"
#include "Animal.h"
#include "InterfazOviparos.h"

#ifndef PINGUINO_H
#define PINGUINO_H
#include <string>
#include <iostream>

using namespace std;

class Pinguino : public Animal, public InterfazAcuaticos, public InterfazOviparos {
	string ColorPecho;
public:
	Pinguino();
	Pinguino(int tipoAnimal, int peso, float tamaño, string habitad, string raza, string ColorPecho);

	string getColorPecho();
	void setColorPecho(string ColorPecho);

	void print()override;

	void nadar()override;
	void respirar()override;
	void reproducir()override;
	void desarrollar()override;

	friend ostream& operator<<(ostream& out, Pinguino& animal);

};

#endif