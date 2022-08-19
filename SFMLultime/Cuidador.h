#pragma once
#include "Empleados.h"
#ifndef CUIDADOR_H
#define CUIDADOR_H
#include <string>
#include<iostream>

class Cuidador : public Empleados {
	int aparatosReparados;
public:
	Cuidador();
	Cuidador(string nombre, string apellido, string genero, int edad, string labor, int aparatosReparados);

	void print()override;

	int getAparatosReparados();
	void setAparatosReparados(int aparatosReparados);

	void alimentar();

	friend ostream& operator<<(ostream& out, Cuidador& persona);

};
#endif