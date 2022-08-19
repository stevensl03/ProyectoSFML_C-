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
	Vendedor(string nombre, string apellido, string labor, string tienda);

	string gettienda();
	void settienda(string tienda);

	void vender();

};
#endif