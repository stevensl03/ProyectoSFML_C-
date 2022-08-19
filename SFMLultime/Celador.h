#pragma once
#include "Empleados.h"
#ifndef CELADOR_H
#define CELADOR_H
#include <string>
#include<iostream>

class Celador : public Empleados {


public:
	Celador();
	Celador(string nombre, string apellido, string labor);
	void recibirentrada();
	void patrullar();
};
#endif