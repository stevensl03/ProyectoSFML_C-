#pragma once

#ifndef ASEADOR_H
#define ASEADOR_H
#include <string>
#include<iostream>
#include "Empleados.h"

class Aseador : public Empleados {
	string zonaLimpieza;

public:
	Aseador();
	Aseador(string nombre, string apellido, string genero, int edad, string labor,string zonaLimpieza);

	void print()override;

	string getZonaLimpieza();
	void setZonaLimpieza( string zonaLimpieza);

	void limpiar();

	friend ostream& operator<<(ostream& out, Aseador& persona);


};
#endif // ASEADOR_H