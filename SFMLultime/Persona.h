#pragma once
#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include<iostream>

using namespace std;

class Persona {

private:
	string nombre, apellido, genero;
	int edad;

public:
	Persona();
	Persona(string nombre, string apellido, string genero, int edad);

	virtual void print();

	string getNombre();
	void setNombre(string nombre);

	string getApellido();
	void setApellido(string apellido);

	string getGenero();
	void setGenero(string genero);

	int  getEdad();
	void setEdad(int edad);


	void saludar();

	friend ostream& operator<<(ostream& input, Persona persona);
	friend istream& operator>>(istream& input, Persona persona);


};

#endif