#pragma once
#include "Persona.h"
#ifndef VISITANTE_H
#define VISITANTE_H
#include <string>
#include<iostream>

class Visitante : public Persona {

	float dineroGastado;

public:
	Visitante();
	Visitante(string nombre, string apellido, string genero, int edad, float dineroGastado);

	void print() override;

	float getDineroGastado();
	void setDineroGastado(float dineroGastado);
	void fotografiar();

	friend ostream& operator<<(ostream& out, Visitante& persona);


};
#endif