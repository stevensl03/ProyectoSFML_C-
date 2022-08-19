#pragma once
#include "Empleados.h"
#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <string>
#include<iostream>

class Vendedor : public Empleados {
	string tienda;

public:
	Vendedor();
	Vendedor(string nombre, string apellido, string genero, int edad, string labor, string tienda);

	void print()override;

	string getTienda();
	void setTienda(string tienda);

	void vender();

	friend ostream& operator<<(ostream& out, Vendedor& persona);


};
#endif