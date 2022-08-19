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
	Empleados(string nombre, string apellido, string labor);

	string getlabor();
	void setlabor(string labor);

	void trabajar();

};
#endif