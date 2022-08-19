#include "HabitadTropical.h"

HabitadTropical::HabitadTropical()
{
	tama�o = 0;
	nivelVegetacion = "";
	osos.push_back(new Oso());
	cocobrilos.push_back(new Cocodrilo);
	aguilas.push_back(new Aguila);
}

HabitadTropical::HabitadTropical(float tama�o, string nivelVegetacion, vector<Oso*> osos, vector<Cocodrilo*> cocobrilos, vector<Aguila*> aguilas)
{
	this->tama�o = tama�o;
	this->nivelVegetacion = nivelVegetacion;
	this->osos = osos;
	this->cocobrilos = cocobrilos;
	this->aguilas = aguilas;
}
