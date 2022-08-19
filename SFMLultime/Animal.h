#pragma once

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;

class Animal {
	int tipoAnimal, peso;
	float tamaño;
	string habitad, raza;


public:
	Animal() :tipoAnimal(0), peso(0), tamaño(0.f), habitad(""), raza("") {}
	Animal(int tipoAnimal, int peso, float tamaño, string habitad, string raza);

	//Metodos

virtual void print();


	//get and set 
	int getTipoAnimal();
	void setTipoAnimal(int tipoAnimal);

	int getPeso();
	void setPeso(int peso);

	string getHabitad();
	void setHabitad(string habitad);

	string getRaza();
	void setRaza(string raza);

	float getTamaño();
	void setTtamaño(float tamaño);

	//friend ostream & operator<<(ostream & out, Animal * animal);
	//friend istream& operator>>(istream& input, Animal& animal);


};
#endif // ANIMAL_H