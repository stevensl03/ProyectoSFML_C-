#pragma once
#include "Empleados.h"
#ifndef VETERINARIO_H
#define VETERINARIO_H
#include <string>
#include<iostream>

class Veterinario : public Empleados {


public:
	Veterinario();
	Veterinario(string nombre, string apellido, string labor);
	void evaluar();

};
#endif