#include "HabitadTropical.h"

HabitadTropical::HabitadTropical()
{
	tamaño = 0;
	nivelVegetacion = "";
	osos.push_back(new Oso());
	cocobrilos.push_back(new Cocodrilo);
	aguilas.push_back(new Aguila);
}

HabitadTropical::HabitadTropical(float tamaño, string nivelVegetacion, vector<Oso*> osos, vector<Cocodrilo*> cocobrilos, vector<Aguila*> aguilas)
{
	this->tamaño = tamaño;
	this->nivelVegetacion = nivelVegetacion;
	this->osos = osos;
	this->cocobrilos = cocobrilos;
	this->aguilas = aguilas;
}
