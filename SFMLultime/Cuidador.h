#pragma once
#include "Empleados.h"
#ifndef CUIDADOR_H
#define CUIDADOR_H
#include <string>
#include<iostream>

class Cuidador : public Empleados {


public:
	Cuidador();
	Cuidador(string nombre, string apellido, string labor);
	void alimentar();

};
#endif