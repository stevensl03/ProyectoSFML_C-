#pragma once
#include "Persona.h"
#ifndef VISITANTE_H
#define VISITANTE_H
#include <string>
#include<iostream>

class Visitante : public Persona {

	int edad;

public:
	Visitante();
	Visitante(string nombre, string apellido, int edad);

	int getedad();
	void setedad(int edad);

	void fotografiar();

};
#endif