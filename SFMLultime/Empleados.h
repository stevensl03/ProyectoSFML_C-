#pragma once
#include "Persona.h"
#ifndef EMPLEADOS_H
#define EMPLEADOS_H
#include <string>
#include<iostream>


class Empleados : public Persona {

	string labor;

public:
	Empleados();
	Empleados(string nombre, string apellido, string genero, int edad, string labor);

	void print()override;

	string getLabor();
	void setLabor(string labor);

	void trabajar();

	friend ostream& operator<<(ostream& out, Empleados& persona);


};
#endif