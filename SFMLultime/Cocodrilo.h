#pragma once
#include "Animal.h"
#include "InterfazAcuaticos.h"
#include "InterfazAnimal.h"
#include "InterfazOviparos.h"

#ifndef COCODRILO_H
#define COCODRILO_H
#include <string>
#include <iostream>

using namespace std;

class Cocodrilo : public Animal, public InterfazAcuaticos, public InterfazOviparos {
	int largoCola;
public:
	Cocodrilo();
	Cocodrilo(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int largoCola);

	int getLargoCola();
	void setLargoCola(int largoCola);



	void nadar()override;
	void respirar()override;
	void reproducir()override;
	void desarrollar()override;
};

#endif