#pragma once
#include "Empleados.h"
#ifndef CELADOR_H
#define CELADOR_H
#include <string>
#include<iostream>

class Celador : public Empleados {
	string zonaDeVigilia;

public:
	Celador();
	Celador(string nombre, string apellido, string genero, int edad, string labor, string zonaDeVigilia);

	void print()override;

	string getZonaDeVigilia();
	void setZonaDeVigilia(string zonaDeVigilia);

	void recibirEntrada();
	void patrullar();

	friend ostream& operator<<(ostream& out, Celador& persona);

};
#endif