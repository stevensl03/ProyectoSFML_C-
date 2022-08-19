#pragma once

#ifndef ASEADOR_H
#define ASEADOR_H
#include <string>
#include<iostream>
#include "Empleados.h"

class Aseador : public Empleados {


public:
	Aseador();
	Aseador(string nombre, string apellido, string labor);
	void limpiar();

};
#endif // ASEADOR_H