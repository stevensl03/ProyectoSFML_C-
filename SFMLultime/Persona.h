#pragma once
#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include<iostream>

using namespace std;

class Persona {

private:
	string nombre, apellido;

public:
	Persona();
	Persona(string nombre, string apellido);

	string getnombre();
	void setnombre(string nombre);
	void saludar();
};

#endif