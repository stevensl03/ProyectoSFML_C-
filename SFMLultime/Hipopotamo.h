#pragma once
#include "InterfazAcuaticos.h"
#include "Animal.h"
#include "InterfazMamiferos.h"

#ifndef HIPOPOTAMO_H
#define HIPOPOTAMO_H
#include <string>
#include <iostream>

using namespace std;

class Hipopotamo : public Animal, public InterfazAcuaticos, public InterfazMamiferos {
	int TamañoDientes;

public:
	Hipopotamo();
	Hipopotamo(int tipoAnimal, int peso, float tamaño, string habitad, string raza, int TamañoDientes);

	int getTamañoDientes();
	void setTamañoDientes(int Peso);

	void print() override; 

	void nadar()override;
	void respirar()override;
	void nacer()override;
	void crecer()override;
};

#endif