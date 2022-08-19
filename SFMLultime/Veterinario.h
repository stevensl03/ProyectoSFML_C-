#pragma once
#include "Empleados.h"
#ifndef VETERINARIO_H
#define VETERINARIO_H
#include <string>
#include<iostream>

class Veterinario : public Empleados {

	string destreza;
public:
	Veterinario();
	Veterinario(string nombre, string apellido, string genero, int edad, string labor, string destreza);

	void print()override;

	string getDestreza();
	void setDestreza(string destreza);

	void evaluar();

	friend ostream& operator<<(ostream& out, Veterinario &persona);

};
#endif